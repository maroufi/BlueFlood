#ifndef EVENT_UUIDS_H
#define EVENT_UUIDS_H
extern const uint8_t event_uuids_array[16][16];

#define EVENT_UUID_ARRAY ((uint8_t[16][16]){ \
{0x00, 0x00, 0x47, 0xea, 0xdc, 0xd8, 0x48, 0x5f, 0x94, 0xa2, 0xa9, 0xe2, 0xf0, 0x15, 0xca, 0x70, }, \
{0x01, 0x01, 0x39, 0xe6, 0x62, 0xb6, 0x42, 0x95, 0x93, 0xfc, 0x31, 0x82, 0x17, 0x99, 0x8e, 0xee, }, \
{0x74, 0x11, 0x2b, 0xad, 0x98, 0xa9, 0x44, 0x87, 0x97, 0xfc, 0x88, 0x82, 0x7d, 0x7b, 0xb3, 0x4a, }, \
{0xdd, 0x7f, 0x23, 0x15, 0xa0, 0xbb, 0x44, 0xc4, 0xac, 0x57, 0x69, 0x59, 0x48, 0xd4, 0x68, 0x47, }, \
{0xd, 0x56, 0xaf, 0xf, 0xa9, 0x8d, 0x46, 0xe9, 0x90, 0x2, 0x56, 0x9b, 0x9d, 0x1c, 0xb0, 0xe5, }, \
{0xe0, 0x8e, 0x2c, 0xeb, 0x52, 0x6f, 0x43, 0x17, 0xb1, 0x43, 0xb2, 0x3d, 0xb4, 0x27, 0x0, 0x3e, }, \
{0x7, 0x70, 0xb9, 0xe0, 0x4, 0x1f, 0x48, 0x25, 0xba, 0xcd, 0xd8, 0x9a, 0xef, 0x93, 0x4b, 0xfb, }, \
{0x38, 0xed, 0x90, 0x36, 0x2a, 0xab, 0x4b, 0x8f, 0x84, 0x9a, 0xa2, 0x6, 0x7d, 0x21, 0x2e, 0x8, }, \
{0x3b, 0x41, 0xea, 0xdb, 0x4f, 0x36, 0x48, 0xe2, 0x8c, 0x96, 0x35, 0x56, 0x36, 0x65, 0xf3, 0x5b, }, \
{0x76, 0x8a, 0x19, 0x1c, 0x74, 0x96, 0x4e, 0x26, 0xba, 0xe7, 0x7e, 0x8c, 0x48, 0x66, 0x21, 0xf5, }, \
{0xbe, 0xd4, 0xe, 0x0, 0x10, 0x9, 0x48, 0x6a, 0x9e, 0x61, 0xdf, 0xda, 0xdc, 0xc8, 0x6c, 0xb4, }, \
{0xc1, 0x76, 0x44, 0xf, 0x69, 0xd4, 0x4d, 0xcc, 0x83, 0xc1, 0x7, 0x85, 0xc6, 0x88, 0x47, 0xf2, }, \
{0x97, 0x14, 0xb6, 0x94, 0xaa, 0x3c, 0x45, 0x9c, 0xa3, 0x6f, 0x72, 0x2a, 0x3b, 0xa, 0x3f, 0xf, }, \
{0x14, 0x50, 0x34, 0xf9, 0x42, 0x71, 0x4e, 0xde, 0xbb, 0x6c, 0xdc, 0xe7, 0xf7, 0x41, 0xb2, 0x5d, }, \
{0x14, 0x50, 0x34, 0xf9, 0x42, 0x71, 0x4e, 0xde, 0xbb, 0x6c, 0xdc, 0xe7, 0xf7, 0x41, 0xb2, 0x5d, }, \
{0x14, 0x50, 0x34, 0xf9, 0x42, 0x71, 0x4e, 0xde, 0xbb, 0x6c, 0xdc, 0xe7, 0xf7, 0x41, 0xb2, 0x5d, }, \
/* {0x80, 0x4e, 0x9d, 0x96, 0x9a, 0xf8, 0x49, 0xc0, 0x88, 0xd7, 0xaa, 0x8a, 0x2d, 0xa2, 0x35, 0x4d, },\
{0x77, 0xf5, 0x2b, 0x73, 0x3b, 0xa3, 0x4a, 0xaf, 0xbc, 0xef, 0x60, 0x49, 0xe2, 0x48, 0x46, 0x2d, },\
{0xa4, 0x44, 0xc6, 0xfb, 0xc5, 0xb9, 0x4b, 0x1c, 0x94, 0x14, 0x19, 0xf1, 0x64, 0x9c, 0xc0, 0x17, },\
{0x4b, 0x95, 0x71, 0x94, 0x85, 0x6d, 0x4e, 0xf3, 0x9e, 0xd3, 0xac, 0x63, 0x22, 0x55, 0x9a, 0xea, }, \
{0x5d, 0xb6, 0x55, 0x7f, 0x27, 0xe3, 0x42, 0xae, 0xb8, 0x9b, 0x64, 0x62, 0x22, 0x4f, 0xcd, 0x48, },\
{0x8, 0x6c, 0x70, 0x37, 0x74, 0x8e, 0x40, 0xf7, 0x96, 0xc8, 0xaf, 0xfa, 0x47, 0xb, 0xd8, 0xcd, },\
{0xda, 0x9, 0xb1, 0x93, 0xa, 0x7c, 0x49, 0x8d, 0x89, 0x9c, 0x9d, 0xb4, 0x63, 0x80, 0xfc, 0xb0, },\
{0x8b, 0x36, 0xab, 0xa3, 0x7b, 0x5e, 0x45, 0x39, 0x80, 0xb3, 0x31, 0x8a, 0x31, 0xf0, 0x3f, 0x19, },\
{0xd, 0x47, 0x23, 0x9c, 0x16, 0xda, 0x45, 0xc, 0xbb, 0x21, 0x7d, 0x88, 0x83, 0x9, 0x1f, 0x34, },\
{0x64, 0xc0, 0x2, 0x16, 0x4c, 0x9b, 0x4e, 0x9c, 0xa8, 0x5a, 0x53, 0x2c, 0x18, 0x70, 0x50, 0x4, },\
{0x18, 0xcf, 0x31, 0x68, 0xdc, 0x3f, 0x40, 0x42, 0x8c, 0x70, 0x3c, 0x42, 0xae, 0xf6, 0x4f, 0x5d, },\
{0xe1, 0xe6, 0x79, 0xfe, 0x7f, 0x47, 0x4a, 0x2f, 0x8f, 0x20, 0x46, 0x9, 0x1f, 0xd0, 0x1a, 0x46, },\
{0xb7, 0x99, 0x3c, 0x2a, 0x48, 0xc6, 0x40, 0x34, 0xb0, 0x2, 0x59, 0xd7, 0x58, 0xaf, 0xe9, 0xce, },\
{0xae, 0x56, 0x4e, 0xf0, 0xee, 0x7d, 0x4b, 0x71, 0xb2, 0xc1, 0xbe, 0xe8, 0x23, 0x20, 0x1e, 0x9a, },\
{0x4b, 0xcb, 0x37, 0x78, 0x41, 0xe2, 0x45, 0xd, 0x84, 0x35, 0x1a, 0xb8, 0x81, 0x44, 0x52, 0x77, },\
{0xb0, 0x2, 0xdf, 0x4, 0x57, 0x80, 0x4e, 0x8d, 0xa6, 0x92, 0x2c, 0x80, 0xef, 0x5c, 0xb5, 0x2b, },\
{0x79, 0xe0, 0x3b, 0xea, 0x64, 0x3b, 0x40, 0x42, 0xbc, 0xf6, 0xb2, 0xd7, 0x3e, 0x97, 0xbd, 0x5, },\
{0x32, 0xa, 0xad, 0x6d, 0x1b, 0x9f, 0x49, 0xd7, 0x8d, 0x31, 0x57, 0xbe, 0x79, 0x9, 0x1a, 0xae, },\
{0xce, 0x61, 0x55, 0xe1, 0xe3, 0xc6, 0x49, 0x6e, 0x8e, 0x34, 0xaa, 0x8a, 0xfb, 0xfd, 0x26, 0x5, },\
{0x7a, 0x66, 0x3c, 0xac, 0x68, 0x9f, 0x41, 0xb6, 0xa6, 0x50, 0xc, 0xf2, 0xb1, 0x70, 0xc, 0x48, },\
{0xd6, 0x2b, 0x9c, 0x3a, 0x15, 0x5a, 0x4d, 0x98, 0xbf, 0xba, 0x43, 0x46, 0x79, 0xbe, 0xc2, 0xb, },\
{0x62, 0x83, 0xac, 0xeb, 0x13, 0x29, 0x4e, 0x3c, 0xb1, 0x79, 0x28, 0xc0, 0x0, 0x95, 0x2a, 0xaa, },\
{0xc7, 0x51, 0xf5, 0x2c, 0x5c, 0xd, 0x4f, 0x51, 0xa5, 0xf7, 0xcf, 0x3b, 0x1a, 0x7b, 0x37, 0x66, },\
{0xf, 0xce, 0x8d, 0xa8, 0xce, 0xa6, 0x4c, 0xbb, 0x8e, 0x2a, 0xc0, 0xe3, 0xc5, 0xd4, 0x1e, 0xda, },\
{0x28, 0x5f, 0xab, 0x10, 0x4a, 0xc1, 0x4b, 0xfa, 0x90, 0x99, 0xf3, 0x33, 0x44, 0xcb, 0xd5, 0xc7, },\
{0x36, 0x15, 0xaa, 0x48, 0x95, 0x58, 0x4b, 0xba, 0xb1, 0x99, 0xe7, 0xff, 0x23, 0x14, 0xc3, 0x94, },\
{0x8c, 0x68, 0x66, 0xb9, 0x2f, 0x55, 0x49, 0xc6, 0x94, 0x84, 0xbb, 0x6, 0xa3, 0x3a, 0x57, 0xd8, },\
{0x9, 0x47, 0x96, 0x7f, 0x3, 0x42, 0x4a, 0x3f, 0xa8, 0x93, 0x7f, 0xa9, 0xaa, 0xbe, 0x17, 0xb5, },\
{0x7, 0x6c, 0x2c, 0xda, 0xa3, 0x62, 0x42, 0x52, 0xa0, 0x9b, 0x2e, 0x64, 0x6c, 0x55, 0xee, 0xa1, },\
{0xd4, 0x9f, 0x9e, 0x2a, 0x1, 0xec, 0x43, 0x5a, 0x98, 0x42, 0x5d, 0x6, 0xc0, 0x2, 0x1c, 0x35, },\
{0xbe, 0xfe, 0x5e, 0x7a, 0x2b, 0x83, 0x46, 0x5d, 0xa2, 0xe5, 0x32, 0x16, 0xd2, 0x37, 0x3d, 0x8d, },\
{0xa9, 0x80, 0x1f, 0xb8, 0x5e, 0x90, 0x4a, 0xc5, 0xaa, 0xce, 0x89, 0x14, 0x5, 0x4c, 0x67, 0x55, },\
{0xa8, 0x15, 0xbc, 0xb, 0xd2, 0x99, 0x4f, 0xa8, 0xad, 0x78, 0x8f, 0x54, 0xf0, 0xdb, 0x68, 0xc6, },\
{0xc7, 0x95, 0x37, 0xa4, 0x3b, 0xde, 0x46, 0xf6, 0xac, 0xa1, 0xe0, 0xae, 0xb6, 0xe0, 0x87, 0x6b, },\
{0xce, 0x22, 0x43, 0xe0, 0xc8, 0x60, 0x46, 0x4c, 0xad, 0x23, 0xcd, 0x0, 0x40, 0x7c, 0x8c, 0x7a, },\
{0xcb, 0x99, 0xe4, 0x12, 0x1d, 0x93, 0x43, 0xbd, 0xb9, 0x3, 0x11, 0x11, 0x99, 0x82, 0x5a, 0xc, },\
{0xd, 0x17, 0xf2, 0x3c, 0x9d, 0x5c, 0x4a, 0xcf, 0x8b, 0x1a, 0xfa, 0x14, 0xa2, 0xbb, 0x44, 0xa1, },\
{0xc5, 0x83, 0x12, 0xb4, 0xed, 0xcc, 0x44, 0x8, 0x97, 0xa6, 0x26, 0xb3, 0x4e, 0x1f, 0xed, 0x5d, },\
{0xb3, 0x5f, 0x22, 0x20, 0x4e, 0xa4, 0x4f, 0xd1, 0xa5, 0xa8, 0x93, 0xc2, 0xa7, 0xea, 0x74, 0x83, },\
{0xcc, 0xde, 0xe8, 0x48, 0xaf, 0x77, 0x4f, 0x87, 0xb8, 0x84, 0x54, 0xf, 0x47, 0x2b, 0xa2, 0xc2, },\
{0x5, 0x48, 0xe8, 0xd3, 0xe3, 0x43, 0x40, 0x49, 0x86, 0x2e, 0x9d, 0x5f, 0x50, 0xc1, 0xaa, 0xd6, },\
{0x81, 0xd2, 0xfc, 0x15, 0xab, 0x1, 0x43, 0x73, 0xb1, 0x2c, 0x4e, 0x7f, 0x9d, 0xf6, 0x2e, 0xb, },\
{0x50, 0x13, 0xc1, 0x9c, 0xe7, 0x20, 0x4c, 0x87, 0x8e, 0xae, 0xac, 0x80, 0xd0, 0x35, 0x7, 0x7f, },\
{0xf, 0x8e, 0xd4, 0xcf, 0xec, 0xe1, 0x44, 0x6c, 0xa6, 0x88, 0xaf, 0xef, 0xf8, 0xcd, 0x44, 0x29, },\
{0xf2, 0x2f, 0xb, 0xee, 0x72, 0xf9, 0x4f, 0xd7, 0x97, 0x9, 0x7d, 0x6f, 0x1b, 0xd8, 0x37, 0xd5, },\
{0xc2, 0x51, 0x49, 0xb1, 0x28, 0xa, 0x4a, 0x1d, 0x8a, 0x98, 0xfc, 0x8b, 0x70, 0x9b, 0x60, 0x6f, },\
{0xa1, 0x72, 0xa6, 0x68, 0xb0, 0x6e, 0x4a, 0x59, 0xb9, 0xfb, 0x53, 0xbd, 0xac, 0xbb, 0x7c, 0x0, },\
{0x62, 0xbc, 0x98, 0x2b, 0x77, 0x37, 0x4f, 0xd5, 0xa6, 0x78, 0x8a, 0xd, 0xaf, 0x6a, 0x71, 0x5b, },\
{0xb0, 0x9f, 0x32, 0x54, 0x8e, 0x6d, 0x4e, 0x6e, 0x93, 0x3, 0x5e, 0x93, 0x33, 0xb4, 0x46, 0x44, },\
{0x51, 0x3a, 0xb1, 0x87, 0x4f, 0xa4, 0x4f, 0xfc, 0x9b, 0xa9, 0x28, 0x17, 0xa9, 0xda, 0xed, 0x31, },\
{0x82, 0x29, 0x96, 0xae, 0x62, 0x2f, 0x42, 0x2b, 0xb8, 0x37, 0x55, 0xa7, 0x4a, 0xe9, 0x3, 0xaa, },\
{0xdc, 0xc4, 0x36, 0xe1, 0x33, 0xe2, 0x40, 0x99, 0x9e, 0x66, 0xa, 0x42, 0x2f, 0x61, 0xaa, 0x9d, },\
{0x0, 0xab, 0xba, 0x9f, 0xab, 0xc, 0x4a, 0x17, 0x80, 0x7, 0xb7, 0x1c, 0xec, 0x1f, 0x4e, 0xd6, },\
{0x59, 0x94, 0x89, 0x12, 0xab, 0x41, 0x4e, 0xea, 0x8d, 0x88, 0x3b, 0xd8, 0xbe, 0xd2, 0x26, 0x8c, },\
{0x67, 0xd8, 0xa7, 0xaa, 0x89, 0xc8, 0x4f, 0x6e, 0xbc, 0x62, 0x5c, 0x2a, 0x73, 0xa8, 0xda, 0x74, },\
{0x95, 0x36, 0x98, 0xf5, 0xd6, 0x7a, 0x4b, 0x7e, 0xa1, 0xc5, 0xd2, 0x10, 0x18, 0x61, 0x1c, 0xed, },\
{0xe7, 0x35, 0x6d, 0xe4, 0x9c, 0x59, 0x40, 0xf2, 0x82, 0xe9, 0xb2, 0x4a, 0xdb, 0xc6, 0xdc, 0x1e, },\
{0x33, 0x7d, 0xfd, 0x89, 0x93, 0xe5, 0x4c, 0xbb, 0xa4, 0xc, 0xa2, 0xdb, 0x54, 0x20, 0xf2, 0xb6, },\
{0x3f, 0x9, 0xac, 0x12, 0xb5, 0xea, 0x4c, 0xd6, 0xb7, 0x3b, 0xf4, 0x3a, 0x53, 0x1, 0xca, 0xfd, },\
{0xc8, 0x86, 0xb9, 0x2a, 0x9b, 0xa0, 0x47, 0x73, 0x86, 0xd1, 0xde, 0xcd, 0x8d, 0x6e, 0x3e, 0xef, },\
{0xa, 0x8a, 0xf3, 0x17, 0xbe, 0x87, 0x42, 0x9, 0xaf, 0x8a, 0x72, 0xa1, 0xbb, 0x14, 0x87, 0xc9, },\
{0x7b, 0xa3, 0x51, 0xd7, 0x69, 0xd1, 0x4e, 0xef, 0xa6, 0x63, 0xf6, 0x4e, 0x2e, 0x76, 0x37, 0x92, },\
{0xda, 0xc1, 0x4d, 0xab, 0x57, 0xe9, 0x4a, 0xeb, 0x92, 0x0, 0xd, 0xea, 0xed, 0xeb, 0xa, 0x8d, },\
{0xef, 0x6, 0x77, 0xef, 0x13, 0x16, 0x43, 0x5b, 0x92, 0x2b, 0x53, 0xdc, 0x67, 0xcb, 0xf9, 0x39, },\
{0xb0, 0x78, 0x7c, 0x26, 0xd6, 0x3a, 0x44, 0xf8, 0x82, 0xb3, 0xd1, 0xa1, 0x2f, 0x45, 0xbe, 0x27, },\
{0xa9, 0x0, 0xcd, 0x5c, 0xa6, 0xfc, 0x42, 0xc3, 0x89, 0x6c, 0x38, 0x40, 0xc2, 0x33, 0x5d, 0x88, },\
{0x6a, 0xbf, 0xfc, 0xb4, 0xcb, 0xbb, 0x4e, 0xda, 0x98, 0xe6, 0x8, 0xf0, 0x61, 0x8a, 0x7a, 0x38, },\
{0xb8, 0x8e, 0xa2, 0x9f, 0xa, 0xff, 0x41, 0xaf, 0x9f, 0xdf, 0x82, 0x4, 0xe4, 0x5f, 0x82, 0x24, },\
{0x16, 0x24, 0xf8, 0xfc, 0x4a, 0xc0, 0x41, 0x71, 0xa5, 0x40, 0xf4, 0xe2, 0x46, 0xa3, 0xf0, 0x4c, },\
{0xae, 0xac, 0x1b, 0x12, 0xc5, 0x5e, 0x41, 0xc3, 0xa8, 0x51, 0xb6, 0xe, 0x6a, 0x6b, 0x8e, 0x73, },\
{0x8f, 0xef, 0xe1, 0x8, 0xe6, 0x64, 0x4d, 0x14, 0xac, 0x85, 0xf4, 0xcb, 0x13, 0xcd, 0x46, 0x78, },\
{0xf2, 0xd, 0x9, 0xeb, 0x97, 0x84, 0x40, 0x7c, 0x80, 0xf7, 0xb7, 0xae, 0xb0, 0x88, 0xf, 0xfb, },\
{0x2b, 0x42, 0xfd, 0x60, 0x78, 0xfb, 0x4a, 0xf2, 0x91, 0x13, 0xd9, 0xc3, 0x47, 0xbe, 0xfe, 0x51, },\
{0x8a, 0x54, 0x31, 0x1f, 0x77, 0x26, 0x40, 0x51, 0xb7, 0xd9, 0xd4, 0x87, 0xd6, 0xc5, 0x7d, 0xc2, },\
{0xa1, 0x9, 0x4e, 0x40, 0xf, 0xde, 0x44, 0x85, 0xbf, 0xd8, 0x7e, 0xe6, 0x9c, 0x38, 0x51, 0x27, },\
{0xce, 0xac, 0xb7, 0x5f, 0x36, 0xc4, 0x4e, 0x2e, 0x98, 0x3b, 0x8, 0x38, 0xad, 0xc2, 0x34, 0xa3, },\
{0xb9, 0xae, 0x35, 0x64, 0x60, 0xbe, 0x43, 0xfa, 0x97, 0x95, 0x1a, 0xcc, 0xc1, 0x4a, 0xe1, 0x43, },\
{0x10, 0x90, 0xd9, 0xf9, 0x92, 0x45, 0x48, 0xa1, 0x9d, 0x31, 0x5, 0x39, 0x6f, 0xef, 0x3, 0xff, },\
{0x5e, 0x5f, 0xf6, 0xaf, 0x91, 0xa4, 0x43, 0x67, 0x8c, 0x99, 0x32, 0xeb, 0x90, 0x3, 0x96, 0x79, },\
{0x9f, 0xb4, 0xd, 0x6a, 0x5f, 0xcf, 0x4e, 0x42, 0xa5, 0x92, 0xf5, 0x71, 0x61, 0x11, 0xb2, 0xb7, },\
{0x1d, 0x68, 0xc9, 0xfe, 0x4d, 0xd9, 0x40, 0xe8, 0xb3, 0xe0, 0x6b, 0x5f, 0xaf, 0x67, 0x9, 0xdb, },\
{0x11, 0xdc, 0xc8, 0xcf, 0xe1, 0x65, 0x4d, 0x82, 0xbe, 0x45, 0x25, 0x4e, 0x2c, 0x58, 0x8d, 0x5, },\
{0xa5, 0x7f, 0x16, 0x0, 0x10, 0xce, 0x48, 0xdc, 0x98, 0x91, 0xa7, 0xb0, 0x6f, 0x78, 0xda, 0x8d, },\
{0x60, 0x64, 0x28, 0x66, 0x2c, 0xe5, 0x46, 0x75, 0xaa, 0xde, 0x6d, 0xd6, 0x8, 0xac, 0x91, 0xb2, },\
{0x92, 0xf8, 0xf7, 0x66, 0xe, 0xb6, 0x49, 0x79, 0x9d, 0x8e, 0x60, 0xa2, 0x50, 0x9b, 0x69, 0xbb, },\
{0xe3, 0x73, 0xbd, 0x50, 0xde, 0x71, 0x43, 0xa9, 0x94, 0xa, 0x87, 0x42, 0x12, 0x6, 0xa6, 0xc7, }\ 
*/ \
})

#endif
