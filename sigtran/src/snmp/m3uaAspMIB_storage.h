/*****************************************************************************

 @(#) $Id$

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2009  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 -----------------------------------------------------------------------------

 Last Modified $Date$ by $Author$

 -----------------------------------------------------------------------------

 $Log$
 *****************************************************************************/

#ifndef __LOCAL_M3UAASPMIB_H__
#define __LOCAL_M3UAASPMIB_H__

#ident "@(#) $RCSfile$ $Name$($Revision$) Copyright (c) 2008-2009 Monavacon Limited."

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */
/* our storage structure(s) */
struct m3uaAspMIB_data {
	uint m3uaAspMIB_request;
	ulong m3uaAspNextIndex;
	ulong m3uaAspAgNextIndex;
	ulong m3uaAspSpNextIndex;
};
struct m3uaAspTable_data {
	uint m3uaAspTable_request;
	uint m3uaAspTable_refs;
	ulong m3uaAspIndex;
	ulong m3uaAspIndex;
	uint8_t *m3uaAspName;
	size_t m3uaAspNameLen;
	uint8_t *m3uaAspName;
	size_t m3uaAspNameLen;
	long m3uaAspAdministrativeState;
	long m3uaAspAdministrativeState;
	uint8_t *m3uaAspCapabilities;
	size_t m3uaAspCapabilitiesLen;
	long m3uaAspIdPolicy;
	long m3uaAspRegistrationPolicy;
	long m3uaAspAssociationPolicy;
	long m3uaAspStatus;
};
struct m3uaAspAgTable_data {
	uint m3uaAspAgTable_request;
	uint m3uaAspAgTable_refs;
	ulong m3uaAspAgIndex;
	oid *m3uaAspAgProtocolVersion;
	size_t m3uaAspAgProtocolVersionLen;
	uint8_t *m3uaAspAgOptions;
	size_t m3uaAspAgOptionsLen;
	long m3uaAspAgRegistrationPolicy;
	long m3uaAspAgAspIdPolicy;
	long m3uaAspAgAspProtocolPayloadId;
	long m3uaAspAgMinOstreams;
	long m3uaAspAgMaxIstreams;
	long m3uaAspAgTimerT7;
	long m3uaAspAgTimerT19;
	long m3uaAspAgTimerT21;
	long m3uaAspAgTimerT25A;
	long m3uaAspAgTimerT28A;
	long m3uaAspAgTimerT29A;
	long m3uaAspAgTimerT30A;
	long m3uaAspAgStatus;
};
struct m3uaAspSgTable_data {
	uint m3uaAspSgTable_request;
	uint m3uaAspSgTable_refs;
	ulong m3uaAspAgIndex;
	ulong m3uaAspSgIndex;
	uint8_t *m3uaAspSgName;
	size_t m3uaAspSgNameLen;
	long m3uaAspSgAdministrativeState;
	long m3uaAspSgOperationalState;
	uint8_t *m3uaAspSgProcedurealStatus;
	size_t m3uaAspSgProcedurealStatusLen;
	long m3uaAspSgUsgageState;
	long m3uaAspSgAspState;
	ulong m3uaAspSgMaxInitRetrans;
	ulong m3uaAspSgMaxPathRetrans;
	long m3uaAspSgMaxLifeTime;
	long m3uaAspSgTimerT1;
	long m3uaAspSgTimerT2;
	long m3uaAspSgTimerT3;
	long m3uaAspSgTimerT4;
	long m3uaAspSgTimerT5;
	long m3uaAspSgTimerT5;
	long m3uaAspSgTimerT19A;
	long m3uaAspSgTimerT24;
	long m3uaAspSgTimerT31A;
	long m3uaAspSgTimerT32A;
	long m3uaAspSgTimerT33A;
	long m3uaAspSgTimerT34A;
	long m3uaAspSgTimerT1T;
	long m3uaAspSgTimerT2T;
	long m3uaAspSgStatus;
};
struct m3uaAspSgpTable_data {
	uint m3uaAspSgpTable_request;
	uint m3uaAspSgpTable_refs;
	ulong m3uaAspAgIndex;
	ulong m3uaAspSgIndex;
	ulong m3uaAspSgpIndex;
	uint8_t *m3uaAspSgpName;
	size_t m3uaAspSgpNameLen;
	long m3uaAspSgpAdministrativeState;
	uint8_t *m3uaAspSgpProceduralStatus;
	size_t m3uaAspSgpProceduralStatusLen;
	long m3uaAspSgpOperationalState;
	long m3uaAspSgpUsageState;
	long m3uaAspSgpAspState;
	uint8_t *m3uaAspSgpPrimaryAddress;
	size_t m3uaAspSgpPrimaryAddressLen;
	uint8_t *m3uaAspSgpHostName;
	size_t m3uaAspSgpHostNameLen;
	long m3uaAspSgpStatus;
};
struct m3uaAspSpTable_data {
	uint m3uaAspSpTable_request;
	uint m3uaAspSpTable_refs;
	ulong m3uaAspSpIndex;
	uint8_t *m3uaAspSpName;
	size_t m3uaAspSpNameLen;
	long m3uaAspSpOperationalState;
	long m3uaAspSpUsageState;
	long m3uaAspSpAdministrativeState;
	uint8_t *m3uaAspSpAlarmStatus;
	size_t m3uaAspSpAlarmStatusLen;
	uint8_t *m3uaAspSpProceduralStatus;
	size_t m3uaAspSpProceduralStatusLen;
	uint8_t *m3uaAspSpAvailabiltyStatus;
	size_t m3uaAspSpAvailabiltyStatusLen;
	uint8_t *m3uaAspSpPointCode;
	size_t m3uaAspSpPointCodeLen;
	long m3uaAspSpTimerT1R;
	long m3uaAspSpTimerT18;
	long m3uaAspSpTimerT20;
	long m3uaAspSpTimerT22A;
	long m3uaAspSpTimerT23A;
	long m3uaAspSpTimerT24A;
	long m3uaAspSpTimerT26A;
	long m3uaAspSpTimerT27A;
	long m3uaAspSpStatus;
};
struct m3uaAspMtTable_data {
	uint m3uaAspMtTable_request;
	uint m3uaAspMtTable_refs;
	ulong m3uaAspSpIndex;
	uint8_t *m3uaAspMtName;
	size_t m3uaAspMtNameLen;
	long m3uaAspMtAdministrativeState;
	long m3uaAspMtOperationalState;
	uint8_t *m3uaAspMtProceduralStatus;
	size_t m3uaAspMtProceduralStatusLen;
	long m3uaAspMtUsageState;
	long m3uaAspMtAsState;
	long m3uaAspMtStatus;
};
struct m3uaAspRsTable_data {
	uint m3uaAspRsTable_request;
	uint m3uaAspRsTable_refs;
	ulong m3uaAspSpIndex;
	ulong m3uaAspRsIndex;
	uint8_t *m3uaAspRsName;
	size_t m3uaAspRsNameLen;
	uint8_t *m3uaAspRsRemotePointCode;
	size_t m3uaAspRsRemotePointCodeLen;
	long m3uaAspRsOperationalState;
	long m3uaAspRsAdministrativeState;
	long m3uaAspRsUsageState;
	uint8_t *m3uaAspRsAlarmStatus;
	size_t m3uaAspRsAlarmStatusLen;
	uint8_t *m3uaAspRsProceduralStatus;
	size_t m3uaAspRsProceduralStatusLen;
	long m3uaAspRsTimerT8;
	long m3uaAspRsTimerT11;
	long m3uaAspRsTimerT15;
	long m3uaAspRsTimerT16;
	long m3uaAspRsTimerT18A;
	uint8_t *m3uaAspRsOptions;
	size_t m3uaAspRsOptionsLen;
	uint8_t *m3uaAspRsAvailabilityStatus;
	size_t m3uaAspRsAvailabilityStatusLen;
	long m3uaAspRsCongestionLevel;
	long m3uaAspRsStatus;
};
struct m3uaAspRlTable_data {
	uint m3uaAspRlTable_request;
	uint m3uaAspRlTable_refs;
	ulong m3uaAspSpIndex;
	ulong m3uaAspRsIndex;
	ulong m3uaAspAgIndex;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
	ulong m3uaAspRlCost;
};
struct m3uaAspRtTable_data {
	uint m3uaAspRtTable_request;
	uint m3uaAspRtTable_refs;
	ulong m3uaAspSpIndex;
	ulong m3uaAspRsIndex;
	ulong m3uaAspAgIndex;
	ulong m3uaAspSgIndex;
	ulong m3uaAspRtCost;
	long m3uaAspRtTimerT6;
	long m3uaAspRtTimerT10;
	uint8_t *m3uaAspRtAvailabilityStatus;
	size_t m3uaAspRtAvailabilityStatusLen;
	long m3uaAspRtAdminstrativeState;
	long m3uaAspRtOperationalState;
	uint8_t *m3uaAspRtProceduralStatus;
	size_t m3uaAspRtProceduralStatusLen;
	long m3uaAspRtUsageState;
	long m3uaAspRtStatus;
};
struct m3uaAspRcTable_data {
	uint m3uaAspRcTable_request;
	uint m3uaAspRcTable_refs;
	ulong m3uaAspIndex;
	ulong m3uaAspSpIndex;
	ulong m3uaAspAgIndex;
	ulong m3uaAspRcValue;
	long m3uaAspRcRegstrationPolicy;
	oid *m3uaAspRcTrafficMode;
	size_t m3uaAspRcTrafficModeLen;
	long m3uaAspRcStatus;
};
struct m3uaAspAsTable_data {
	uint m3uaAspAsTable_request;
	uint m3uaAspAsTable_refs;
	ulong m3uaAspIndex;
	ulong m3uaAspSpIndex;
	ulong m3uaAspAgIndex;
	ulong m3uaAspSgIndex;
	long m3uaAspAsAsState;
	long m3uaAspAsOperationalState;
	uint8_t *m3uaAspAsProceduralStatus;
	size_t m3uaAspAsProceduralStatusLen;
	long m3uaAspAsUsageState;
};
struct m3uaAspAfTable_data {
	uint m3uaAspAfTable_request;
	uint m3uaAspAfTable_refs;
	ulong m3uaAspIndex;
	ulong m3uaAspSpIndex;
	ulong m3uaAspAgIndex;
	ulong m3uaAspSgIndex;
	ulong m3uaAspSgpIndex;
	long m3uaAspAfAsState;
	long m3uaAspAfAdministrativeState;
	long m3uaAspAfOperationalState;
	uint8_t *m3uaAspAfProceduralStatus;
	size_t m3uaAspAfProceduralStatusLen;
	long m3uaAspAfUsageState;
};

