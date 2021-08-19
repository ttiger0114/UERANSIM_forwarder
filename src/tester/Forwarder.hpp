#ifndef __FORWARDER__
#define __FORWARDER__

#include <iostream>
#include <string>
#include <vector>
#include <utils/network.hpp>
#include "ue_types.hpp"
#include "gnb_types.hpp"
#include <lib/app/cli_cmd.hpp>
#include <memory>
#include <utils/nts.hpp>
#include "ue_nts.hpp"
#include "gnb_nts.hpp"

class Forwarder
{
    private:
        struct addr_n_sock
        {
            static int ID_cur;

            int ID;
            InetAddress addr;
            Socket sock;

            addr_n_sock(InetAddress addr_t, Socket sock_t) : addr{addr_t}, sock{sock_t}, ID{ID_cur++} {};
        };

    private:
        Socket false_gnb_sock;

        std::string IP;
        uint16_t PORT;

        std::vector<Socket> listen_socks;
        std::vector<struct addr_n_sock> addr_sock_pair;
        
        InetAddress gNB_addr;

    public:
        Forwarder(const std::string GNB_IP, 
                const uint16_t GNB_PORT,
                const std::string IP,
                const uint16_t PORT);

        int do_work(void);

    private:
        int handle_UEs_packet(const uint8_t buf[], const int data_size, uint8_t rt_buf[], int& rt_size);
        int handle_gNBs_packet(const uint8_t buf[], const int data_size, uint8_t rt_buf[], int& rt_size);
};

// To Decode RLS Message
struct NmUeRlsToRls : NtsMessage
{
    enum PR
    {
        RECEIVE_RLS_MESSAGE,
        SIGNAL_CHANGED,
        UPLINK_DATA,
        UPLINK_RRC,
        DOWNLINK_DATA,
        DOWNLINK_RRC,
        RADIO_LINK_FAILURE,
        TRANSMISSION_FAILURE,
        ASSIGN_CURRENT_CELL,
    } present;

    // RECEIVE_RLS_MESSAGE
    // UPLINK_RRC
    // DOWNLINK_RRC
    // SIGNAL_CHANGED
    // ASSIGN_CURRENT_CELL
    int cellId{};

    // RECEIVE_RLS_MESSAGE
    std::unique_ptr<rls::RlsMessage> msg{};

    // SIGNAL_CHANGED
    int dbm{};

    // UPLINK_DATA
    // DOWNLINK_DATA
    int psi{};

    // UPLINK_DATA
    // DOWNLINK_DATA
    // UPLINK_RRC
    // DOWNLINK_RRC
    OctetString data;

    // UPLINK_RRC
    // DOWNLINK_RRC
    rrc::RrcChannel rrcChannel{};

    // UPLINK_RRC
    uint32_t pduId{};

    // RADIO_LINK_FAILURE
    rls::ERlfCause rlfCause{};

    // TRANSMISSION_FAILURE
    std::vector<rls::PduInfo> pduList;

    explicit NmUeRlsToRls(PR present) : NtsMessage(NtsMessageType::UE_RLS_TO_RLS), present(present)
    {
    }
};

// To Decode NAS Message for UE
struct NmUeRrcToNas : NtsMessage
{
    enum PR
    {
        NAS_NOTIFY,
        NAS_DELIVERY,
        RRC_CONNECTION_SETUP,
        RRC_CONNECTION_RELEASE,
        RRC_ESTABLISHMENT_FAILURE,
        RADIO_LINK_FAILURE,
        PAGING,
        ACTIVE_CELL_CHANGED,
        RRC_FALLBACK_INDICATION,
    } present;

    // NAS_DELIVERY
    OctetString nasPdu;

    // PAGING
    std::vector<GutiMobileIdentity> pagingTmsi;

    // ACTIVE_CELL_CHANGED
    Tai previousTai;

    explicit NmUeRrcToNas(PR present) : NtsMessage(NtsMessageType::UE_RRC_TO_NAS), present(present)
    {
    }
};

// To Decode NAS Message for gNB
struct NmGnbRrcToNgap : NtsMessage
{
    enum PR
    {
        INITIAL_NAS_DELIVERY,
        UPLINK_NAS_DELIVERY,
        RADIO_LINK_FAILURE
    } present;

    // INITIAL_NAS_DELIVERY
    // UPLINK_NAS_DELIVERY
    // RADIO_LINK_FAILURE
    int ueId{};

    // INITIAL_NAS_DELIVERY
    // UPLINK_NAS_DELIVERY
    OctetString pdu{};

    // INITIAL_NAS_DELIVERY
    long rrcEstablishmentCause{};

    explicit NmGnbRrcToNgap(PR present) : NtsMessage(NtsMessageType::GNB_RRC_TO_NGAP), present(present)
    {
    }
};

#endif
