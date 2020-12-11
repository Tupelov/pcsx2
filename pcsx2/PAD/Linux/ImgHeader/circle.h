#pragma once

#include "Pcsx2Types.h"
#include <wx/gdicmn.h>

class res_circle
{
public:
	static const uint Length = 916;
	static const u8 Data[Length];
	static wxBitmapType GetFormat() { return wxBITMAP_TYPE_PNG; }
};

const u8 res_circle::Data[Length] =
{
		0x89,0x50,0x4e,0x47,0x0d,0x0a,0x1a,0x0a,0x00,0x00,0x00,0x0d,0x49,0x48,0x44,0x52,0x00,
		0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x08,0x06,0x00,0x00,0x00,0x73,0x7a,0x7a,0xf4,0x00,
		0x00,0x00,0x06,0x62,0x4b,0x47,0x44,0x00,0xff,0x00,0xff,0x00,0xff,0xa0,0xbd,0xa7,0x93,
		0x00,0x00,0x00,0x09,0x70,0x48,0x59,0x73,0x00,0x00,0x0b,0x13,0x00,0x00,0x0b,0x13,0x01,
		0x00,0x9a,0x9c,0x18,0x00,0x00,0x00,0x07,0x74,0x49,0x4d,0x45,0x07,0xdf,0x0b,0x1c,0x10,
		0x10,0x1d,0x77,0x41,0x00,0x94,0x00,0x00,0x03,0x21,0x49,0x44,0x41,0x54,0x58,0xc3,0xcd,
		0x57,0x59,0x4f,0x13,0x51,0x14,0xfe,0x66,0x3a,0xdd,0x68,0x29,0xa5,0x2a,0x89,0x08,0xd4,
		0x56,0x5b,0x18,0x96,0x96,0x84,0x91,0x25,0x44,0xdc,0xde,0x7c,0xa9,0x2f,0x44,0x9f,0x8c,
		0x2f,0x24,0xf2,0x1b,0xfc,0x1b,0x26,0x3e,0x18,0x13,0x31,0x21,0xae,0x89,0xf0,0xe0,0xf2,
		0x44,0x82,0x86,0x80,0xa1,0x26,0x02,0x42,0x4b,0x9b,0x34,0x02,0x12,0x4d,0xd0,0xb2,0xb5,
		0x85,0xce,0x4c,0x67,0x7c,0x18,0x3a,0xd2,0xce,0x50,0xbb,0x21,0x9c,0xe4,0x26,0x77,0xee,
		0x32,0xdf,0xb9,0xe7,0x9c,0xfb,0x9d,0x73,0x09,0x14,0x21,0x8f,0xeb,0xeb,0x44,0x83,0xd1,
		0x08,0x4a,0xab,0x85,0x28,0x08,0xe0,0x38,0x0e,0x6c,0x32,0x89,0x3b,0x2b,0xdf,0x09,0x1c,
		0x96,0xbc,0x6e,0x6b,0x13,0x45,0x20,0xaf,0xf6,0xd4,0xe5,0x12,0xcb,0x06,0x9c,0x2f,0xa8,
		0x5a,0x7b,0x49,0xd3,0xc5,0x2b,0x32,0x7c,0xce,0x29,0x96,0x02,0xbe,0xbf,0xe5,0xc2,0x51,
		0xf5,0xd9,0x88,0xd7,0x2b,0xfa,0x66,0x66,0x0e,0xdc,0xb4,0x62,0x77,0x60,0xfb,0x64,0x1d,
		0x34,0x82,0xf4,0x6f,0x8e,0x22,0xd1,0x3a,0xfd,0x21,0xe7,0x81,0x86,0xea,0xeb,0x54,0x63,
		0x44,0x31,0xf0,0x86,0x61,0xc4,0xeb,0x7e,0xbf,0xea,0x4f,0x96,0xe9,0x6e,0x90,0x95,0xad,
		0xa0,0x78,0x41,0x75,0x3e,0x66,0xd2,0x42,0xdc,0xfa,0x0a,0xd7,0xcc,0x44,0xde,0x4a,0x64,
		0x7c,0xbc,0x68,0x6a,0x14,0xfb,0x83,0x8b,0x8a,0x8d,0xdf,0x5a,0x7a,0x60,0xd0,0xd3,0x79,
		0xbb,0x2f,0xa9,0xd3,0x20,0xc6,0x07,0xd1,0xe2,0xff,0xa8,0x66,0xf2,0x83,0x15,0x50,0xf3,
		0x57,0xe0,0xea,0x20,0xaa,0x37,0x92,0xf2,0xf7,0xba,0x55,0x0f,0x2a,0x3a,0x8b,0x84,0x91,
		0x82,0x77,0x72,0x1c,0x00,0x30,0xd7,0xd9,0x07,0x73,0x9c,0x03,0x61,0x69,0x85,0x21,0x99,
		0x92,0xd7,0xee,0x26,0x03,0x38,0x3b,0x3f,0x99,0x53,0x09,0x22,0x17,0xf8,0xe2,0xe5,0xbb,
		0xa8,0xda,0x62,0x65,0xf3,0x26,0xd8,0x20,0x3c,0x9f,0xc6,0x73,0x9e,0x3e,0xec,0xed,0x85,
		0x49,0xdb,0x04,0x72,0x2f,0x3e,0xd4,0x94,0x78,0x45,0xd3,0xe8,0x0f,0x04,0x08,0x59,0x81,
		0x21,0x7b,0x83,0x78,0x7b,0x69,0x39,0x63,0xd1,0xaa,0xbb,0x0b,0x1a,0x73,0x0b,0x00,0xe0,
		0x67,0x4d,0x05,0xda,0xdf,0xdf,0x2f,0xe8,0x16,0x2d,0xf5,0x0c,0x40,0xbf,0x67,0x8d,0x28,
		0x19,0x46,0x73,0x96,0x3b,0xd2,0x56,0x20,0x01,0x20,0x1b,0x3c,0xe4,0x61,0x22,0x69,0xf0,
		0x75,0xab,0xbe,0x60,0x70,0x00,0xb0,0x4f,0x3e,0x84,0x40,0x4a,0x06,0x36,0x53,0x4d,0x8a,
		0xf9,0x67,0x6e,0x89,0xac,0x48,0xb5,0xcd,0xc2,0x89,0x0b,0x4e,0x00,0x10,0x48,0x02,0xf4,
		0xd8,0x83,0xa2,0xb9,0x24,0xc6,0x07,0x01,0x00,0x3a,0x36,0x85,0xb0,0xb7,0x37,0x63,0xee,
		0x66,0x28,0x0c,0x00,0x20,0x87,0x9d,0xce,0x0c,0xdf,0x2f,0xdb,0x1d,0xb0,0x6e,0x4a,0x41,
		0xc7,0x25,0xe6,0x4b,0x62,0x51,0xf7,0x97,0x09,0xec,0x1a,0x28,0x09,0xa8,0xb2,0x45,0x75,
		0x0d,0x65,0xb5,0xd9,0x80,0x48,0x44,0x1e,0x60,0xab,0x4e,0x43,0x97,0x36,0xe3,0xc2,0x54,
		0xc9,0x54,0x2e,0x6c,0xcd,0x01,0x3a,0x1a,0xa6,0x04,0x2f,0x8f,0xdd,0xf0,0xf9,0x00,0x00,
		0x3e,0x40,0xa4,0xb2,0x49,0x67,0xdd,0xce,0xc0,0xbc,0x1a,0x03,0x4f,0x91,0x65,0xc9,0x25,
		0x31,0x93,0x0e,0x15,0x9c,0xd4,0x9f,0x67,0x2e,0xe2,0xde,0x19,0x5b,0xc6,0xbc,0x02,0xc5,
		0xb8,0xc3,0xcb,0xd7,0xae,0x1c,0xb2,0xff,0xda,0x6a,0x55,0x18,0xb4,0x3c,0xc7,0x2c,0x41,
		0x14,0x0a,0xec,0x18,0xa5,0xa0,0x31,0xc7,0xb9,0xb2,0x00,0xcc,0x76,0x5d,0x92,0xfb,0x9c,
		0x8a,0x5b,0xc9,0xb7,0x0c,0x93,0x31,0x50,0xbb,0x30,0xf6,0x19,0xc0,0x81,0x09,0xa7,0x50,
		0x31,0xc7,0x59,0xb9,0xaf,0x96,0x1b,0xc8,0x8d,0x68,0x34,0x63,0x20,0xc5,0xc7,0x3b,0x64,
		0x36,0x6b,0xee,0x2e,0xdd,0xc4,0x96,0x36,0x00,0x40,0xbc,0x42,0xb2,0xec,0xc8,0xe8,0xa8,
		0x32,0x1d,0x67,0xe7,0x81,0xe0,0x95,0x41,0x58,0x37,0x93,0x10,0x48,0x02,0xb5,0xfe,0x47,
		0x45,0x83,0x87,0xda,0x7b,0x61,0x21,0x1b,0x01,0x00,0xdb,0xa9,0x45,0x45,0x9a,0x26,0x00,
		0x42,0x35,0x08,0xc9,0xdf,0xd3,0x11,0x00,0x20,0x05,0x11,0x6b,0x0e,0xa6,0x78,0xf3,0xef,
		0x51,0x30,0xab,0xd3,0x28,0xc0,0x9f,0xbb,0x5d,0x7f,0x83,0xf0,0x89,0xbd,0x21,0x93,0xc1,
		0x66,0xfd,0xce,0x54,0x4c,0x62,0xc1,0x54,0xb5,0x07,0x3f,0xce,0x77,0x16,0x0c,0xbe,0xd4,
		0x33,0x20,0x67,0xc4,0x34,0x25,0xef,0x97,0x5b,0xa1,0x30,0xf1,0xcf,0x74,0xfc,0xeb,0x2c,
		0x03,0xde,0xe6,0x39,0xfc,0x74,0x9c,0x4b,0x89,0x35,0x07,0x83,0x54,0xb5,0xe7,0xf0,0x0b,
		0x92,0x63,0x51,0x92,0x1d,0x79,0x51,0x9a,0x6f,0x59,0x3e,0xd5,0x77,0x0d,0x96,0x38,0x5b,
		0x96,0xb2,0xfc,0xc8,0x1f,0x26,0xc7,0xf7,0x69,0xf6,0xbf,0x1e,0xa7,0x45,0x3d,0xa7,0xdf,
		0xd5,0x9c,0xf2,0x6f,0x5a,0xad,0x1d,0xe5,0x78,0x9e,0xff,0x01,0x54,0xca,0x0c,0xa8,0xba,
		0x8e,0x1c,0xca,0x00,0x00,0x00,0x00,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};