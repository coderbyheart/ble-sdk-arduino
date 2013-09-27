/* Copyright (c) 2012 Nordic Semiconductor. All Rights Reserved.
*
* The information contained herein is property of Nordic Semiconductor ASA.
* Terms and conditions of usage are described in detail in NORDIC
* SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
*
* Licensees are granted free, non-transferable use of the information. NO
* WARRANTY of ANY KIND is provided. This heading must NOT be removed from
* the file.
*/

/**
* This file is autogenerated by nRFgo Studio 1.14.1.2369  
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h" 
#include "aci.h"
#define PIPE_GAP_DEVICE_NAME_SET 1
#define PIPE_HEART_RATE_HEART_RATE_MEASUREMENT_TX 2
#define PIPE_HEART_RATE_HEART_RATE_MEASUREMENT_SET 3
#define PIPE_HID_SERVICE_HID_REPORT1_TX 4
#define PIPE_HID_SERVICE_HID_REPORT1_SET 5
#define PIPE_HID_SERVICE_HID_PROTOCOL_MODE_RX 6
#define PIPE_HID_SERVICE_HID_PROTOCOL_MODE_SET 7
#define PIPE_HID_SERVICE_HID_CONTROL_POINT_RX 8
#define PIPE_HID_SERVICE_HID_REPORT_OUTPUT_RX 9
#define PIPE_HID_SERVICE_HID_REPORT_OUTPUT_RX_ACK_AUTO 10
#define PIPE_HID_SERVICE_BOOT_KEYBOARD_INPUT_REPORT_TX 11
#define PIPE_HID_SERVICE_BOOT_KEYBOARD_OUTPUT_REPORT_RX 12
#define PIPE_HID_SERVICE_BOOT_KEYBOARD_OUTPUT_REPORT_RX_ACK_AUTO 13
#define PIPE_HID_SERVICE_HID_REPORT2_TX 14
#define PIPE_HID_SERVICE_HID_REPORT2_SET 15
#define PIPE_HID_SERVICE_HID_REPORT3_TX 16
#define PIPE_HID_SERVICE_HID_REPORT3_SET 17
#define PIPE_HID_SERVICE_HID_REPORT4_TX 18
#define PIPE_HID_SERVICE_HID_REPORT4_SET 19
#define PIPE_HID_SERVICE_HID_OUTPUT_REPORT_BV_RX 20
#define PIPE_HID_SERVICE_HID_OUTPUT_REPORT_BV_RX_ACK_AUTO 21
#define PIPE_SCAN_PARAMETERS_SERVICE_SCAN_INTERVAL_WINDOW_RX 22
#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET 23
#define PIPE_BATTERY_BATTERY_LEVEL_TX 24
#define PIPE_BATTERY_BATTERY_LEVEL_SET 25

#define NUMBER_OF_PIPES 25

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
}

#define GAP_PPCP_MAX_CONN_INT 0xc /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xa /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific maximum*/
#define GAP_PPCP_SLAVE_LATENCY 20
#define GAP_PPCP_CONN_TIMEOUT 0xfa /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 56
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x41,0xd7,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x3a,0x68,0x00,0x00,0x02,0x00,0x0f,0x00,0x19,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x01,0x12,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x40,0x12,0x00,0x00,0x00,0x00,0x03,0x90,0x01,0x64,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0x02,0xff,0x02,0x58,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x01,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x0e,0x03,0x00,0x00,0x2a,0x04,0x34,0x0d,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x0d,0x00,0x03,0x2a,0x00,0x01,0x52,0x65,0x6d,0x6f,0x74,0x65,0x5f,0x43,0x75,0x73,\
            0x74,0x6f,0x6d,0x04,0x04,0x05,0x05,0x00,0x04,0x28,0x03,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x02,0x05,0x00,0x01,0x2a,0x06,0x04,0x03,0x02,0x00,0x05,0x2a,0x01,0x01,0xc0,0x03,\
            0x04,0x04,0x05,0x05,0x00,0x06,0x28,0x03,0x01,0x02,0x07,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x04,0x2a,0x06,0x04,0x09,0x08,0x00,0x07,0x2a,0x04,0x01,0x0a,0x00,0x0c,0x00,0x14,\
            0x00,0xfa,0x00,0x04,0x04,0x02,0x02,0x00,0x08,0x28,0x00,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x01,0x18,0x04,0x04,0x10,0x10,0x00,0x09,0x28,0x00,0x01,0xf6,0xef,0x23,0x94,0xae,\
            0x45,0xa9,0xa2,0x1b,0x4e,0xa0,0xce,0x0d,0x18,0x4e,0xab,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x04,0x13,0x13,0x00,0x0a,0x28,0x03,0x01,0x12,0x0b,0x00,0xf6,0xef,0x23,0x94,0xae,\
            0x45,0xa9,0xa2,0x1b,0x4e,0xa0,0xce,0x37,0x2a,0x4e,0xab,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x0c,0x13,0x01,0x00,0x0b,0x2a,0x37,0x02,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x34,0x03,0x02,0x00,0x0c,0x29,0x02,0x01,0x00,0x00,0x06,0x0c,0x03,0x02,0x00,0x0d,\
            0x29,0x08,0x01,0x05,0x01,0x04,0x04,0x02,0x02,0x00,0x0e,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x00,0x01,0x12,0x18,0x04,0x04,0x04,0x04,0x00,0x0f,0x28,0x02,0x01,0x09,0x00,0x0d,\
            0x00,0x04,0x04,0x05,0x05,0x00,0x10,0x28,0x03,0x01,0x12,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x00,0x4d,0x2a,0x14,0x0c,0x08,0x00,0x00,0x11,0x2a,0x4d,0x01,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x46,0x34,0x03,0x02,0x00,0x12,0x29,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x01,0x00,0x00,0x06,0x0c,0x03,0x02,0x00,0x13,0x29,0x08,0x01,0x01,0x01,0x04,0x04,\
            0x05,0x05,0x00,0x14,0x28,0x03,0x01,0x02,0x15,0x00,0x4a,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x06,0x0c,0x05,0x04,0x00,0x15,0x2a,0x4a,0x01,0x11,0x01,0x00,0x03,0x04,0x04,0x05,\
            0x05,0x00,0x16,0x28,0x03,0x01,0x06,0x17,0x00,0x4e,0x2a,0x46,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0x3c,0x02,0x01,0x00,0x17,0x2a,0x4e,0x01,0x01,0x04,0x04,0x05,0x05,0x00,0x18,0x28,\
            0x03,0x01,0x04,0x19,0x00,0x4c,0x2a,0x46,0x30,0x02,0x01,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x19,0x2a,0x4c,0x01,0x00,0x04,0x04,0x05,0x05,0x00,0x1a,0x28,0x03,0x01,0x02,0x1b,\
            0x00,0x4b,0x2a,0x06,0x0c,0xe3,0xe2,0x00,0x1b,0x2a,0x4b,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x05,0x01,0x09,0x06,0xa1,0x01,0x85,0x01,0x05,0x07,0x19,0xe0,0x29,0xe7,0x15,0x00,\
            0x25,0x01,0x75,0x01,0x95,0x08,0x81,0x02,0x95,0x01,0x75,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x81,0x01,0x95,0x05,0x75,0x01,0x05,0x08,0x19,0x01,0x29,0x05,0x91,0x02,0x95,0x01,\
            0x75,0x03,0x91,0x01,0x95,0x06,0x75,0x08,0x15,0x00,0x25,0x65,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xc0,0x05,0x07,0x19,0x00,0x29,0x65,0x81,0x00,0xc0,0x05,0x01,0x09,0x02,0xa1,0x01,0x85,\
            0x02,0x09,0x01,0xa1,0x00,0x95,0x05,0x75,0x01,0x05,0x09,0x19,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xdc,0x01,0x29,0x05,0x15,0x00,0x25,0x01,0x81,0x02,0x95,0x01,0x75,0x03,0x81,0x01,0x75,\
            0x08,0x95,0x01,0x05,0x01,0x09,0x38,0x15,0x81,0x25,0x7f,0x81,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xf8,0x06,0x05,0x0c,0x0a,0x38,0x02,0x95,0x01,0x81,0x06,0xc0,0x85,0x03,0x09,0x01,0xa1,\
            0x00,0x75,0x0c,0x95,0x02,0x05,0x01,0x09,0x30,0x09,0x31,0x16,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x14,0x01,0xf8,0x26,0xff,0x07,0x81,0x06,0xc0,0xc0,0x05,0x0c,0x09,0x01,0xa1,0x01,0x85,\
            0x04,0x15,0x00,0x25,0x01,0x75,0x01,0x95,0x01,0x09,0xcd,0x81,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x30,0x06,0x09,0xb7,0x81,0x06,0x09,0xb5,0x81,0x06,0x09,0xb6,0x81,0x06,0x09,0xea,0x81,\
            0x06,0x09,0xe9,0x81,0x06,0x0a,0x25,0x02,0x81,0x06,0x0a,0x24,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x4c,0x02,0x81,0x06,0xc0,0x06,0x00,0xff,0x09,0x00,0xa1,0x01,0x85,0x05,0x15,0x00,0x25,\
            0xff,0x75,0x08,0x95,0x01,0x09,0x00,0x81,0x02,0x09,0x00,0x91,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x68,0x02,0xc0,0x06,0x0c,0x11,0x10,0x00,0x1c,0x29,0x07,0x01,0xf6,0xef,0x23,0x94,0xae,\
            0x45,0xa9,0xa2,0x1b,0x4e,0xa0,0xce,0x37,0x2a,0x4e,0xab,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x84,0x04,0x05,0x05,0x00,0x1d,0x28,0x03,0x01,0x0e,0x1e,0x00,0x4d,0x2a,0x44,0x3c,0x01,\
            0x01,0x00,0x1e,0x2a,0x4d,0x01,0x00,0x06,0x0c,0x03,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xa0,0x1f,0x29,0x08,0x01,0x01,0x02,0x04,0x04,0x05,0x05,0x00,0x20,0x28,0x03,0x01,0x12,\
            0x21,0x00,0x22,0x2a,0x16,0x0c,0x09,0x08,0x00,0x21,0x2a,0x22,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xbc,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x34,0x03,0x02,0x00,0x22,0x29,\
            0x02,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x23,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xd8,0x01,0x0e,0x24,0x00,0x32,0x2a,0x46,0x3c,0x02,0x01,0x00,0x24,0x2a,0x32,0x01,0x00,\
            0x04,0x04,0x05,0x05,0x00,0x25,0x28,0x03,0x01,0x12,0x26,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xf4,0x4d,0x2a,0x16,0x0c,0x04,0x03,0x00,0x26,0x2a,0x4d,0x01,0x00,0x00,0x00,0x46,0x34,\
            0x03,0x02,0x00,0x27,0x29,0x02,0x01,0x00,0x00,0x06,0x0c,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x10,0x02,0x00,0x28,0x29,0x08,0x01,0x02,0x01,0x04,0x04,0x05,0x05,0x00,0x29,0x28,0x03,\
            0x01,0x12,0x2a,0x00,0x4d,0x2a,0x14,0x0c,0x03,0x03,0x00,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x2c,0x2a,0x4d,0x01,0x00,0x00,0x00,0x46,0x34,0x03,0x02,0x00,0x2b,0x29,0x02,0x01,0x00,\
            0x00,0x06,0x0c,0x03,0x02,0x00,0x2c,0x29,0x08,0x01,0x03,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x48,0x04,0x04,0x05,0x05,0x00,0x2d,0x28,0x03,0x01,0x12,0x2e,0x00,0x4d,0x2a,0x14,0x0c,\
            0x01,0x01,0x00,0x2e,0x2a,0x4d,0x01,0x00,0x46,0x34,0x03,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x64,0x00,0x2f,0x29,0x02,0x01,0x00,0x00,0x06,0x0c,0x03,0x02,0x00,0x30,0x29,0x08,0x01,\
            0x04,0x01,0x04,0x04,0x05,0x05,0x00,0x31,0x28,0x03,0x01,0x0e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x80,0x32,0x00,0x4d,0x2a,0x44,0x3c,0x14,0x01,0x00,0x32,0x2a,0x4d,0x01,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x9c,0x00,0x00,0x00,0x00,0x00,0x06,0x0c,0x03,0x02,0x00,0x33,0x29,0x08,0x01,0x05,0x02,\
            0x04,0x04,0x02,0x02,0x00,0x34,0x28,0x00,0x01,0x13,0x18,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xb8,0x04,0x05,0x05,0x00,0x35,0x28,0x03,0x01,0x04,0x36,0x00,0x4f,0x2a,0x46,0x30,0x05,\
            0x04,0x00,0x36,0x2a,0x4f,0x01,0x00,0x00,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xd4,0x02,0x02,0x00,0x37,0x28,0x00,0x01,0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x38,0x28,\
            0x03,0x01,0x02,0x39,0x00,0x50,0x2a,0x06,0x0c,0x08,0x07,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xf0,0x39,0x2a,0x50,0x01,0x02,0x15,0x19,0x3e,0x00,0x02,0x00,0x04,0x04,0x05,0x05,0x00,\
            0x3a,0x28,0x03,0x01,0x02,0x3b,0x00,0x27,0x2a,0x04,0x0c,0x09,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x0c,0x02,0x00,0x3b,0x2a,0x27,0x01,0x30,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,\
            0x04,0x08,0x07,0x00,0x3c,0x29,0x04,0x01,0x19,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x28,0x01,0x00,0x00,0x04,0x04,0x02,0x02,0x00,0x3d,0x28,0x00,0x01,0x0f,0x18,0x04,0x04,\
            0x05,0x05,0x00,0x3e,0x28,0x03,0x01,0x12,0x3f,0x00,0x19,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x24,0x44,0x16,0x0c,0x02,0x01,0x00,0x3f,0x2a,0x19,0x01,0x64,0x46,0x34,0x03,0x02,0x00,0x40,\
            0x29,0x02,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x00,0x01,0x00,0x80,0x04,0x00,0x03,0x00,0x00,0x2a,0x37,0x02,0x00,0x82,0x04,\
            0x00,0x0b,0x00,0x0c,0x2a,0x4d,0x01,0x00,0x82,0x04,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x12,0x2a,0x4e,0x01,0x00,0x88,0x04,0x00,0x17,0x00,0x00,0x2a,0x4c,0x01,0x00,\
            0x08,0x04,0x00,0x19,0x00,0x00,0x2a,0x4d,0x01,0x04,0x08,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x38,0x00,0x1e,0x00,0x00,0x2a,0x22,0x01,0x00,0x02,0x04,0x00,0x21,0x00,0x22,0x2a,0x32,\
            0x01,0x04,0x08,0x04,0x00,0x24,0x00,0x00,0x2a,0x4d,0x01,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x54,0x82,0x04,0x00,0x26,0x00,0x27,0x2a,0x4d,0x01,0x00,0x82,0x04,0x00,0x2a,0x00,0x2b,\
            0x2a,0x4d,0x01,0x00,0x82,0x04,0x00,0x2e,0x00,0x2f,0x2a,0x4d,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x70,0x01,0x04,0x08,0x04,0x00,0x32,0x00,0x00,0x2a,0x4f,0x01,0x00,0x08,0x04,0x00,0x36,\
            0x00,0x00,0x2a,0x27,0x01,0x00,0x80,0x04,0x00,0x3b,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x0d,0x06,0x40,0x8c,0x2a,0x19,0x01,0x00,0x82,0x04,0x00,0x3f,0x00,0x40,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0xf6,0xef,0x23,0x94,0xae,0x45,0xa9,0xa2,0x1b,0x4e,0xa0,0xce,0x00,0x00,0x4e,0xab,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x14,0x06,0x60,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x70,0x00,0x19,0x02,0xc0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x68,0x36,\
        },\
    },\
}

#endif