/* storage declarations */
extern struct m3uaAspMIB_data *m3uaAspMIBStorage;
extern struct header_complex_index *m3uaAspTableStorage;
extern struct header_complex_index *m3uaAspAgTableStorage;
extern struct header_complex_index *m3uaAspSgTableStorage;
extern struct header_complex_index *m3uaAspSgpTableStorage;
extern struct header_complex_index *m3uaAspSpTableStorage;
extern struct header_complex_index *m3uaAspMtTableStorage;
extern struct header_complex_index *m3uaAspRsTableStorage;
extern struct header_complex_index *m3uaAspRlTableStorage;
extern struct header_complex_index *m3uaAspRtTableStorage;
extern struct header_complex_index *m3uaAspRcTableStorage;
extern struct header_complex_index *m3uaAspAsTableStorage;
extern struct header_complex_index *m3uaAspAfTableStorage;

/* enum definitions from the covered mib sections */

#define M3UAASPADMINISTRATIVESTATE_LOCKED        0
#define M3UAASPADMINISTRATIVESTATE_UNLOCKED      1
#define M3UAASPADMINISTRATIVESTATE_SHUTTINGDOWN  2

#define M3UAASPADMINISTRATIVESTATE_LOCKED        0
#define M3UAASPADMINISTRATIVESTATE_UNLOCKED      1
#define M3UAASPADMINISTRATIVESTATE_SHUTTINGDOWN  2

