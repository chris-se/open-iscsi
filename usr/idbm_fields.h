#ifndef IDBM_FIELDS_H
#define IDBM_FIELDS_H

#include "version.h"

#define ISCSI_BEGIN_REC	"# BEGIN RECORD "ISCSI_VERSION_STR
#define ISCSI_END_REC	"# END RECORD"

/* node fields */
#define NODE_NAME	"node.name"
#define NODE_TPGT	"node.tpgt"
#define NODE_STARTUP	"node.startup"
#define NODE_LEADING_LOGIN "node.leading_login"
#define NODE_DISC_ADDR	"node.discovery_address"
#define NODE_DISC_PORT	"node.discovery_port"
#define NODE_DISC_TYPE	"node.discovery_type"
#define NODE_BOOT_LUN	"node.boot_lun"

/* session fields */
#define SESSION_INIT_CMDSN	"node.session.initial_cmdsn"
#define SESSION_INIT_LOGIN_RETRY "node.session.initial_login_retry_max"
#define SESSION_CMDS_MAX	"node.session.cmds_max"
#define SESSION_XMIT_THREAD_PRIORITY "node.session.xmit_thread_priority"
#define SESSION_QDEPTH		"node.session.queue_depth"
#define SESSION_NR_SESSIONS	"node.session.nr_sessions"
#define SESSION_AUTH_METHOD	"node.session.auth.authmethod"
#define SESSION_USERNAME	"node.session.auth.username"
#define SESSION_PASSWORD	"node.session.auth.password"
#define SESSION_PASSWORD_LEN	"node.session.auth.password_length"
#define SESSION_USERNAME_IN	"node.session.auth.username_in"
#define SESSION_PASSWORD_IN	"node.session.auth.password_in"
#define SESSION_PASSWORD_IN_LEN	"node.session.auth.password_in_length"
#define SESSION_REPLACEMENT_TMO	"node.session.timeo.replacement_timeout"
#define SESSION_ABORT_TMO	"node.session.err_timeo.abort_timeout"
#define SESSION_LU_RESET_TMO	"node.session.err_timeo.lu_reset_timeout"
#define SESSION_TGT_RESET_TMO	"node.session.err_timeo.tgt_reset_timeout"
#define SESSION_HOST_RESET_TMO	"node.session.err_timeo.host_reset_timeout"
#define SESSION_FAST_ABORT	"node.session.iscsi.FastAbort"
#define SESSION_INITIAL_R2T	"node.session.iscsi.InitialR2T"
#define SESSION_IMM_DATA	"node.session.iscsi.ImmediateData"
#define SESSION_FIRST_BURST	"node.session.iscsi.FirstBurstLength"
#define SESSION_MAX_BURST	"node.session.iscsi.MaxBurstLength"
#define SESSION_DEF_TIME2RETAIN	"node.session.iscsi.DefaultTime2Retain"
#define SESSION_DEF_TIME2WAIT	"node.session.iscsi.DefaultTime2Wait"
#define SESSION_MAX_CONNS	"node.session.iscsi.MaxConnections"
#define SESSION_MAX_R2T		"node.session.iscsi.MaxOutstandingR2T"
#define SESSION_ERL		"node.session.iscsi.ERL"

