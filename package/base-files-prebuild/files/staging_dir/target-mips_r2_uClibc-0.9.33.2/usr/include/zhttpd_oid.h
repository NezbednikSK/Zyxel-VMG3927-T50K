#define ZHTTP_OID_DICTIONARY_NUM 521

typedef struct _zHttpOidParallel{
	char* abbreviation;
	zcfg_offset_t oid;
}zHttpOidParallel;

zHttpOidParallel oidDictionary[] = {
	{"RDM_OID_ACL",		125292},
	{"RDM_OID_ACTIONS",		125460},
	{"RDM_OID_ANI",		129504},
	{"RDM_OID_ATM",		35652},
	{"RDM_OID_ATM_DIAG",		37020},
	{"RDM_OID_ATM_DIAG_F4_LO",		37356},
	{"RDM_OID_ATM_DIAG_F5_LO",		37056},
	{"RDM_OID_ATM_LINK",		35712},
	{"RDM_OID_ATM_LINK_QOS",		36864},
	{"RDM_OID_ATM_LINK_ST",		36252},
	{"RDM_OID_AUTO_PROV",		116916},
	{"RDM_OID_BLACK_U_R_L_FILTER",		136248},
	{"RDM_OID_BRIDGING",		62712},
	{"RDM_OID_BRIDGING_BR",		62988},
	{"RDM_OID_BRIDGING_BR_PORT",		63312},
	{"RDM_OID_BRIDGING_BR_PORT_ST",		63780},
	{"RDM_OID_BRIDGING_BR_VLAN",		64176},
	{"RDM_OID_BRIDGING_BR_VLANPORT",		64308},
	{"RDM_OID_BRIDGING_FILTER",		64464},
	{"RDM_OID_BULK_DATA",		113508},
	{"RDM_OID_BULK_DATA_PROF",		113736},
	{"RDM_OID_BULK_DATA_PROF_PARAM",		114108},
	{"RDM_OID_CALL_POLICY_BOOK",		13068},
	{"RDM_OID_CALL_POLICY_BOOK_LIST",		13152},
	{"RDM_OID_CAPABILITY",		130104},
	{"RDM_OID_CAPT_PORTAL",		80880},
	{"RDM_OID_CELLULAR",		43956},
	{"RDM_OID_CELLULAR_ACCESS_POINT",		44520},
	{"RDM_OID_CELLULAR_IFACE_U_S_I_M",		44412},
	{"RDM_OID_CELLULAR_INTERFACE",		44064},
	{"RDM_OID_CHANGE_ICON_NAME",		124260},
	{"RDM_OID_CNGSTCFG",		131892},
	{"RDM_OID_COMMON",		130608},
	{"RDM_OID_CONGEST_THRED_VALUE",		132120},
	{"RDM_OID_CONTENT_FILTER",		135516},
	{"RDM_OID_CONTROL_POINT",		125328},
	{"RDM_OID_DEVICE",		0 },
	{"RDM_OID_DEV_INFO",		14976},
	{"RDM_OID_DEV_INFO_LOC",		17136},
	{"RDM_OID_DEV_INFO_MEM_STAT",		15852},
	{"RDM_OID_DEV_INFO_POWER_STAT",		17292},
	{"RDM_OID_DEV_INFO_PROCESSOR",		16788},
	{"RDM_OID_DEV_INFO_PROXIER_INFO",		17004},
	{"RDM_OID_DEV_INFO_PS_STAT",		15936},
	{"RDM_OID_DEV_INFO_PS_STAT_PS",		16020},
	{"RDM_OID_DEV_INFO_SUP_DATA_MODEL",		15720},
	{"RDM_OID_DEV_INFO_VENDOR_LOG_FILE",		16872},
	{"RDM_OID_DEV_INFO_VEND_CONF_FILE",		15564},
	{"RDM_OID_DEV_MCST_TABLE",		118920},
	{"RDM_OID_DEV_SEC",		109404},
	{"RDM_OID_DEV_SEC_CERT",		109464},
	{"RDM_OID_DEV_SNOOP_TABLE",		118764},
	{"RDM_OID_DHCPV4",		94836},
	{"RDM_OID_DHCPV4_CLIENT",		94896},
	{"RDM_OID_DHCPV4_RELAY",		97380},
	{"RDM_OID_DHCPV4_RELAY_FWD",		97488},
	{"RDM_OID_DHCPV4_REQ_OPT",		95496},
	{"RDM_OID_DHCPV4_SENT_OPT",		95364},
	{"RDM_OID_DHCPV4_SRV",		95652},
	{"RDM_OID_DHCPV4_SRV_POOL",		95760},
	{"RDM_OID_DHCPV4_SRV_POOL_CLIENT",		96876},
	{"RDM_OID_DHCPV4_SRV_POOL_CLIENT_OPT",		97116},
	{"RDM_OID_DHCPV4_SRV_POOL_CLIENT_V4_ADDR",		97032},
	{"RDM_OID_DHCPV4_SRV_POOL_OPT",		96744},
	{"RDM_OID_DHCPV4_SRV_POOL_STATIC_ADDR",		96612},
	{"RDM_OID_DHCPV4_SRV_SUBNET",		97200},
	{"RDM_OID_DHCPV6",		97932},
	{"RDM_OID_DHCPV6_CLIENT",		97992},
	{"RDM_OID_DHCPV6_CLIENT_RECEIVED_OPT",		98676},
	{"RDM_OID_DHCPV6_CLIENT_SENT_OPT",		98544},
	{"RDM_OID_DHCPV6_CLIENT_SRV",		98436},
	{"RDM_OID_DHCPV6_SRV",		98784},
	{"RDM_OID_DHCPV6_SRV_POOL",		98868},
	{"RDM_OID_DHCPV6_SRV_POOL_CLIENT",		99624},
	{"RDM_OID_DHCPV6_SRV_POOL_CLIENT_OPT",		100020},
	{"RDM_OID_DHCPV6_SRV_POOL_CLIENT_V6_ADDR",		99804},
	{"RDM_OID_DHCPV6_SRV_POOL_CLIENT_V6_PREFIX",		99912},
	{"RDM_OID_DHCPV6_SRV_POOL_OPT",		100104},
	{"RDM_OID_DLNA",		103320},
	{"RDM_OID_DLNA_CAPB",		103500},
	{"RDM_OID_DNS",		91272},
	{"RDM_OID_DNS_CLIENT",		91428},
	{"RDM_OID_DNS_CLIENT_SRV",		91560},
	{"RDM_OID_DNS_DIAG",		92148},
	{"RDM_OID_DNS_DIAG_NS_LOOKUP_DIAG",		92184},
	{"RDM_OID_DNS_DIAG_NS_LOOKUP_DIAG_RESULT",		92436},
	{"RDM_OID_DNS_ENTRY",		116412},
	{"RDM_OID_DNS_RELAY",		91836},
	{"RDM_OID_DNS_RELAY_FWD",		91968},
	{"RDM_OID_DNS_RT_ENTRY",		116184},
	{"RDM_OID_DSL",		22488},
	{"RDM_OID_DSL_BOND_GP",		31392},
	{"RDM_OID_DSL_BOND_GP_BONDED_CHANNEL",		31908},
	{"RDM_OID_DSL_BOND_GP_BONDED_CHANNEL_ETH",		31992},
	{"RDM_OID_DSL_BOND_GP_BONDED_CHANNEL_ETH_ST",		32028},
	{"RDM_OID_DSL_BOND_GP_ETH",		33624},
	{"RDM_OID_DSL_BOND_GP_ETH_ST",		33660},
	{"RDM_OID_DSL_BOND_GP_ST",		32256},
	{"RDM_OID_DSL_BOND_GP_ST_CURRENT_DAY",		33024},
	{"RDM_OID_DSL_BOND_GP_ST_QTR_HR",		33324},
	{"RDM_OID_DSL_BOND_GP_ST_TOTAL",		32724},
	{"RDM_OID_DSL_CHANNEL",		29628},
	{"RDM_OID_DSL_CHANNEL_ST",		30144},
	{"RDM_OID_DSL_CHANNEL_ST_CUR_DAY",		31032},
	{"RDM_OID_DSL_CHANNEL_ST_LAST_SHOWTIME",		30852},
	{"RDM_OID_DSL_CHANNEL_ST_QUAR_HR",		31212},
	{"RDM_OID_DSL_CHANNEL_ST_SHOWTIME",		30672},
	{"RDM_OID_DSL_CHANNEL_ST_TOTAL",		30492},
	{"RDM_OID_DSL_DIAG",		34080},
	{"RDM_OID_DSL_DIAG_ADSL_LINE_TEST",		34116},
	{"RDM_OID_DSL_LINE",		22596},
	{"RDM_OID_DSL_LINE_ST",		26784},
	{"RDM_OID_DSL_LINE_ST_LAST_CUR_DAY",		28488},
	{"RDM_OID_DSL_LINE_ST_LAST_QUAR_HR",		28980},
	{"RDM_OID_DSL_LINE_ST_LAST_SHOWTIME",		28404},
	{"RDM_OID_DSL_LINE_ST_SHOWTIME",		27864},
	{"RDM_OID_DSL_LINE_ST_TOTAL",		27132},
	{"RDM_OID_DSL_LINE_TEST_PARAMS",		29064},
	{"RDM_OID_DS_LITE",		84384},
	{"RDM_OID_DS_LITE_INTF_SET",		84468},
	{"RDM_OID_D_DNS",		116496},
	{"RDM_OID_EASY_MESH",		118032},
	{"RDM_OID_EMAIL_NOTIFY",		114504},
	{"RDM_OID_EOGRE_CFG",		117744},
	{"RDM_OID_ETH",		38796},
	{"RDM_OID_ETH_IFACE",		39492},
	{"RDM_OID_ETH_INTF_ST",		39960},
	{"RDM_OID_ETH_LINK",		40356},
	{"RDM_OID_ETH_LINK_ST",		40680},
	{"RDM_OID_ETH_RMON_ST",		38928},
	{"RDM_OID_ETH_VLAN_TERM",		41076},
	{"RDM_OID_ETH_VLAN_TERM_ST",		41376},
	{"RDM_OID_FAP",		109932},
	{"RDM_OID_FAP_APP_PLATF",		111204},
	{"RDM_OID_FAP_APP_PLATF_CAPB",		111360},
	{"RDM_OID_FAP_APP_PLATF_CTRL",		111708},
	{"RDM_OID_FAP_APP_PLATF_CTRL_FEMTO_AWARE",		111792},
	{"RDM_OID_FAP_APP_PLATF_CTRL_MMS",		112224},
	{"RDM_OID_FAP_APP_PLATF_CTRL_SMS",		112020},
	{"RDM_OID_FAP_APP_PLATF_CTRL_TERM_LOC",		112428},
	{"RDM_OID_FAP_APP_PLATF_MONT",		112656},
	{"RDM_OID_FAP_APP_PLATF_MONT_FEMTO_AWARE",		112788},
	{"RDM_OID_FAP_APP_PLATF_MONT_MMS",		113148},
	{"RDM_OID_FAP_APP_PLATF_MONT_SMS",		112968},
	{"RDM_OID_FAP_APP_PLATF_MONT_TERM_LOC",		113328},
	{"RDM_OID_FAP_GPS",		109968},
	{"RDM_OID_FAP_GPS_AGPS_SRV_CONF",		110712},
	{"RDM_OID_FAP_GPS_CONTS_GPS_STATUS",		110340},
	{"RDM_OID_FAP_PERF_MGMT",		110940},
	{"RDM_OID_FAP_PERF_MGMT_CONF",		111000},
	{"RDM_OID_FAULT_MGMT",		107964},
	{"RDM_OID_FAULT_MGMT_CURRENT_ALARM",		108300},
	{"RDM_OID_FAULT_MGMT_EXPEDITED_EVENT",		108852},
	{"RDM_OID_FAULT_MGMT_HISTORY_EVENT",		108576},
	{"RDM_OID_FAULT_MGMT_QUED_EVENT",		109128},
	{"RDM_OID_FAULT_MGMT_SUPT_ALARM",		108144},
	{"RDM_OID_FEATURE_FLAG",		128088},
	{"RDM_OID_FIREWALL",		103812},
	{"RDM_OID_FIREWALL_CHAIN",		104388},
	{"RDM_OID_FIREWALL_CHAIN_RULE",		104544},
	{"RDM_OID_FIREWALL_LEVEL",		104136},
	{"RDM_OID_GATEWAY_INFO",		20592},
	{"RDM_OID_GEMPORT",		131256},
	{"RDM_OID_GHN",		50388},
	{"RDM_OID_GHN_INTF",		50448},
	{"RDM_OID_GHN_INTF_ASSOC_DEV",		51408},
	{"RDM_OID_GHN_INTF_ST",		51012},
	{"RDM_OID_GPON",		128760},
	{"RDM_OID_GPON_INFO",		123564},
	{"RDM_OID_GRE",		79224},
	{"RDM_OID_GRE_FILTER",		80628},
	{"RDM_OID_GRE_TUNNEL",		79308},
	{"RDM_OID_GRE_TUNNEL_IFACE",		80100},
	{"RDM_OID_GRE_TUNNEL_IFACE_STAT",		80400},
	{"RDM_OID_GRE_TUNNEL_STAT",		79824},
	{"RDM_OID_GUI_CUSTOMIZATION",		127464},
	{"RDM_OID_HOMEPLUG_INTF",		51624},
	{"RDM_OID_HOMEPLUG_INTF_ASSOC_DEV",		52560},
	{"RDM_OID_HOMEPLUG_INTF_ST",		52044},
	{"RDM_OID_HOME_CYBER_SECURITY",		135360},
	{"RDM_OID_HOME_PLUG",		51564},
	{"RDM_OID_HOSTS",		89796},
	{"RDM_OID_HOSTS_HOST",		89880},
	{"RDM_OID_HOSTS_HOST_V4_ADDR",		90852},
	{"RDM_OID_HOSTS_HOST_V6_ADDR",		90912},
	{"RDM_OID_HPNA",		44748},
	{"RDM_OID_HPNA_DIAG",		46548},
	{"RDM_OID_HPNA_DIAG_PERF_MONITOR_CHANNELS",		47916},
	{"RDM_OID_HPNA_DIAG_PERF_MONITOR_CHANNELS_CHANNEL",		48000},
	{"RDM_OID_HPNA_DIAG_PERF_MONITOR_NODES",		47172},
	{"RDM_OID_HPNA_DIAG_PERF_MONITOR_NODES_NODE",		47280},
	{"RDM_OID_HPNA_DIAG_PERF_MONT",		47064},
	{"RDM_OID_HPNA_DIAG_PHY_THROUGHPUT",		46584},
	{"RDM_OID_HPNA_DIAG_PHY_THROUGHPUT_RESULT",		46860},
	{"RDM_OID_HPNA_INTF",		44808},
	{"RDM_OID_HPNA_INTF_ASSOC_DEV",		46320},
	{"RDM_OID_HPNA_INTF_QOS",		45888},
	{"RDM_OID_HPNA_INTF_QOS_FLOW_SPEC",		45948},
	{"RDM_OID_HPNA_INTF_ST",		45492},
	{"RDM_OID_IEEE8021AG",		115332},
	{"RDM_OID_IEEE8021X",		100260},
	{"RDM_OID_IEEE8021X_SUPPLICANT",		100320},
	{"RDM_OID_IEEE8021X_SUPPLICANT_EAPMD5",		101088},
	{"RDM_OID_IEEE8021X_SUPPLICANT_EAPTLS",		101172},
	{"RDM_OID_IEEE8021X_SUPPLICANT_STAT",		100788},
	{"RDM_OID_IEEE8023AH",		115824},
	{"RDM_OID_IFACE_STACK",		22332},
	{"RDM_OID_INPUT_CHECK_LIST",		127908},
	{"RDM_OID_IP",		67224},
	{"RDM_OID_IPERF",		134796},
	{"RDM_OID_IPHOST",		130932},
	{"RDM_OID_IPSEC",		73980},
	{"RDM_OID_IPSEC_FILTER",		74796},
	{"RDM_OID_IPSEC_IKEV2SA",		78072},
	{"RDM_OID_IPSEC_IKEV2SA_CHILD_SA",		78732},
	{"RDM_OID_IPSEC_IKEV2SA_CHILD_SA_STAT",		78888},
	{"RDM_OID_IPSEC_IKEV2SA_RECEIVED_CP_ATTR",		78648},
	{"RDM_OID_IPSEC_IKEV2SA_STAT",		78420},
	{"RDM_OID_IPSEC_PROFILE",		75792},
	{"RDM_OID_IPSEC_PROFILE_SENT_CP_ATTR",		77052},
	{"RDM_OID_IPSEC_STAT",		74472},
	{"RDM_OID_IPSEC_TUNNEL",		77184},
	{"RDM_OID_IPSEC_TUNNEL_STAT",		77916},
	{"RDM_OID_IPV6RD",		84000},
	{"RDM_OID_IPV6RD_INTF",		84084},
	{"RDM_OID_IP_ACTIVE_PORT",		70560},
	{"RDM_OID_IP_DIAG",		70716},
	{"RDM_OID_IP_DIAG_DL_DIAG",		71652},
	{"RDM_OID_IP_DIAG_IPPING",		70752},
	{"RDM_OID_IP_DIAG_SVR_SELECT_DIAG",		73656},
	{"RDM_OID_IP_DIAG_TRACERT_RT_HOPS",		71520},
	{"RDM_OID_IP_DIAG_TRACE_RT",		71196},
	{"RDM_OID_IP_DIAG_UDP_ECHO_CFG",		72588},
	{"RDM_OID_IP_DIAG_UDP_ECHO_DIAG",		72912},
	{"RDM_OID_IP_DIAG_UDP_ECHO_PAK_RST",		73428},
	{"RDM_OID_IP_DIAG_UL_DIAG",		72144},
	{"RDM_OID_IP_IFACE",		67476},
	{"RDM_OID_IP_IFACE_STAT",		70164},
	{"RDM_OID_IP_IFACE_V4_ADDR",		69096},
	{"RDM_OID_IP_IFACE_V6_ADDR",		69348},
	{"RDM_OID_IP_IFACE_V6_PREFIX",		69720},
	{"RDM_OID_LANDING_PAGE",		133452},
	{"RDM_OID_LANG",		121752},
	{"RDM_OID_LAN_CONF_SEC",		89736},
	{"RDM_OID_LAN_DEV",		117924},
	{"RDM_OID_LINKCFG",		130848},
	{"RDM_OID_LOG_CATEGORY",		124080},
	{"RDM_OID_LOG_CLASSIFY",		123972},
	{"RDM_OID_LOG_SETTING",		123768},
	{"RDM_OID_LOIDAUTH",		130212},
	{"RDM_OID_MAC_ADDRESS_TABLE",		118092},
	{"RDM_OID_MAIL_EVENT_CFG",		114768},
	{"RDM_OID_MAIL_SERVICE",		114540},
	{"RDM_OID_MGMT_SRV",		17376},
	{"RDM_OID_MGMT_SRV_AUTO_TRANS_COMPLETE_POL",		19536},
	{"RDM_OID_MGMT_SRV_DL_AVAIL",		19668},
	{"RDM_OID_MGMT_SRV_DL_AVAIL_ANNCMNT",		19704},
	{"RDM_OID_MGMT_SRV_DL_AVAIL_ANNCMNT_GROUP",		19812},
	{"RDM_OID_MGMT_SRV_DL_AVAIL_QUERY",		19944},
	{"RDM_OID_MGMT_SRV_DU_STATE_CHANGE_COMPL_POL",		20052},
	{"RDM_OID_MGMT_SRV_EMBEDED_DEV",		20184},
	{"RDM_OID_MGMT_SRV_MGAB_DEV",		19356},
	{"RDM_OID_MGMT_SRV_VIRTUAL_DEV",		20436},
	{"RDM_OID_MOCA",		48300},
	{"RDM_OID_MOCA_INTF",		48360},
	{"RDM_OID_MOCA_INTF_ASSOC_DEV",		49944},
	{"RDM_OID_MOCA_INTF_QOS",		49656},
	{"RDM_OID_MOCA_INTF_QOS_FLOW_ST",		49764},
	{"RDM_OID_MOCA_INTF_ST",		49260},
	{"RDM_OID_MOS",		136416},
	{"RDM_OID_MOS_USR_CFG",		136452},
	{"RDM_OID_NAT",		92616},
	{"RDM_OID_NAT_ADDR_MAPPING",		93888},
	{"RDM_OID_NAT_INTF_SETTING",		92892},
	{"RDM_OID_NAT_PORT_CONTROL",		94212},
	{"RDM_OID_NAT_PORT_MAPPING",		93048},
	{"RDM_OID_NAT_PORT_TRIGGERING",		93564},
	{"RDM_OID_NAT_SESSION_CTL",		94632},
	{"RDM_OID_NEIGHBOR_DISCOVERY",		82812},
	{"RDM_OID_NEIGHBOR_DISCOVERY_INTF_SET",		82896},
	{"RDM_OID_NETWORK_PROP",		16704},
	{"RDM_OID_NETWORK_SRV",		123000},
	{"RDM_OID_NETWORK_SRV_GP",		123060},
	{"RDM_OID_OI_WIZARD",		134316},
	{"RDM_OID_OLT",		129972},
	{"RDM_OID_OMCI",		131052},
	{"RDM_OID_OMCI_CFG",		131016},
	{"RDM_OID_OMCI_VLAN_INFO",		138144},
	{"RDM_OID_ONE_CONNECT_INTERNET_ACCESS_MASTER_SWITCH",		132600},
	{"RDM_OID_ONE_CONNECT_INTERNET_ACCESS_RULE",		132684},
	{"RDM_OID_ONE_CONNECT_P_C_GENERAL",		132816},
	{"RDM_OID_ONE_CONNECT_P_C_RULE",		132924},
	{"RDM_OID_ONLINE_F_W_UPGRADE",		133200},
	{"RDM_OID_ONT_GENERIC",		132432},
	{"RDM_OID_ONU",		128796},
	{"RDM_OID_OPT",		35016},
	{"RDM_OID_OPT_INTF",		35076},
	{"RDM_OID_OPT_INTF_ST",		35424},
	{"RDM_OID_PACKAGE",		144},
	{"RDM_OID_PACKAGE_INSTALL",		372},
	{"RDM_OID_PAREN_CTL",		114948},
	{"RDM_OID_PAREN_CTL_PROF",		115008},
	{"RDM_OID_PERD_STATISTICS",		105660},
	{"RDM_OID_PERD_STATISTICS_SAMPLE_SET",		105768},
	{"RDM_OID_PERD_STATISTICS_SAMPLE_SET_PARAM",		106116},
	{"RDM_OID_PM",		130452},
	{"RDM_OID_PORT_MIRROR",		124584},
	{"RDM_OID_POWER_MGMT",		133536},
	{"RDM_OID_POWER_SCHEDULE",		133932},
	{"RDM_OID_PPP",		65292},
	{"RDM_OID_PPP_IFACE",		65376},
	{"RDM_OID_PPP_IFACE_IPCP",		66564},
	{"RDM_OID_PPP_IFACE_PPPOA",		66396},
	{"RDM_OID_PPP_IFACE_PPPOE",		66432},
	{"RDM_OID_PPP_IFACE_STAT",		66828},
	{"RDM_OID_PPP_INTF_IPV6CP",		66744},
	{"RDM_OID_PPTP_CFG",		117444},
	{"RDM_OID_PTM",		37656},
	{"RDM_OID_PTM_LINK",		37716},
	{"RDM_OID_PTM_LINK_ST",		38280},
	{"RDM_OID_QOS",		84816},
	{"RDM_OID_QOSCFG",		131652},
	{"RDM_OID_QOS_APP",		87552},
	{"RDM_OID_QOS_CLS",		85428},
	{"RDM_OID_QOS_FLOW",		87828},
	{"RDM_OID_QOS_POLICER",		88152},
	{"RDM_OID_QOS_QUE",		88716},
	{"RDM_OID_QOS_QUE_STAT",		89256},
	{"RDM_OID_QOS_SHAPER",		89556},
	{"RDM_OID_QOS_VALUE",		131832},
	{"RDM_OID_QUEUE",		132372},
	{"RDM_OID_REMO_MGMT",		121812},
	{"RDM_OID_REMO_MGMT_TRUST_DOMAIN",		122760},
	{"RDM_OID_REMO_SRV",		121920},
	{"RDM_OID_REMO_SRV_TRUST_DOMAIN",		122220},
	{"RDM_OID_ROM_CONVERT",		114168},
	{"RDM_OID_ROUTING",		81012},
	{"RDM_OID_ROUTING_RIP",		82092},
	{"RDM_OID_ROUTING_RIP_INTF_SET",		82200},
	{"RDM_OID_ROUTING_ROUTER",		81072},
	{"RDM_OID_ROUTING_ROUTER_V4_FWD",		81300},
	{"RDM_OID_ROUTING_ROUTER_V6_FWD",		81816},
	{"RDM_OID_ROUTING_RT_INFO",		82452},
	{"RDM_OID_ROUTING_RT_INFO_INTF_SET",		82536},
	{"RDM_OID_RT_ADV",		83196},
	{"RDM_OID_RT_ADV_INTF_SET",		83280},
	{"RDM_OID_RT_ADV_INTF_SET_OPT",		83868},
	{"RDM_OID_SCHEDULE",		114228},
	{"RDM_OID_SELF_TEST_DIAG",		103728},
	{"RDM_OID_SERVICE",		108},
	{"RDM_OID_SMART_CARD_READERS",		101496},
	{"RDM_OID_SMART_CARD_READERS_SCR",		101556},
	{"RDM_OID_SMART_CARD_READERS_SCR_SC",		101784},
	{"RDM_OID_SOFTIMAGE",		130320},
	{"RDM_OID_SPEED_DIAL_BOOK",		12828},
	{"RDM_OID_SPEED_DIAL_BOOK_LIST",		12888},
	{"RDM_OID_SPEED_TEST",		117144},
	{"RDM_OID_SP_REMO_SRV",		122328},
	{"RDM_OID_SP_REMO_SRV_TRUST_DOMAIN",		122628},
	{"RDM_OID_SP_TRUST_DOMAIN",		122868},
	{"RDM_OID_SW_MODULE",		106416},
	{"RDM_OID_SW_MODULE_DEPLOYMENT_UNIT",		107016},
	{"RDM_OID_SW_MODULE_EXEC_ENV",		106524},
	{"RDM_OID_SW_MODULE_EXEC_UNIT",		107388},
	{"RDM_OID_SW_MODULE_EXEC_UNIT_EXT",		107928},
	{"RDM_OID_SYSTEM_INFO",		123312},
	{"RDM_OID_S_T_B_VENDOR_I_D",		124896},
	{"RDM_OID_TCONT",		131412},
	{"RDM_OID_TEMP_STAT",		16200},
	{"RDM_OID_TEMP_STAT_TEMP_SENSOR",		16260},
	{"RDM_OID_TIME",		20700},
	{"RDM_OID_TR064",		125112},
	{"RDM_OID_TRAP_ADDR",		119184},
	{"RDM_OID_TRTCM",		131496},
	{"RDM_OID_TRTCMCFG",		132180},
	{"RDM_OID_TRTCM_VALUE",		132312},
	{"RDM_OID_T_F_T_P_SRV_NAME",		125052},
	{"RDM_OID_UPA",		52764},
	{"RDM_OID_UPA_DIAG",		54324},
	{"RDM_OID_UPA_DIAG_INTF_MEASUREMENT",		54360},
	{"RDM_OID_UPA_INTF",		52824},
	{"RDM_OID_UPA_INTF_ACTIVE_NOTCH",		54060},
	{"RDM_OID_UPA_INTF_ASSOC_DEV",		53760},
	{"RDM_OID_UPA_INTF_BRIDGE_FOR",		54216},
	{"RDM_OID_UPA_INTF_ST",		53364},
	{"RDM_OID_UPNP",		101940},
	{"RDM_OID_UPNP_DEV",		101976},
	{"RDM_OID_UPNP_DEV_CAPB",		102300},
	{"RDM_OID_UPNP_DISC",		102624},
	{"RDM_OID_UPNP_DISC_DEV",		102936},
	{"RDM_OID_UPNP_DISC_ROOT_DEV",		102732},
	{"RDM_OID_UPNP_DISC_SERVICE",		103140},
	{"RDM_OID_USB",		41772},
	{"RDM_OID_USB_INTF",		41856},
	{"RDM_OID_USB_INTF_STAT",		42156},
	{"RDM_OID_USB_PORT",		42552},
	{"RDM_OID_USB_USBHOSTS",		42780},
	{"RDM_OID_USB_USBHOSTS_HOST",		42840},
	{"RDM_OID_USB_USBHOSTS_HOST_DEV",		43068},
	{"RDM_OID_USB_USBHOSTS_HOST_DEV_CFG",		43740},
	{"RDM_OID_USB_USBHOSTS_HOST_DEV_CFG_INTF",		43824},
	{"RDM_OID_USB_USBHOSTS_HOST_DEV_PAR",		43584},
	{"RDM_OID_USRS",		101256},
	{"RDM_OID_USRS_USR",		101316},
	{"RDM_OID_USR_INTF",		21360},
	{"RDM_OID_USR_INTF_LOCAL_DISP",		22104},
	{"RDM_OID_USR_INTF_REMO_ACESS",		21972},
	{"RDM_OID_U_R_L_FILTER",		136008},
	{"RDM_OID_VC_AUTO_HUNT",		121128},
	{"RDM_OID_VC_HUNT_INFO",		121284},
	{"RDM_OID_VC_HUNT_RULE",		121368},
	{"RDM_OID_VLAN_AUTO_HUNT",		121452},
	{"RDM_OID_VLAN_GROUP",		124716},
	{"RDM_OID_VLAN_HUNT_INFO",		121584},
	{"RDM_OID_VLAN_HUNT_RULE",		121668},
	{"RDM_OID_VOICE_CALL_STATUS",		14748},
	{"RDM_OID_VOICE_CAPB",		540},
	{"RDM_OID_VOICE_CAPB_CODEC",		1788},
	{"RDM_OID_VOICE_CAPB_H323",		1704},
	{"RDM_OID_VOICE_CAPB_MGCP",		1644},
	{"RDM_OID_VOICE_CAPB_SIP",		1344},
	{"RDM_OID_VOICE_COMMON",		12252},
	{"RDM_OID_VOICE_DECT",		13872},
	{"RDM_OID_VOICE_DECT_B_S",		13932},
	{"RDM_OID_VOICE_DECT_H_S",		14424},
	{"RDM_OID_VOICE_FXO",		13536},
	{"RDM_OID_VOICE_FXO_PORT",		13596},
	{"RDM_OID_VOICE_INTERNAL_PHONE_NUMBER_BOOK",		13332},
	{"RDM_OID_VOICE_INTERNAL_PHONE_NUMBER_BOOK_IF_LIST",		13392},
	{"RDM_OID_VOICE_INTERNAL_PHONE_NUMBER_BOOK_PORT_LIST",		13476},
	{"RDM_OID_VOICE_LINE",		7104},
	{"RDM_OID_VOICE_LINE_CALLING_FEATURE",		8340},
	{"RDM_OID_VOICE_LINE_CODEC",		9996},
	{"RDM_OID_VOICE_LINE_CODEC_LIST",		10200},
	{"RDM_OID_VOICE_LINE_PROCESSING",		9840},
	{"RDM_OID_VOICE_LINE_RINGER",		7860},
	{"RDM_OID_VOICE_LINE_RINGER_DESCRIPTION",		8052},
	{"RDM_OID_VOICE_LINE_RINGER_EVENT",		7968},
	{"RDM_OID_VOICE_LINE_RINGER_PATTERN",		8208},
	{"RDM_OID_VOICE_LINE_SESSION",		10476},
	{"RDM_OID_VOICE_LINE_SIP",		7476},
	{"RDM_OID_VOICE_LINE_SIP_EVENT_SUBS",		7752},
	{"RDM_OID_VOICE_LINE_STATS",		10632},
	{"RDM_OID_VOICE_PHONE_BOOK",		12792},
	{"RDM_OID_VOICE_PHY_INTF",		11412},
	{"RDM_OID_VOICE_PROF",		1968},
	{"RDM_OID_VOICE_PROF_FAX_T38",		6924},
	{"RDM_OID_VOICE_PROF_NUM_PLAN",		5676},
	{"RDM_OID_VOICE_PROF_NUM_PLAN_PREFIX_INFO",		5928},
	{"RDM_OID_VOICE_PROF_RTP",		5028},
	{"RDM_OID_VOICE_PROF_RTP_REDUNDANCY",		5448},
	{"RDM_OID_VOICE_PROF_RTP_RTCP",		5208},
	{"RDM_OID_VOICE_PROF_RTP_SRTP",		5316},
	{"RDM_OID_VOICE_PROF_SIP",		3168},
	{"RDM_OID_VOICE_PROF_SIP_RESP_MAP_OBJ",		4920},
	{"RDM_OID_VOICE_PROF_SIP_SUBSCRIBE_OBJ",		4764},
	{"RDM_OID_VOICE_PROF_SRV_PRO_INFO",		3036},
	{"RDM_OID_VOICE_PROF_TONE",		6156},
	{"RDM_OID_VOICE_PROF_TONE_DESCRIPTION",		6348},
	{"RDM_OID_VOICE_PROF_TONE_EVENT",		6264},
	{"RDM_OID_VOICE_PROF_TONE_PATTERN",		6552},
	{"RDM_OID_VOICE_PSTN",		12072},
	{"RDM_OID_VOICE_SRV",		456},
	{"RDM_OID_WHITE_U_R_L_FILTER",		136140},
	{"RDM_OID_WIFI",		54540},
	{"RDM_OID_WIFI_ACCESS_POINT",		57900},
	{"RDM_OID_WIFI_ACCESS_POINT_ACCOUNTING",		59316},
	{"RDM_OID_WIFI_ACCESS_POINT_ASSOC_DEV",		59988},
	{"RDM_OID_WIFI_ACCESS_POINT_ASSOC_DEV_ST",		60264},
	{"RDM_OID_WIFI_ACCESS_POINT_SEC",		58272},
	{"RDM_OID_WIFI_ACCESS_POINT_WPS",		59544},
	{"RDM_OID_WIFI_AP_STEERING",		61944},
	{"RDM_OID_WIFI_DIAGNOSTIC",		61392},
	{"RDM_OID_WIFI_DIAGNOSTIC_RESULTS",		61500},
	{"RDM_OID_WIFI_END_POINT",		60600},
	{"RDM_OID_WIFI_END_POINT_PROFILE",		60972},
	{"RDM_OID_WIFI_END_POINT_PROFILE_SEC",		61152},
	{"RDM_OID_WIFI_END_POINT_SEC",		60912},
	{"RDM_OID_WIFI_END_POINT_ST",		60780},
	{"RDM_OID_WIFI_ONE_SSID",		54744},
	{"RDM_OID_WIFI_QSTEER",		117252},
	{"RDM_OID_WIFI_RADIO",		54804},
	{"RDM_OID_WIFI_RADIO_ST",		56592},
	{"RDM_OID_WIFI_SSID",		56844},
	{"RDM_OID_WIFI_SSID_STAT",		57504},
	{"RDM_OID_WIFI_STA_FILTER",		60516},
	{"RDM_OID_WLAN_SCHEDULER",		62388},
	{"RDM_OID_WLAN_SCHEDULER_ACCESS",		121020},
	{"RDM_OID_WPS",		61284},
	{"RDM_OID_XPON",		130692},
	{"RDM_OID_ZLOG_CATEGORY",		135012},
	{"RDM_OID_ZLOG_CONFIG",		134928},
	{"RDM_OID_ZY_DATA_USAGE",		134520},
	{"RDM_OID_ZY_DATA_USAGE_LAN",		134580},
	{"RDM_OID_ZY_DATA_USAGE_WAN",		134688},
	{"RDM_OID_ZY_EXT",		116076},
	{"RDM_OID_ZY_HOSTS_HOST_EXT",		90972},
	{"RDM_OID_ZY_HOST_NAME_REPLACE",		117384},
	{"RDM_OID_ZY_IGMP",		118272},
	{"RDM_OID_ZY_IPP_CFG",		128628},
	{"RDM_OID_ZY_IPSEC_XML_RELOAD",		79164},
	{"RDM_OID_ZY_LICNSE",		136356},
	{"RDM_OID_ZY_LOG_CFG",		119712},
	{"RDM_OID_ZY_LOG_CFG_GP",		119820},
	{"RDM_OID_ZY_LOG_CFG_GP_ACCOUNT",		119976},
	{"RDM_OID_ZY_LOOP_GUARD",		134088},
	{"RDM_OID_ZY_MAC_FILTER",		120804},
	{"RDM_OID_ZY_MAC_FILTER_WHITE_LIST",		120912},
	{"RDM_OID_ZY_MLD",		119292},
	{"RDM_OID_ZY_ONE_CONNECT",		132492},
	{"RDM_OID_ZY_OPTION125",		128436},
	{"RDM_OID_ZY_PROXIMITY_SENSOR",		134196},
	{"RDM_OID_ZY_RESET_ADMIN",		134256},
	{"RDM_OID_ZY_SAMBA",		127104},
	{"RDM_OID_ZY_SAMBA_DIR",		127212},
	{"RDM_OID_ZY_SNMP",		119028},
	{"RDM_OID_ZY_VENDOR_SPECIFIC",		128496},
	{"RDM_OID_ZY_W_W_A_N_BACKUP",		125568},
	{"RDM_OID_ZY_W_W_A_N_BUDGET_CONTROL",		126168},
	{"RDM_OID_ZY_W_W_A_N_PING_CHECK",		126012},
	{"RDM_OID_ZY_W_W_A_N_STAT",		126852},
	{ NULL, NULL }
};

/*oid function*/
int32_t zHttpOidGet(char *objNameAbbr);
