#pragma once

#include "Pcsx2Types.h"
#include <wx/gdicmn.h>

class res_arrow_right
{
public:
	static const uint Length = 252;
	static const u8 Data[Length];
	static wxBitmapType GetFormat() { return wxBITMAP_TYPE_PNG; }
};

const u8 res_arrow_right::Data[Length] =
{
		0x89,0x50,0x4e,0x47,0x0d,0x0a,0x1a,0x0a,0x00,0x00,0x00,0x0d,0x49,0x48,0x44,0x52,0x00,
		0x00,0x00,0x22,0x00,0x00,0x00,0x0e,0x08,0x06,0x00,0x00,0x00,0x4a,0x29,0xce,0x8f,0x00,
		0x00,0x00,0x06,0x62,0x4b,0x47,0x44,0x00,0xff,0x00,0xff,0x00,0xff,0xa0,0xbd,0xa7,0x93,
		0x00,0x00,0x00,0x09,0x70,0x48,0x59,0x73,0x00,0x00,0x0b,0x13,0x00,0x00,0x0b,0x13,0x01,
		0x00,0x9a,0x9c,0x18,0x00,0x00,0x00,0x07,0x74,0x49,0x4d,0x45,0x07,0xe0,0x02,0x0e,0x10,
		0x11,0x10,0x12,0xc7,0x05,0x75,0x00,0x00,0x00,0x89,0x49,0x44,0x41,0x54,0x38,0xcb,0xcd,
		0xd5,0xbd,0x11,0x01,0x61,0x14,0x85,0xe1,0x87,0x4d,0xb6,0x85,0x2d,0x40,0x07,0xda,0x90,
		0x28,0x40,0x44,0xac,0x16,0xa1,0x54,0x0b,0x5a,0x90,0xca,0x88,0x34,0xa0,0x04,0x89,0x39,
		0x9b,0xd8,0xdc,0xb0,0x7c,0xdf,0x99,0x39,0xe1,0x9d,0x79,0xe7,0xfe,0x9c,0xcb,0x48,0x0a,
		0x6d,0xb8,0x84,0x5d,0xe8,0x94,0x54,0x58,0x87,0x84,0x47,0x38,0x84,0x59,0x29,0x90,0x26,
		0x5c,0x5f,0x30,0x09,0xcf,0x70,0x0c,0xf3,0x77,0x8a,0xf3,0x27,0x9f,0xc2,0xa2,0x06,0x90,
		0xc1,0xe7,0xb0,0x0a,0x4d,0x69,0x90,0xc1,0xb7,0xb0,0x0d,0x2d,0x4c,0x42,0x94,0xd5,0x1d,
		0xfb,0xa9,0x5a,0x54,0xcb,0x68,0xea,0x59,0xd6,0x1f,0x74,0x78,0xf9,0xd1,0xf9,0x56,0x13,
		0x68,0x23,0x83,0x6c,0x8a,0x47,0xfc,0xb7,0x4f,0xaf,0x07,0xb4,0x65,0x73,0x74,0x57,0xc0,
		0x78,0xa4,0x00,0x00,0x00,0x00,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};