/* connections fields */
#define CONN_ADDR		"node.conn[%d].address"
#define CONN_PORT		"node.conn[%d].port"
#define CONN_STARTUP		"node.conn[%d].startup"
#define CONN_WINDOW_SIZE	"node.conn[%d].tcp.window_size"
#define CONN_SERVICE_TYPE	"node.conn[%d].tcp.type_of_service"
#define CONN_LOGOUT_TMO		"node.conn[%d].timeo.logout_timeout"
#define CONN_LOGIN_TMO		"node.conn[%d].timeo.login_timeout"
#define CONN_AUTH_TMO		"node.conn[%d].timeo.auth_timeout"
#define CONN_NOP_INT		"node.conn[%d].timeo.noop_out_interval"
#define CONN_NOP_TMO		"node.conn[%d].timeo.noop_out_timeout"
#define CONN_MAX_XMIT_DLEN	"node.conn[%d].iscsi.MaxXmitDataSegmentLength"
#define CONN_MAX_RECV_DLEN	"node.conn[%d].iscsi.MaxRecvDataSegmentLength"
#define CONN_HDR_DIGEST		"node.conn[%d].iscsi.HeaderDigest"
#define CONN_DATA_DIGEST	"node.conn[%d].iscsi.DataDigest"
#define CONN_IFMARKER		"node.conn[%d].iscsi.IFMarker"
#define CONN_OFMARKER		"node.conn[%d].iscsi.OFMarker"

/* iface fields */
#define IFACE_HWADDR		"iface.hwaddress"
#define IFACE_ISCSINAME		"iface.iscsi_ifacename"
#define IFACE_NETNAME		"iface.net_ifacename"
#define IFACE_TRANSPORTNAME	"iface.transport_name"
#define IFACE_INAME		"iface.initiatorname"
#define IFACE_ISID		"iface.isid"
#define IFACE_BOOT_PROTO	"iface.bootproto"
#define IFACE_IPADDR		"iface.ipaddress"
#define IFACE_SUBNET_MASK	"iface.subnet_mask"
#define IFACE_GATEWAY		"iface.gateway"
#define IFACE_PRIMARY_DNS	"iface.primary_dns"
#define IFACE_SEC_DNS		"iface.secondary_dns"
#define IFACE_VLAN_ID		"iface.vlan_id"
#define IFACE_VLAN_PRIORITY	"iface.vlan_priority"
#define IFACE_VLAN_STATE	"iface.vlan_state"
#define IFACE_LINKLOCAL	"iface.ipv6_linklocal"
#define IFACE_ROUTER		"iface.ipv6_router"
#define IFACE_IPV6_AUTOCFG	"iface.ipv6_autocfg"
#define IFACE_LINKLOCAL_AUTOCFG	"iface.linklocal_autocfg"
#define IFACE_ROUTER_AUTOCFG	"iface.router_autocfg"
#define IFACE_STATE		"iface.state"
#define IFACE_NUM		"iface.iface_num"
#define IFACE_MTU		"iface.mtu"
#define IFACE_PORT		"iface.port"

/* discovery fields */
#define DISC_STARTUP		"discovery.startup"
#define DISC_TYPE		"discovery.type"
/* sendtargets */
#define DISC_ST_ADDR		"discovery.sendtargets.address"
#define DISC_ST_PORT		"discovery.sendtargets.port"
#define DISC_ST_AUTH_METHOD	"discovery.sendtargets.auth.authmethod"
#define DISC_ST_USERNAME	"discovery.sendtargets.auth.username"
#define DISC_ST_PASSWORD	"discovery.sendtargets.auth.password"
#define DISC_ST_PASSWORD_LEN	"discovery.sendtargets.auth.password_length"
#define DISC_ST_USERNAME_IN	"discovery.sendtargets.auth.username_in"
#define DISC_ST_PASSWORD_IN	"discovery.sendtargets.auth.password_in"
#define DISC_ST_PASSWORD_IN_LEN	"discovery.sendtargets.auth.password_in_length"
#define DISC_ST_LOGIN_TMO	"discovery.sendtargets.timeo.login_timeout"
#define DISC_ST_REOPEN_MAX	"discovery.sendtargets.reopen_max"
#define DISC_ST_DISC_DAEMON_POLL_INVAL	"discovery.sendtargets.discoveryd_poll_inval"
#define DISC_ST_USE_DISC_DAEMON	"discovery.sendtargets.use_discoveryd"
#define DISC_ST_AUTH_TMO	"discovery.sendtargets.timeo.auth_timeout"
#define DISC_ST_ACTIVE_TMO	"discovery.sendtargets.timeo.active_timeout"
#define DISC_ST_MAX_RECV_DLEN	"discovery.sendtargets.iscsi.MaxRecvDataSegmentLength"

