/* 
 * Copyright (c) 2007-2013 TIBCO Software Inc. 
 * All rights reserved.
 * For more information, please contact:
 * TIBCO Software Inc., Palo Alto, California, USA
 * 
 * $Id: admtypes.h 68297 2013-07-19 21:19:19Z $
 * 
 */

#ifndef _INCLUDED_admintypes_h
#define _INCLUDED_admintypes_h

#if defined(__cplusplus)
extern "C" {
#endif

#define TIBEMS_GET_STAT                 (0x0001)
#define TIBEMS_GET_DETAILED_STAT        (0x0002)
#define TIBEMS_GET_SELECTOR             (0x0004)

#define TIBEMS_DEST_GET_STATIC          1 
#define TIBEMS_DEST_GET_DYNAMIC         2
#define TIBEMS_DEST_GET_NOTEMP          3
#define TIBEMS_DEST_GET_ALL             4

#define TIBEMS_OVERFLOW_DEFAULT         0
#define TIBEMS_OVERFLOW_DISCARD_OLD     1
#define TIBEMS_OVERFLOW_REJECT_INCOMING 2

#define TIBEMS_SUBSCRIPTIONS_FILTER_DURABLE_ONLY    (0x01)
#define TIBEMS_SUBSCRIPTIONS_FILTER_NO_DURABLE      (0x02)
#define TIBEMS_SUBSCRIPTIONS_FILTER_SHARED_ONLY     (0x04)
#define TIBEMS_SUBSCRIPTIONS_FILTER_NO_SHARED       (0x08)

#define TIBEMS_INVALID_ADMIN_ID         (0)

typedef tibems_int                      tibemsAdmin;
typedef tibems_int                      tibemsServerInfo;
typedef tibems_int                      tibemsDestinationInfo;
typedef tibems_int                      tibemsQueueInfo;
typedef tibems_int                      tibemsTopicInfo;
typedef tibems_int                      tibemsConsumerInfo;
typedef tibems_int                      tibemsSubscriptionInfo;
typedef tibems_int                      tibemsProducerInfo;
typedef tibems_int                      tibemsDetailedDestStat;
typedef tibems_int                      tibemsStatData;
typedef tibems_int                      tibemsCollectionObj;
typedef struct __tibemsCollection*      tibemsCollection;

#ifdef  __cplusplus
}
#endif

#endif /* _INCLUDED_admintypes_h */