#define M3UAASPCAPABILITIES_ASPEXT               0
#define M3UAASPCAPABILITIES_SGINFO               1
#define M3UAASPCAPABILITIES_LOADSEL              2
#define M3UAASPCAPABILITIES_LOADGRP              3
#define M3UAASPCAPABILITIES_CORID                4
#define M3UAASPCAPABILITIES_REGEXT               5
#define M3UAASPCAPABILITIES_SESSID               6
#define M3UAASPCAPABILITIES_DYNAMIC              7
#define M3UAASPCAPABILITIES_ASPCONG              8
#define M3UAASPCAPABILITIES_TEXTIID              9

#define M3UAASPIDPOLICY_UNKNOWN                  1
#define M3UAASPIDPOLICY_PERMITTED                2
#define M3UAASPIDPOLICY_REQUIRED                 3
#define M3UAASPIDPOLICY_FORBIDDEN                4

#define M3UAASPREGISTRATIONPOLICY_UNKNOWN        1
#define M3UAASPREGISTRATIONPOLICY_FORBIDDEN      2
#define M3UAASPREGISTRATIONPOLICY_PERMITTED      3
#define M3UAASPREGISTRATIONPOLICY_REQUIRED       4

#define M3UAASPASSOCIATIONPOLICY_UNKNOWN         1
#define M3UAASPASSOCIATIONPOLICY_ALWAYS          2
#define M3UAASPASSOCIATIONPOLICY_ONDEMAND        3
#define M3UAASPASSOCIATIONPOLICY_OTHER           4

#define M3UAASPAGOPTIONS_ASPEXT                  0
#define M3UAASPAGOPTIONS_SGINFO                  1
#define M3UAASPAGOPTIONS_LOADSEL                 2
#define M3UAASPAGOPTIONS_LOADGRP                 3
#define M3UAASPAGOPTIONS_CORID                   4
#define M3UAASPAGOPTIONS_REGEXT                  5
#define M3UAASPAGOPTIONS_SESSID                  6
#define M3UAASPAGOPTIONS_DYNAMIC                 7
#define M3UAASPAGOPTIONS_ASPCONG                 8
#define M3UAASPAGOPTIONS_TEXTIID                 9

#define M3UAASPAGREGISTRATIONPOLICY_UNKNOWN      1
#define M3UAASPAGREGISTRATIONPOLICY_FORBIDDEN    2
#define M3UAASPAGREGISTRATIONPOLICY_PERMITTED    3
#define M3UAASPAGREGISTRATIONPOLICY_REQUIRED     4

