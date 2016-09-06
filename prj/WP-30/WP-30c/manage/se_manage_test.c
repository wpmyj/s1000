/*
 * =====================================================================================
 *
 *       Filename:  se_manage_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  8/2/2016 5:06:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yehf (), yehf@itep.com.cn
 *        Company:  START
 *
 * =====================================================================================
 */

#include "wp30_ctrl.h"

#ifdef CFG_SE_MANAGE
#ifdef DEBUG_Dx 
uchar gSeCertTable[] = {
#if 0
    // SN:START123456 特权包 不要求判断授权号
0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x85, 0x87, 0x3f, 0x4a, 0xba, 0xa7, 0x83,
0x74, 0x5d, 0xe5, 0xa8, 0xe8, 0xc8, 0xca, 0xbf, 0x7e, 0x52, 0xfa, 0x66, 0x84, 0x52, 0x5e, 0x50,
0x8d, 0xeb, 0xbc, 0x78, 0x97, 0xc1, 0xd4, 0x8a, 0x95, 0xf9, 0x04, 0xd1, 0x05, 0xe5, 0xfc, 0x35,
0x03, 0x66, 0x22, 0x56, 0x04, 0x47, 0xde, 0xf5, 0x42, 0x41, 0x33, 0x5f, 0x53, 0x45, 0x43, 0x45,
0x52, 0x54, 0x50, 0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x52, 0x54, 0x20, 0x49, 0x46, 0x54, 0x20, 0x43, 0x41,
0x00, 0x00, 0x00, 0x00, 0x32, 0x30, 0x31, 0x36, 0x30, 0x37, 0x32, 0x31, 0x31, 0x34, 0x34, 0x39,
0xcc, 0xcc, 0xcc, 0xcc, 0x32, 0x30, 0x32, 0x36, 0x30, 0x37, 0x32, 0x31, 0x31, 0x34, 0x34, 0x39,
0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0xc4, 0x74, 0x2e, 0x98, 0x91, 0x79, 0x39,
0xfb, 0x6d, 0xae, 0xb8, 0x0b, 0xb2, 0x3c, 0xd3, 0x97, 0xea, 0xe5, 0x93, 0x9c, 0x5b, 0xe7, 0xce,
0xf5, 0xe4, 0x47, 0x83, 0x7d, 0xea, 0x32, 0x7e, 0xb7, 0x9e, 0x4e, 0x45, 0xeb, 0xee, 0xe2, 0x59,
0x27, 0xad, 0x8d, 0x01, 0x3d, 0xae, 0x5a, 0x46, 0xbc, 0x0a, 0x32, 0xf0, 0xc7, 0x2b, 0xe9, 0xd9,
0x9e, 0xb2, 0x5b, 0xb5, 0xbc, 0xd6, 0xf4, 0x36, 0x6c, 0x44, 0x90, 0xe1, 0xd3, 0x49, 0x22, 0xe3,
0xe7, 0x4d, 0x2c, 0xcb, 0xc9, 0x94, 0x99, 0xc9, 0xd5, 0xbe, 0x6c, 0xd1, 0x1b, 0x09, 0xcc, 0x05,
0xd2, 0x1b, 0xd1, 0xc2, 0x7b, 0xaa, 0x6c, 0x1f, 0x48, 0x25, 0x1e, 0x23, 0x89, 0x3d, 0x5f, 0xbe,
0xe9, 0x8d, 0x9f, 0xa4, 0x00, 0x8a, 0x57, 0x01, 0xf8, 0xc5, 0x4d, 0xf9, 0x7a, 0x09, 0x90, 0x19,
0xc0, 0xaf, 0x08, 0xcf, 0x30, 0xd8, 0x77, 0xba, 0xa1, 0x21, 0xc0, 0xa2, 0x24, 0x05, 0x36, 0xfd,
0x1f, 0xf8, 0x28, 0xa2, 0x90, 0xe2, 0x45, 0x40, 0xaf, 0x36, 0x3d, 0x94, 0x3a, 0x6d, 0x5f, 0x19,
0xc0, 0x25, 0xc9, 0x21, 0x81, 0x13, 0xe6, 0x94, 0xbb, 0xe5, 0x54, 0x23, 0x09, 0xe2, 0x84, 0x4e,
0x4b, 0x7c, 0x7f, 0x26, 0xf2, 0x08, 0x91, 0xab, 0xdc, 0xa7, 0x4d, 0xff, 0x76, 0x07, 0xbd, 0x5c,
0xed, 0x03, 0x73, 0x1e, 0x69, 0xd4, 0xdd, 0x3c, 0x43, 0xbd, 0x1d, 0x84, 0x0e, 0xb5, 0x2b, 0x41,
0x56, 0x33, 0x9b, 0x22, 0x22, 0x6b, 0x21, 0x38, 0x9b, 0x4f, 0x16, 0x13, 0x1b, 0xbf, 0xb5, 0x3d,
0xad, 0x3f, 0xa2, 0xc6, 0x8e, 0xed, 0x0e, 0x1f, 0x33, 0xf4, 0x6a, 0x9d, 0x83, 0x10, 0xa6, 0xe5,
0x1a, 0x42, 0xe7, 0x4d, 0x78, 0x53, 0x4e, 0x13, 0xf6, 0x09, 0xf5, 0x8e, 0x44, 0x6b, 0x6f, 0x6f,
0x54, 0x54, 0x4c, 0x6b, 0xc3, 0xad, 0x7f, 0xb7, 0x43, 0x48, 0x45, 0x43, 0x4b, 0x3a, 0x52, 0x53,
0x41, 0x4e, 0x32, 0x35, 0x36, 0x00, 0x00, 0x00
#endif
#if 0
    // SN:START123456 降级包 授权号:无 
0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x30, 0xb2, 0x2e, 0xdd, 0x0d, 0x11, 0xf0,
0x71, 0x9a, 0xb9, 0x60, 0xfd, 0x58, 0xd3, 0x1f, 0x35, 0x40, 0x19, 0xb5, 0x06, 0xb5, 0xea, 0xd4,
0x1c, 0x3a, 0xa8, 0xdf, 0x04, 0x3d, 0xea, 0xa3, 0x3d, 0x1b, 0xda, 0xf0, 0xf2, 0xdf, 0x6c, 0xce,
0xeb, 0xb2, 0xa3, 0x5c, 0xf9, 0x61, 0x4d, 0x94, 0x42, 0x41, 0x33, 0x5f, 0x53, 0x45, 0x43, 0x45,
0x52, 0x54, 0x50, 0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x52, 0x54, 0x20, 0x49, 0x46, 0x54, 0x20, 0x43, 0x41,
0x00, 0x00, 0x00, 0x00, 0x32, 0x30, 0x31, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x35, 0x31, 0x33,
0xcc, 0xcc, 0xcc, 0xcc, 0x32, 0x30, 0x32, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x35, 0x31, 0x33,
0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0xd2, 0x6d, 0xe2, 0x6c, 0x0f, 0xd1, 0x97,
0xe5, 0xc5, 0x4b, 0x21, 0xf4, 0x57, 0x69, 0x5c, 0x5c, 0x51, 0x64, 0x62, 0xa5, 0xd8, 0xdf, 0xb0,
0x3a, 0xfc, 0x23, 0x99, 0x0a, 0xbf, 0x78, 0xa8, 0x7a, 0xf6, 0xe7, 0x9f, 0x44, 0x3a, 0x8d, 0x27,
0x47, 0xbd, 0x3c, 0x5c, 0x3d, 0x72, 0xe7, 0xc6, 0xee, 0xe5, 0x7d, 0x2e, 0x5e, 0x0f, 0xe7, 0x9f,
0xdd, 0xc1, 0xee, 0x05, 0xf0, 0x7d, 0x36, 0xab, 0xe6, 0x75, 0xbd, 0x4c, 0xa4, 0xb8, 0xd0, 0x18,
0x08, 0x9e, 0x56, 0x82, 0x46, 0xf3, 0xd4, 0x6e, 0x10, 0x8a, 0x9c, 0x3c, 0x20, 0xc9, 0x1f, 0xac,
0xe4, 0x13, 0x09, 0x92, 0xfe, 0x6d, 0x07, 0x35, 0x7b, 0xf7, 0xb2, 0xc1, 0x9b, 0x8f, 0xe9, 0x78,
0x06, 0x52, 0x79, 0x17, 0x45, 0x3b, 0x8a, 0xaf, 0x59, 0x40, 0x67, 0x2d, 0x23, 0x5c, 0x61, 0xd2,
0x97, 0xc3, 0x40, 0x13, 0xae, 0xea, 0x77, 0xb6, 0xaf, 0xff, 0x2b, 0xfa, 0x74, 0x4a, 0x20, 0x22,
0xad, 0xee, 0x39, 0x1e, 0xf4, 0xbc, 0x9c, 0xe0, 0xb6, 0x9a, 0xa6, 0x48, 0xfe, 0x3f, 0xfa, 0xd9,
0x5e, 0x1c, 0x1a, 0x99, 0x50, 0x86, 0x23, 0xef, 0x15, 0xd9, 0xe9, 0xd3, 0x22, 0x51, 0x91, 0x05,
0x9b, 0x63, 0xa1, 0xb9, 0xf5, 0x66, 0x67, 0xab, 0x98, 0x75, 0xe7, 0xab, 0x49, 0x64, 0x3e, 0x49,
0x8c, 0x1d, 0xa9, 0x87, 0x3c, 0x1e, 0x61, 0x96, 0xa4, 0x0f, 0x3b, 0x62, 0x2a, 0xd7, 0xb9, 0xde,
0xef, 0x00, 0x18, 0x35, 0xe2, 0x36, 0xc9, 0x03, 0x50, 0x8f, 0x47, 0x09, 0xdc, 0x5e, 0x28, 0xd8,
0xf4, 0xde, 0x02, 0x80, 0x6c, 0x7b, 0x16, 0x11, 0xb1, 0x83, 0xbf, 0x9e, 0x99, 0x86, 0xe3, 0x16,
0x93, 0x3c, 0x89, 0x92, 0x95, 0xbe, 0x71, 0xef, 0xad, 0xa9, 0xa3, 0x9d, 0x75, 0x41, 0x2c, 0xcd,
0x89, 0x56, 0x71, 0xec, 0x3a, 0x00, 0xc8, 0xb2, 0x43, 0x48, 0x45, 0x43, 0x4b, 0x3a, 0x52, 0x53,
0x41, 0x4e, 0x32, 0x35, 0x36, 0x00, 0x00, 0x00
#endif
#if 0
    // ID:300000535441525430160728155002000000FC1C 防拆解除包 授权号:无 
0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x4a, 0x00, 0x40, 0x68, 0x1b, 0x53, 0x02,
0xca, 0x03, 0xc2, 0xe9, 0x8b, 0x17, 0xf4, 0x4c, 0x86, 0x10, 0x70, 0x1d, 0x1e, 0xc4, 0x8c, 0x1a,
0x1e, 0xb0, 0x90, 0xe3, 0x46, 0x91, 0x91, 0x64, 0xde, 0x97, 0x16, 0xbe, 0xb2, 0x6f, 0xe4, 0x8b,
0x08, 0x9e, 0x8b, 0x41, 0x1e, 0x8e, 0xda, 0x1c, 0x42, 0x41, 0x33, 0x5f, 0x53, 0x45, 0x43, 0x45,
0x52, 0x54, 0x50, 0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x52, 0x54, 0x20, 0x49, 0x46, 0x54, 0x20, 0x43, 0x41,
0x00, 0x00, 0x00, 0x00, 0x32, 0x30, 0x31, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x36, 0x32, 0x30,
0xcc, 0xcc, 0xcc, 0xcc, 0x32, 0x30, 0x32, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x36, 0x32, 0x30,
0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xe7, 0x6c, 0xb1, 0xaa, 0x63, 0x8f, 0x09,
0x16, 0x75, 0x4b, 0x3b, 0xaf, 0xa3, 0x03, 0xb6, 0x9c, 0xbf, 0x95, 0x38, 0x93, 0xe3, 0x21, 0x97,
0x09, 0xc9, 0xbc, 0x2b, 0x84, 0xbf, 0xef, 0x14, 0x5d, 0xc3, 0x14, 0x26, 0x36, 0x66, 0x71, 0x1f,
0x93, 0x22, 0xa1, 0xc6, 0xfa, 0x19, 0xab, 0x65, 0x82, 0x5e, 0x24, 0x4f, 0xaa, 0x7d, 0x60, 0xf6,
0x9c, 0xe3, 0x32, 0xf1, 0x21, 0x8f, 0x46, 0x9b, 0xa2, 0x54, 0x54, 0xd3, 0x1e, 0x3c, 0x3e, 0x8d,
0x51, 0x62, 0x12, 0xec, 0x4e, 0xaf, 0x38, 0xb4, 0xa6, 0xba, 0x2e, 0x4d, 0x0d, 0x1d, 0xf1, 0xc1,
0x16, 0x36, 0x91, 0xdd, 0x9d, 0x2d, 0x2d, 0xb7, 0xb9, 0xa4, 0xd0, 0x83, 0x8a, 0x3a, 0x6c, 0x6f,
0x1c, 0x3f, 0x46, 0x94, 0x30, 0x17, 0x2a, 0xb5, 0x9f, 0xc9, 0x19, 0xab, 0x85, 0xc3, 0x16, 0xd5,
0x31, 0x02, 0x98, 0x4c, 0x08, 0xeb, 0x85, 0x2a, 0x6d, 0xec, 0x23, 0x6c, 0x55, 0x33, 0x48, 0x50,
0x1f, 0xcc, 0x9f, 0x1f, 0x74, 0x1e, 0xdb, 0xd6, 0xee, 0xc5, 0xcc, 0xd0, 0xde, 0x7c, 0x73, 0x18,
0x32, 0x13, 0x1f, 0x29, 0x6b, 0x1f, 0x2c, 0xab, 0xba, 0x5b, 0x49, 0xc2, 0xb1, 0xc0, 0x0e, 0x62,
0x21, 0x39, 0x57, 0xeb, 0x24, 0xe0, 0xca, 0x13, 0x59, 0x9f, 0x6a, 0xf6, 0x63, 0x47, 0x85, 0xe8,
0x2d, 0xec, 0xf3, 0xb1, 0xa3, 0x6f, 0x6f, 0x46, 0x86, 0xf9, 0x17, 0xb6, 0x21, 0x5d, 0x47, 0xd0,
0x17, 0x92, 0xf2, 0x53, 0x69, 0x00, 0xe0, 0x7f, 0x1a, 0xb6, 0x07, 0xce, 0x7d, 0x61, 0xe9, 0xdb,
0xb0, 0x06, 0x51, 0xd9, 0x75, 0x10, 0xe4, 0x2c, 0x75, 0x2c, 0xb7, 0x9d, 0xa2, 0x88, 0x76, 0xe6,
0x01, 0xe8, 0xa6, 0xce, 0xb6, 0xc1, 0x41, 0x76, 0x11, 0x36, 0x49, 0xfd, 0x94, 0x40, 0x45, 0xb4,
0x4c, 0x91, 0x6f, 0xcd, 0xa9, 0xcd, 0x3e, 0xd2, 0x43, 0x48, 0x45, 0x43, 0x4b, 0x3a, 0x52, 0x53,
0x41, 0x4e, 0x32, 0x35, 0x36, 0x00, 0x00, 0x00
#endif
#if 2
    // ID:300000535441525430160728155002000000FC1C 防拆解除包 授权号:1617281731040947
0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x81, 0x5b, 0x1c, 0x4f, 0xfe, 0x58, 0xe6,
0xbf, 0x2f, 0x47, 0xb2, 0x94, 0x3a, 0xd3, 0x2e, 0xd2, 0x65, 0xbb, 0x31, 0x49, 0x88, 0x5b, 0x93,
0x77, 0x1f, 0x38, 0x06, 0xdf, 0x2b, 0x91, 0xa4, 0xa2, 0xed, 0xd7, 0x76, 0x8d, 0x3e, 0xd5, 0xee,
0x73, 0x68, 0x3d, 0x6e, 0x7f, 0x1f, 0x55, 0x5a, 0x42, 0x41, 0x33, 0x5f, 0x53, 0x45, 0x43, 0x45,
0x52, 0x54, 0x50, 0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x52, 0x54, 0x20, 0x49, 0x46, 0x54, 0x20, 0x43, 0x41,
0x00, 0x00, 0x00, 0x00, 0x32, 0x30, 0x31, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x37, 0x33, 0x33,
0xcc, 0xcc, 0xcc, 0xcc, 0x32, 0x30, 0x32, 0x36, 0x30, 0x37, 0x32, 0x38, 0x31, 0x37, 0x33, 0x33,
0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xc9, 0x4b, 0xbb, 0xee, 0x54, 0x06, 0xe5,
0x6c, 0x8b, 0x26, 0x1f, 0xa3, 0x60, 0x01, 0x14, 0x04, 0xaa, 0x29, 0xed, 0x0c, 0x3b, 0xcd, 0x63,
0x5e, 0xae, 0x11, 0xdc, 0x06, 0x88, 0x0e, 0x09, 0xa9, 0xb2, 0x29, 0x8d, 0x95, 0x35, 0xc0, 0x5a,
0x8c, 0x22, 0x39, 0x29, 0x40, 0xe3, 0x57, 0x34, 0xeb, 0x33, 0x78, 0x96, 0xa9, 0xf8, 0x6a, 0xec,
0x37, 0xad, 0xa5, 0xc6, 0x9b, 0xbd, 0x40, 0xe1, 0x64, 0x27, 0x5e, 0x0f, 0x93, 0x0f, 0x81, 0x77,
0xfb, 0xf6, 0x94, 0x69, 0x36, 0x18, 0x0a, 0xfa, 0x92, 0x25, 0x8c, 0x2d, 0x0b, 0xdf, 0x68, 0xd5,
0x86, 0x23, 0xc6, 0xb8, 0xbc, 0x9b, 0x8c, 0x6d, 0xe9, 0x57, 0x6a, 0x06, 0x81, 0xe2, 0x82, 0xf3,
0x3a, 0x42, 0xa8, 0x29, 0xeb, 0xac, 0x2d, 0xb7, 0x20, 0x6d, 0xeb, 0x03, 0xce, 0x02, 0xdb, 0x53,
0xdf, 0xc8, 0x69, 0x82, 0x1e, 0x9f, 0xb6, 0xde, 0xb5, 0xef, 0x7b, 0xa3, 0xb1, 0xba, 0x2a, 0x0e,
0x1a, 0xf5, 0x85, 0x2d, 0xe4, 0xc3, 0x93, 0x69, 0x18, 0xaa, 0x53, 0x30, 0xbc, 0x65, 0x13, 0xa8,
0x99, 0x67, 0x03, 0x87, 0xaa, 0x9f, 0x24, 0x01, 0x42, 0x28, 0x35, 0xe8, 0x95, 0x29, 0xc0, 0xbe,
0x0d, 0x7d, 0x80, 0xd1, 0x33, 0xeb, 0x33, 0xff, 0x1a, 0xd9, 0x55, 0x2a, 0x40, 0x12, 0x88, 0x96,
0xe1, 0xb3, 0xa3, 0x28, 0xaf, 0xac, 0x68, 0xd5, 0xcf, 0xa2, 0x0f, 0x6e, 0xe9, 0x84, 0x3a, 0xfb,
0xc7, 0x01, 0xa1, 0x1b, 0xfa, 0xd1, 0x7c, 0x09, 0xc2, 0xd9, 0x25, 0x26, 0xca, 0x34, 0xfa, 0xd7,
0x66, 0x9d, 0xa4, 0xb5, 0x6a, 0xea, 0x52, 0xc5, 0x24, 0xd8, 0x0d, 0x3c, 0x8b, 0xcb, 0x01, 0x86,
0x73, 0x60, 0x00, 0x4e, 0x7d, 0x87, 0xc2, 0x12, 0x10, 0xab, 0xee, 0xf8, 0x13, 0x8d, 0x72, 0x14,
0x30, 0xae, 0xec, 0x72, 0x2b, 0x88, 0x2c, 0xa5, 0x43, 0x48, 0x45, 0x43, 0x4b, 0x3a, 0x52, 0x53,
0x41, 0x4e, 0x32, 0x35, 0x36, 0x00, 0x00, 0x00
#endif
};

/* 
 * test_se_cert - [GENERIC] 
 * @ 
 */
int test_se_cert (int mode)
{
    int ret=0;
    uint len=0;
    uchar buf[256];
    ret = se_cert_authenticate(sizeof(gSeCertTable),gSeCertTable,&len,buf);
    TRACE("\r\n ret:%d",ret);
    TRACE_BUF("输出",buf,len);
    return ret;
}		/* -----  end of function test_se_cert  ----- */
#else
int test_se_cert (int mode)
{
    return 0;
}
#endif

#endif
