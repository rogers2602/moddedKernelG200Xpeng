/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/* Copyright(c) 2018-2019  Realtek Corporation
 */

#ifndef __RTW_REGD_H_
#define __RTW_REGD_H_

#define IEEE80211_CHAN_NO_IBSS IEEE80211_CHAN_NO_IR
#define IEEE80211_CHAN_PASSIVE_SCAN IEEE80211_CHAN_NO_IR
enum rtw_chplan_id {
	RTW_CHPLAN_ETSI1_NULL = 0x21,
	RTW_CHPLAN_WORLD_ETSI1 = 0x26,
	RTW_CHPLAN_MKK1_MKK1 = 0x27,
	RTW_CHPLAN_IC1_IC2 = 0x2B,
	RTW_CHPLAN_WORLD_CHILE1 = 0x2D,
	RTW_CHPLAN_WORLD_FCC3 = 0x30,
	RTW_CHPLAN_WORLD_FCC5 = 0x32,
	RTW_CHPLAN_FCC1_FCC7 = 0x34,
	RTW_CHPLAN_WORLD_ETSI2 = 0x35,
	RTW_CHPLAN_WORLD_ETSI3 = 0x36,
	RTW_CHPLAN_ETSI1_ETSI12 = 0x3D,
	RTW_CHPLAN_KCC1_KCC2 = 0x3E,
	RTW_CHPLAN_ETSI1_ETSI4 = 0x42,
	RTW_CHPLAN_FCC1_NCC3 = 0x44,
	RTW_CHPLAN_WORLD_ACMA1 = 0x45,
	RTW_CHPLAN_WORLD_ETSI6 = 0x47,
	RTW_CHPLAN_WORLD_ETSI7 = 0x48,
	RTW_CHPLAN_WORLD_ETSI8 = 0x49,
	RTW_CHPLAN_KCC1_KCC3 = 0x4B,
	RTW_CHPLAN_WORLD_ETSI10 = 0x51,
	RTW_CHPLAN_WORLD_ETSI14 = 0x59,
	RTW_CHPLAN_FCC2_FCC7 = 0x61,
	RTW_CHPLAN_FCC2_FCC1 = 0x62,
	RTW_CHPLAN_WORLD_ETSI15 = 0x63,
	RTW_CHPLAN_WORLD_FCC7 = 0x73,
	RTW_CHPLAN_FCC2_FCC17 = 0x74,
	RTW_CHPLAN_WORLD_ETSI20 = 0x75,
	RTW_CHPLAN_FCC2_FCC11 = 0x76,
	RTW_CHPLAN_REALTEK_DEFINE = 0x7f,
};

struct country_code_to_enum_rd {
	u16 countrycode;
	const char *iso_name;
};

enum country_code_type {
	COUNTRY_CODE_FCC = 0,
	COUNTRY_CODE_IC = 1,
	COUNTRY_CODE_ETSI = 2,
	COUNTRY_CODE_SPAIN = 3,
	COUNTRY_CODE_FRANCE = 4,
	COUNTRY_CODE_MKK = 5,
	COUNTRY_CODE_MKK1 = 6,
	COUNTRY_CODE_ISRAEL = 7,
	COUNTRY_CODE_TELEC = 8,
	COUNTRY_CODE_MIC = 9,
	COUNTRY_CODE_GLOBAL_DOMAIN = 10,
	COUNTRY_CODE_WORLD_WIDE_13 = 11,
	COUNTRY_CODE_TELEC_NETGEAR = 12,
	COUNTRY_CODE_WORLD_WIDE_13_5G_ALL = 13,

	/* new channel plan above this */
	COUNTRY_CODE_MAX
};

int rtw_regd_init(struct rtw_dev *rtwdev,
		  void (*reg_notifier)(struct wiphy *wiphy,
				       struct regulatory_request *request));
void rtw_regd_notifier(struct wiphy *wiphy, struct regulatory_request *request);
#endif