#define M3UAASPAGASPIDPOLICY_UNKNOWN             1
#define M3UAASPAGASPIDPOLICY_PERMITTED           2
#define M3UAASPAGASPIDPOLICY_REQUIRED            3
#define M3UAASPAGASPIDPOLICY_FORBIDDEN           4

#define M3UAASPSGADMINISTRATIVESTATE_LOCKED      0
#define M3UAASPSGADMINISTRATIVESTATE_UNLOCKED    1
#define M3UAASPSGADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPSGOPERATIONALSTATE_DISABLED       0
#define M3UAASPSGOPERATIONALSTATE_ENABLED        1

#define M3UAASPSGPROCEDUREALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPSGPROCEDUREALSTATUS_NOTINITIALIZED 1
#define M3UAASPSGPROCEDUREALSTATUS_INITIALIZING  2
#define M3UAASPSGPROCEDUREALSTATUS_REPORTING     3
#define M3UAASPSGPROCEDUREALSTATUS_TERMINATING   4

#define M3UAASPSGUSGAGESTATE_IDLE                0
#define M3UAASPSGUSGAGESTATE_ACTIVE              1
#define M3UAASPSGUSGAGESTATE_BUSY                2

#define M3UAASPSGASPSTATE_DOWN                   1
#define M3UAASPSGASPSTATE_INITIALIZING           2
#define M3UAASPSGASPSTATE_TERMINATING            3
#define M3UAASPSGASPSTATE_UP                     4

#define M3UAASPSGPADMINISTRATIVESTATE_LOCKED     0
#define M3UAASPSGPADMINISTRATIVESTATE_UNLOCKED   1
#define M3UAASPSGPADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPSGPPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPSGPPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPSGPPROCEDURALSTATUS_INITIALIZING  2
#define M3UAASPSGPPROCEDURALSTATUS_REPORTING     3
#define M3UAASPSGPPROCEDURALSTATUS_TERMINATING   4

#define M3UAASPSGPOPERATIONALSTATE_DISABLED      0
#define M3UAASPSGPOPERATIONALSTATE_ENABLED       1

#define M3UAASPSGPUSAGESTATE_IDLE                0
#define M3UAASPSGPUSAGESTATE_ACTIVE              1
#define M3UAASPSGPUSAGESTATE_BUSY                2

#define M3UAASPSGPASPSTATE_DOWN                  1
#define M3UAASPSGPASPSTATE_INITIALIZING          2
#define M3UAASPSGPASPSTATE_TERMINATING           3
#define M3UAASPSGPASPSTATE_UP                    4

#define M3UAASPSPOPERATIONALSTATE_DISABLED       0
#define M3UAASPSPOPERATIONALSTATE_ENABLED        1

#define M3UAASPSPUSAGESTATE_IDLE                 0
#define M3UAASPSPUSAGESTATE_ACTIVE               1
#define M3UAASPSPUSAGESTATE_BUSY                 2

#define M3UAASPSPADMINISTRATIVESTATE_LOCKED      0
#define M3UAASPSPADMINISTRATIVESTATE_UNLOCKED    1
#define M3UAASPSPADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPSPALARMSTATUS_UNDERREPAIR         0
#define M3UAASPSPALARMSTATUS_CRITICAL            1
#define M3UAASPSPALARMSTATUS_MAJOR               2
#define M3UAASPSPALARMSTATUS_MINOR               3
#define M3UAASPSPALARMSTATUS_ALARMOUTSTANDING    4

#define M3UAASPSPPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPSPPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPSPPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPSPPROCEDURALSTATUS_REPORTING      3
#define M3UAASPSPPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPSPAVAILABILTYSTATUS_INTEST        0
#define M3UAASPSPAVAILABILTYSTATUS_FAILED        1
#define M3UAASPSPAVAILABILTYSTATUS_POWEROFF      2
#define M3UAASPSPAVAILABILTYSTATUS_OFFLINE       3
#define M3UAASPSPAVAILABILTYSTATUS_OFFDUTY       4
#define M3UAASPSPAVAILABILTYSTATUS_DEPENDENCY    5
#define M3UAASPSPAVAILABILTYSTATUS_DEGRADED      6
#define M3UAASPSPAVAILABILTYSTATUS_NOTINSTALLED  7
#define M3UAASPSPAVAILABILTYSTATUS_LOGFULL       8

#define M3UAASPMTADMINISTRATIVESTATE_LOCKED      0
#define M3UAASPMTADMINISTRATIVESTATE_UNLOCKED    1
#define M3UAASPMTADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPMTOPERATIONALSTATE_DISABLED       0
#define M3UAASPMTOPERATIONALSTATE_ENABLED        1

#define M3UAASPMTPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPMTPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPMTPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPMTPROCEDURALSTATUS_REPORTING      3
#define M3UAASPMTPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPMTUSAGESTATE_IDLE                 0
#define M3UAASPMTUSAGESTATE_ACTIVE               1
#define M3UAASPMTUSAGESTATE_BUSY                 2