#define DISC_ISNS_DISC_DAEMON_POLL_INVAL	"discovery.isns.discoveryd_poll_inval"
#define DISC_ISNS_USE_DISC_DAEMON	"discovery.isns.use_discoveryd"
#define DISC_ISNS_ADDR		"discovery.sendtargets.address"
#define DISC_ISNS_PORT		"discovery.sendtargets.port"

/* host auth fields */
#define HOST_AUTH_INDEX			"host.auth.tbl_idx"
#define HOST_AUTH_METHOD		"host.auth.authmethod"
#define HOST_AUTH_USERNAME		"host.auth.username"
#define HOST_AUTH_PASSWORD		"host.auth.password"
#define HOST_AUTH_PASSWORD_LEN		"host.auth.password_length"
#define HOST_AUTH_USERNAME_IN		"host.auth.username_in"
#define HOST_AUTH_PASSWORD_IN		"host.auth.password_in"
#define HOST_AUTH_PASSWORD_IN_LEN	"host.auth.password_in_length"

/* flash target session fields */
#define FLASHNODE_SESS_AUTO_SND_TGT_DISABLE	"flashnode.session.auto_snd_tgt_disable"
#define FLASHNODE_SESS_DISCOVERY_SESS	"flashnode.session.discovery_session"
#define FLASHNODE_SESS_PORTAL_TYPE	"flashnode.session.portal_type"
#define FLASHNODE_SESS_ENTRY_EN		"flashnode.session.entry_enable"
#define FLASHNODE_SESS_IMM_DATA_EN	"flashnode.session.immediate_data"
#define FLASHNODE_SESS_INITIAL_R2T_EN	"flashnode.session.initial_r2t"
#define FLASHNODE_SESS_DATASEQ_INORDER	"flashnode.session.data_seq_in_order"
#define FLASHNODE_SESS_PDU_INORDER	"flashnode.session.data_pdu_in_order"
#define FLASHNODE_SESS_CHAP_AUTH_EN	"flashnode.session.chap_auth_en"
#define FLASHNODE_SESS_DISCOVERY_LOGOUT_EN	"flashnode.session.discovery_logout_en"
#define FLASHNODE_SESS_BIDI_CHAP_EN	"flashnode.session.bidi_chap_en"
#define FLASHNODE_SESS_DISCOVERY_AUTH_OPTIONAL	"flashnode.session.discovery_auth_optional"
#define FLASHNODE_SESS_ERL 		"flashnode.session.erl"
#define FLASHNODE_SESS_FIRST_BURST	"flashnode.session.first_burst_len"
#define FLASHNODE_SESS_DEF_TIME2WAIT	"flashnode.session.def_time2wait"
#define FLASHNODE_SESS_DEF_TIME2RETAIN	"flashnode.session.def_time2retain"
#define FLASHNODE_SESS_MAX_R2T		"flashnode.session.max_outstanding_r2t"
#define FLASHNODE_SESS_ISID		"flashnode.session.isid"
#define FLASHNODE_SESS_TSID		"flashnode.session.tsid"
#define FLASHNODE_SESS_MAX_BURST	"flashnode.session.max_burst_len"
#define FLASHNODE_SESS_DEF_TASKMGMT_TMO	"flashnode.session.def_taskmgmt_tmo"
#define FLASHNODE_SESS_ALIAS		"flashnode.session.targetalias"
#define FLASHNODE_SESS_NAME		"flashnode.session.targetname"
#define FLASHNODE_SESS_TPGT		"flashnode.session.tpgt"
#define FLASHNODE_SESS_DISCOVERY_PARENT_IDX	"flashnode.session.discovery_parent_idx"
#define FLASHNODE_SESS_DISCOVERY_PARENT_TYPE	"flashnode.session.discovery_parent_type"
#define FLASHNODE_SESS_CHAP_OUT_IDX	"flashnode.session.chap_out_idx"
#define FLASHNODE_SESS_CHAP_IN_IDX	"flashnode.session.chap_in_idx"
#define FLASHNODE_SESS_USERNAME		"flashnode.session.username"
#define FLASHNODE_SESS_USERNAME_IN	"flashnode.session.username_in"
#define FLASHNODE_SESS_PASSWORD		"flashnode.session.password"
#define FLASHNODE_SESS_PASSWORD_IN	"flashnode.session.password_in"
#define FLASHNODE_SESS_IS_BOOT_TGT	"flashnode.session.is_boot_target"

