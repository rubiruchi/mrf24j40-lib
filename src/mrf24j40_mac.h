/*
 * IEEE 802.15.4-2003 MAC sublayer service implementation
 *
 * Copyright (C) 2017, 2018 Patrick Urban <patrick.urban@web.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MRF24J40_MAC_H
#define _MRF24J40_MAC_H

#include "mrf24j40.h"

#define PHY_MAX_PHY_PACKET_SIZE		127

/* MAC sublayer constants */
#define MAC_BASE_SLOT_DURATION		60
#define MAC_NUM_SUPERFRAME_SLOTS	16
#define MAC_BASE_SUPERFRAME_DURATION	(MAC_BASE_SLOT_DURATION * MAC_NUM_SUPERFRAME_SLOTS)
#define MAC_MAX_BACKOFF_EXPONENT	5
#define MAC_MAX_BEACON_OVERHEAD		75
#define MAC_MAX_BEACON_PAYLOAD_LENGTH	(PHY_MAX_PHY_PACKET_SIZE - MAC_MAX_BEACON_OVERHEAD)
#define MAC_GTS_DESC_PERSISTENCE_TIME	4
#define MAC_MAX_FRAME_OVERHEAD		25
#define MAC_MAX_FRAME_RESPONSE_TIME	1220
#define MAC_MAX_FRAME_RETRIES		3
#define MAC_MAX_LOST_BEACONS		4
#define MAC_MAX_MAC_FRAME_SIZE		(PHY_MAX_PHY_PACKET_SIZE - MAC_MAX_FRAME_OVERHEAD)
#define MAC_MAX_SIFS_FRAME_SIZE		18
#define MAC_MIN_CAP_LENGTH		440
#define MAC_MIN_LIFS_PERIOD		40
#define MAC_MIN_SIFS_PERIOD		12
#define MAC_RESPONSE_WAIT_TIME		(32 * MAC_BASE_SUPERFRAME_DURATION)
#define MAC_UNIT_BACKOFF_PERIOD		20

#endif //_MRF24J40_MAC_H