#define M3UAASPMTASSTATE_DOWN                    1
#define M3UAASPMTASSTATE_INITIALIZING            2
#define M3UAASPMTASSTATE_TERMINATING             3
#define M3UAASPMTASSTATE_INACTIVE                4
#define M3UAASPMTASSTATE_ACTIVATING              5
#define M3UAASPMTASSTATE_DEACTIVATING            6
#define M3UAASPMTASSTATE_ACTIVE                  7

#define M3UAASPRSOPERATIONALSTATE_DISABLED       0
#define M3UAASPRSOPERATIONALSTATE_ENABLED        1

#define M3UAASPRSADMINISTRATIVESTATE_LOCKED      0
#define M3UAASPRSADMINISTRATIVESTATE_UNLOCKED    1
#define M3UAASPRSADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPRSUSAGESTATE_IDLE                 0
#define M3UAASPRSUSAGESTATE_ACTIVE               1
#define M3UAASPRSUSAGESTATE_BUSY                 2

#define M3UAASPRSALARMSTATUS_UNDERREPAIR         0
#define M3UAASPRSALARMSTATUS_CRITICAL            1
#define M3UAASPRSALARMSTATUS_MAJOR               2
#define M3UAASPRSALARMSTATUS_MINOR               3
#define M3UAASPRSALARMSTATUS_ALARMOUTSTANDING    4

#define M3UAASPRSPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPRSPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPRSPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPRSPROCEDURALSTATUS_REPORTING      3
#define M3UAASPRSPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPRSOPTIONS_CLUSTER                 0
#define M3UAASPRSOPTIONS_TRANSFERFUNCTION        1
#define M3UAASPRSOPTIONS_ADJACENT                2
#define M3UAASPRSOPTIONS_SECURITY                3
#define M3UAASPRSOPTIONS_LINKOSCILLATIONA        4
#define M3UAASPRSOPTIONS_LINKOSCILLATIONB        5

#define M3UAASPRSAVAILABILITYSTATUS_INACTIVE     0
#define M3UAASPRSAVAILABILITYSTATUS_BLOCKED      1
#define M3UAASPRSAVAILABILITYSTATUS_INHIBITED    2
#define M3UAASPRSAVAILABILITYSTATUS_PROHIBITED   3
#define M3UAASPRSAVAILABILITYSTATUS_RESTART      4
#define M3UAASPRSAVAILABILITYSTATUS_RESTRICTED   5
#define M3UAASPRSAVAILABILITYSTATUS_CONGESTED    6
#define M3UAASPRSAVAILABILITYSTATUS_DANGER       7
#define M3UAASPRSAVAILABILITYSTATUS_ALLOWED      8

#define M3UAASPRSCONGESTIONLEVEL_NONE            0
#define M3UAASPRSCONGESTIONLEVEL_CONGESTIONLEVEL1 1
#define M3UAASPRSCONGESTIONLEVEL_CONGESTIONLEVEL2 2
#define M3UAASPRSCONGESTIONLEVEL_CONGESTIONLEVEL3 3

#define M3UAASPRTAVAILABILITYSTATUS_INACTIVE     0
#define M3UAASPRTAVAILABILITYSTATUS_BLOCKED      1
#define M3UAASPRTAVAILABILITYSTATUS_INHIBITED    2
#define M3UAASPRTAVAILABILITYSTATUS_PROHIBITED   3
#define M3UAASPRTAVAILABILITYSTATUS_RESTART      4
#define M3UAASPRTAVAILABILITYSTATUS_RESTRICTED   5
#define M3UAASPRTAVAILABILITYSTATUS_CONGESTED    6
#define M3UAASPRTAVAILABILITYSTATUS_DANGER       7
#define M3UAASPRTAVAILABILITYSTATUS_ALLOWED      8

#define M3UAASPRTADMINSTRATIVESTATE_LOCKED       0
#define M3UAASPRTADMINSTRATIVESTATE_UNLOCKED     1
#define M3UAASPRTADMINSTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPRTOPERATIONALSTATE_DISABLED       0
#define M3UAASPRTOPERATIONALSTATE_ENABLED        1

#define M3UAASPRTPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPRTPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPRTPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPRTPROCEDURALSTATUS_REPORTING      3
#define M3UAASPRTPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPRTUSAGESTATE_IDLE                 0
#define M3UAASPRTUSAGESTATE_ACTIVE               1
#define M3UAASPRTUSAGESTATE_BUSY                 2

#define M3UAASPRCREGSTRATIONPOLICY_UNKNOWN       1
#define M3UAASPRCREGSTRATIONPOLICY_FORBIDDEN     2
#define M3UAASPRCREGSTRATIONPOLICY_PERMITTED     3
#define M3UAASPRCREGSTRATIONPOLICY_REQUIRED      4