/* flash target connection fields */
#define FLASHNODE_CONN_IS_FW_ASSIGNED_IPV6	"flashnode.conn[%d].is_fw_assigned_ipv6"
#define FLASHNODE_CONN_HDR_DGST_EN	"flashnode.conn[%d].header_digest_en"
#define FLASHNODE_CONN_DATA_DGST_EN	"flashnode.conn[%d].data_digest_en"
#define FLASHNODE_CONN_SNACK_REQ_EN	"flashnode.conn[%d].snack_req_en"
#define FLASHNODE_CONN_TCP_TIMESTAMP_STAT	"flashnode.conn[%d].tcp_timestamp_stat"
#define FLASHNODE_CONN_TCP_NAGLE_DISABLE	"flashnode.conn[%d].tcp_nagle_disable"
#define FLASHNODE_CONN_TCP_WSF_DISABLE	"flashnode.conn[%d].tcp_wsf_disable"
#define FLASHNODE_CONN_TCP_TIMER_SCALE	"flashnode.conn[%d].tcp_timer_scale"
#define FLASHNODE_CONN_TCP_TIMESTAMP_EN	"flashnode.conn[%d].tcp_timestamp_en"
#define FLASHNODE_CONN_IP_FRAG_DISABLE	"flashnode.conn[%d].fragment_disable"
#define FLASHNODE_CONN_MAX_RECV_DLENGTH	"flashnode.conn[%d].max_recv_dlength"
#define FLASHNODE_CONN_MAX_XMIT_DLENGTH	"flashnode.conn[%d].max_xmit_dlength"
#define FLASHNODE_CONN_KEEPALIVE_TMO	"flashnode.conn[%d].keepalive_tmo"
#define FLASHNODE_CONN_PORT		"flashnode.conn[%d].port"
#define FLASHNODE_CONN_IPADDR		"flashnode.conn[%d].ipaddress"
#define FLASHNODE_CONN_REDIRECT_IPADDR	"flashnode.conn[%d].redirect_ipaddr"
#define FLASHNODE_CONN_MAX_SEGMENT_SIZE	"flashnode.conn[%d].max_segment_size"
#define FLASHNODE_CONN_LOCAL_PORT	"flashnode.conn[%d].local_port"
#define FLASHNODE_CONN_IPV4_TOS		"flashnode.conn[%d].ipv4_tos"
#define FLASHNODE_CONN_IPV6_TC		"flashnode.conn[%d].ipv6_traffic_class"
#define FLASHNODE_CONN_IPV6_FLOW_LABEL	"flashnode.conn[%d].ipv6_flow_label"
#define FLASHNODE_CONN_LINK_LOCAL_IPV6	"flashnode.conn[%d].link_local_ipv6"
#define FLASHNODE_CONN_TCP_XMIT_WSF	"flashnode.conn[%d].tcp_xmit_wsf"
#define FLASHNODE_CONN_TCP_RECV_WSF	"flashnode.conn[%d].tcp_recv_wsf"
#define FLASHNODE_CONN_STATSN		"flashnode.conn[%d].statsn"
#define FLASHNODE_CONN_EXP_STATSN	"flashnode.conn[%d].exp_statsn"

#endif