#define M3UAASPASASSTATE_DOWN                    1
#define M3UAASPASASSTATE_INITIALIZING            2
#define M3UAASPASASSTATE_TERMINATING             3
#define M3UAASPASASSTATE_INACTIVE                4
#define M3UAASPASASSTATE_ACTIVATING              5
#define M3UAASPASASSTATE_DEACTIVATING            6
#define M3UAASPASASSTATE_ACTIVE                  7

#define M3UAASPASOPERATIONALSTATE_DISABLED       0
#define M3UAASPASOPERATIONALSTATE_ENABLED        1

#define M3UAASPASPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPASPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPASPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPASPROCEDURALSTATUS_REPORTING      3
#define M3UAASPASPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPASUSAGESTATE_IDLE                 0
#define M3UAASPASUSAGESTATE_ACTIVE               1
#define M3UAASPASUSAGESTATE_BUSY                 2

#define M3UAASPAFASSTATE_DOWN                    1
#define M3UAASPAFASSTATE_INITIALIZING            2
#define M3UAASPAFASSTATE_TERMINATING             3
#define M3UAASPAFASSTATE_INACTIVE                4
#define M3UAASPAFASSTATE_ACTIVATING              5
#define M3UAASPAFASSTATE_DEACTIVATING            6
#define M3UAASPAFASSTATE_ACTIVE                  7

#define M3UAASPAFADMINISTRATIVESTATE_LOCKED      0
#define M3UAASPAFADMINISTRATIVESTATE_UNLOCKED    1
#define M3UAASPAFADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UAASPAFOPERATIONALSTATE_DISABLED       0
#define M3UAASPAFOPERATIONALSTATE_ENABLED        1

#define M3UAASPAFPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UAASPAFPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UAASPAFPROCEDURALSTATUS_INITIALIZING   2
#define M3UAASPAFPROCEDURALSTATUS_REPORTING      3
#define M3UAASPAFPROCEDURALSTATUS_TERMINATING    4

#define M3UAASPAFUSAGESTATE_IDLE                 0
#define M3UAASPAFUSAGESTATE_ACTIVE               1
#define M3UAASPAFUSAGESTATE_BUSY                 2

/* notifications */
extern oid m3uaAspRsAlarm_oid[13];

/* scalars accessible only for notify */

/* object id definitions */
extern oid m3uaAspRsEvents_oid[12];

/* function prototypes */
/* trap function prototypes */
extern void send_m3uaAspRsAlarm_v2trap(struct variable_list *);

/* variable function prototypes */
void init_m3uaAspMIB(void);
void deinit_m3uaAspMIB(void);
int term_m3uaAspMIB(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_m3uaAspMIB;
void parse_m3uaAspMIB(const char *, char *);
SNMPCallback store_m3uaAspMIB;
void refresh_m3uaAspMIB(void);
FindVarMethod var_m3uaAspTable;
struct m3uaAspTable_data *m3uaAspTable_create(void);
struct m3uaAspTable_data *m3uaAspTable_duplicate(struct m3uaAspTable_data *);
int m3uaAspTable_destroy(struct m3uaAspTable_data **);
int m3uaAspTable_add(struct m3uaAspTable_data *);
int m3uaAspTable_del(struct m3uaAspTable_data *);
void parse_m3uaAspTable(const char *, char *);
SNMPCallback store_m3uaAspTable;
void refresh_m3uaAspTable(void);
FindVarMethod var_m3uaAspAgTable;
struct m3uaAspAgTable_data *m3uaAspAgTable_create(void);
struct m3uaAspAgTable_data *m3uaAspAgTable_duplicate(struct m3uaAspAgTable_data *);
int m3uaAspAgTable_destroy(struct m3uaAspAgTable_data **);
int m3uaAspAgTable_add(struct m3uaAspAgTable_data *);
int m3uaAspAgTable_del(struct m3uaAspAgTable_data *);
void parse_m3uaAspAgTable(const char *, char *);
SNMPCallback store_m3uaAspAgTable;
void refresh_m3uaAspAgTable(void);
FindVarMethod var_m3uaAspSgTable;
struct m3uaAspSgTable_data *m3uaAspSgTable_create(void);
struct m3uaAspSgTable_data *m3uaAspSgTable_duplicate(struct m3uaAspSgTable_data *);
int m3uaAspSgTable_destroy(struct m3uaAspSgTable_data **);
int m3uaAspSgTable_add(struct m3uaAspSgTable_data *);
int m3uaAspSgTable_del(struct m3uaAspSgTable_data *);
void parse_m3uaAspSgTable(const char *, char *);
SNMPCallback store_m3uaAspSgTable;
void refresh_m3uaAspSgTable(void);
FindVarMethod var_m3uaAspSgpTable;
struct m3uaAspSgpTable_data *m3uaAspSgpTable_create(void);
struct m3uaAspSgpTable_data *m3uaAspSgpTable_duplicate(struct m3uaAspSgpTable_data *);
int m3uaAspSgpTable_destroy(struct m3uaAspSgpTable_data **);
int m3uaAspSgpTable_add(struct m3uaAspSgpTable_data *);
int m3uaAspSgpTable_del(struct m3uaAspSgpTable_data *);
void parse_m3uaAspSgpTable(const char *, char *);
SNMPCallback store_m3uaAspSgpTable;
void refresh_m3uaAspSgpTable(void);
FindVarMethod var_m3uaAspSpTable;
struct m3uaAspSpTable_data *m3uaAspSpTable_create(void);
struct m3uaAspSpTable_data *m3uaAspSpTable_duplicate(struct m3uaAspSpTable_data *);
int m3uaAspSpTable_destroy(struct m3uaAspSpTable_data **);
int m3uaAspSpTable_add(struct m3uaAspSpTable_data *);
int m3uaAspSpTable_del(struct m3uaAspSpTable_data *);
void parse_m3uaAspSpTable(const char *, char *);
SNMPCallback store_m3uaAspSpTable;
void refresh_m3uaAspSpTable(void);
FindVarMethod var_m3uaAspMtTable;
struct m3uaAspMtTable_data *m3uaAspMtTable_create(void);
struct m3uaAspMtTable_data *m3uaAspMtTable_duplicate(struct m3uaAspMtTable_data *);
int m3uaAspMtTable_destroy(struct m3uaAspMtTable_data **);
int m3uaAspMtTable_add(struct m3uaAspMtTable_data *);
int m3uaAspMtTable_del(struct m3uaAspMtTable_data *);
void parse_m3uaAspMtTable(const char *, char *);
SNMPCallback store_m3uaAspMtTable;
void refresh_m3uaAspMtTable(void);
FindVarMethod var_m3uaAspRsTable;
struct m3uaAspRsTable_data *m3uaAspRsTable_create(void);
struct m3uaAspRsTable_data *m3uaAspRsTable_duplicate(struct m3uaAspRsTable_data *);
int m3uaAspRsTable_destroy(struct m3uaAspRsTable_data **);
int m3uaAspRsTable_add(struct m3uaAspRsTable_data *);
int m3uaAspRsTable_del(struct m3uaAspRsTable_data *);
void parse_m3uaAspRsTable(const char *, char *);
SNMPCallback store_m3uaAspRsTable;
void refresh_m3uaAspRsTable(void);
FindVarMethod var_m3uaAspRlTable;
struct m3uaAspRlTable_data *m3uaAspRlTable_create(void);
struct m3uaAspRlTable_data *m3uaAspRlTable_duplicate(struct m3uaAspRlTable_data *);
int m3uaAspRlTable_destroy(struct m3uaAspRlTable_data **);
int m3uaAspRlTable_add(struct m3uaAspRlTable_data *);
int m3uaAspRlTable_del(struct m3uaAspRlTable_data *);
void parse_m3uaAspRlTable(const char *, char *);
SNMPCallback store_m3uaAspRlTable;
void refresh_m3uaAspRlTable(void);
FindVarMethod var_m3uaAspRtTable;
struct m3uaAspRtTable_data *m3uaAspRtTable_create(void);
struct m3uaAspRtTable_data *m3uaAspRtTable_duplicate(struct m3uaAspRtTable_data *);
int m3uaAspRtTable_destroy(struct m3uaAspRtTable_data **);
int m3uaAspRtTable_add(struct m3uaAspRtTable_data *);
int m3uaAspRtTable_del(struct m3uaAspRtTable_data *);
void parse_m3uaAspRtTable(const char *, char *);
SNMPCallback store_m3uaAspRtTable;
void refresh_m3uaAspRtTable(void);
FindVarMethod var_m3uaAspRcTable;
struct m3uaAspRcTable_data *m3uaAspRcTable_create(void);
struct m3uaAspRcTable_data *m3uaAspRcTable_duplicate(struct m3uaAspRcTable_data *);
int m3uaAspRcTable_destroy(struct m3uaAspRcTable_data **);
int m3uaAspRcTable_add(struct m3uaAspRcTable_data *);
int m3uaAspRcTable_del(struct m3uaAspRcTable_data *);
void parse_m3uaAspRcTable(const char *, char *);
SNMPCallback store_m3uaAspRcTable;
void refresh_m3uaAspRcTable(void);
FindVarMethod var_m3uaAspAsTable;
struct m3uaAspAsTable_data *m3uaAspAsTable_create(void);
struct m3uaAspAsTable_data *m3uaAspAsTable_duplicate(struct m3uaAspAsTable_data *);
int m3uaAspAsTable_destroy(struct m3uaAspAsTable_data **);
int m3uaAspAsTable_add(struct m3uaAspAsTable_data *);
int m3uaAspAsTable_del(struct m3uaAspAsTable_data *);
void parse_m3uaAspAsTable(const char *, char *);
SNMPCallback store_m3uaAspAsTable;
void refresh_m3uaAspAsTable(void);
FindVarMethod var_m3uaAspAfTable;
struct m3uaAspAfTable_data *m3uaAspAfTable_create(void);
struct m3uaAspAfTable_data *m3uaAspAfTable_duplicate(struct m3uaAspAfTable_data *);
int m3uaAspAfTable_destroy(struct m3uaAspAfTable_data **);
int m3uaAspAfTable_add(struct m3uaAspAfTable_data *);
int m3uaAspAfTable_del(struct m3uaAspAfTable_data *);
void parse_m3uaAspAfTable(const char *, char *);
SNMPCallback store_m3uaAspAfTable;
void refresh_m3uaAspAfTable(void);

WriteMethod write_m3uaAspName;
WriteMethod write_m3uaAspName;
WriteMethod write_m3uaAspAdministrativeState;
WriteMethod write_m3uaAspAdministrativeState;
WriteMethod write_m3uaAspCapabilities;
WriteMethod write_m3uaAspIdPolicy;
WriteMethod write_m3uaAspRegistrationPolicy;
WriteMethod write_m3uaAspAssociationPolicy;
WriteMethod write_m3uaAspStatus;
WriteMethod write_m3uaAspAgProtocolVersion;
WriteMethod write_m3uaAspAgOptions;
WriteMethod write_m3uaAspAgRegistrationPolicy;
WriteMethod write_m3uaAspAgAspIdPolicy;
WriteMethod write_m3uaAspAgAspProtocolPayloadId;
WriteMethod write_m3uaAspAgIpPort;
WriteMethod write_m3uaAspAgMinOstreams;
WriteMethod write_m3uaAspAgMaxIstreams;
WriteMethod write_m3uaAspAgTimerT7;
WriteMethod write_m3uaAspAgTimerT19;
WriteMethod write_m3uaAspAgTimerT21;
WriteMethod write_m3uaAspAgTimerT25A;
WriteMethod write_m3uaAspAgTimerT28A;
WriteMethod write_m3uaAspAgTimerT29A;
WriteMethod write_m3uaAspAgTimerT30A;
WriteMethod write_m3uaAspAgStatus;
WriteMethod write_m3uaAspSgName;
WriteMethod write_m3uaAspSgAdministrativeState;
WriteMethod write_m3uaAspSgAspState;
WriteMethod write_m3uaAspSgMaxInitRetrans;
WriteMethod write_m3uaAspSgMaxLifeTime;
WriteMethod write_m3uaAspSgTimerT1;
WriteMethod write_m3uaAspSgTimerT2;
WriteMethod write_m3uaAspSgTimerT3;
WriteMethod write_m3uaAspSgTimerT4;
WriteMethod write_m3uaAspSgTimerT5;
WriteMethod write_m3uaAspSgTimerT5;
WriteMethod write_m3uaAspSgTimerT19A;
WriteMethod write_m3uaAspSgTimerT24;
WriteMethod write_m3uaAspSgTimerT31A;
WriteMethod write_m3uaAspSgTimerT32A;
WriteMethod write_m3uaAspSgTimerT33A;
WriteMethod write_m3uaAspSgTimerT34A;
WriteMethod write_m3uaAspSgTimerT1T;
WriteMethod write_m3uaAspSgTimerT2T;
WriteMethod write_m3uaAspSgpName;
WriteMethod write_m3uaAspSgpAdministrativeState;
WriteMethod write_m3uaAspSgpAspState;
WriteMethod write_m3uaAspSgpPrimaryAddress;
WriteMethod write_m3uaAspSgpHostName;
WriteMethod write_m3uaAspSgpStatus;
WriteMethod write_m3uaAspSpName;
WriteMethod write_m3uaAspSpAdministrativeState;
WriteMethod write_m3uaAspSpAlarmStatus;
WriteMethod write_m3uaAspSpPointCode;
WriteMethod write_m3uaAspSpTimerT1R;
WriteMethod write_m3uaAspSpTimerT18;
WriteMethod write_m3uaAspSpTimerT20;
WriteMethod write_m3uaAspSpTimerT22A;
WriteMethod write_m3uaAspSpTimerT23A;
WriteMethod write_m3uaAspSpTimerT24A;
WriteMethod write_m3uaAspSpTimerT26A;
WriteMethod write_m3uaAspSpTimerT27A;
WriteMethod write_m3uaAspSpStatus;
WriteMethod write_m3uaAspMtName;
WriteMethod write_m3uaAspMtAdministrativeState;
WriteMethod write_m3uaAspMtAsState;
WriteMethod write_m3uaAspMtStatus;
WriteMethod write_m3uaAspRsAdministrativeState;
WriteMethod write_m3uaAspRsAlarmStatus;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRlCost;
WriteMethod write_m3uaAspRcValue;
WriteMethod write_m3uaAspRcRegstrationPolicy;
WriteMethod write_m3uaAspRcTrafficMode;
WriteMethod write_m3uaAspRcStatus;
WriteMethod write_m3uaAspAfAsState;
WriteMethod write_m3uaAspAfAdministrativeState;
#endif				/* __LOCAL_M3UAASPMIB_H__ */