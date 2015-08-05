/**
 * @file       BlynkSimpleIntelEdisonWiFi.h
 * @author     Volodymyr Shymanskyy
 * @license    This project is released under the MIT License (MIT)
 * @copyright  Copyright (c) 2015 Volodymyr Shymanskyy
 * @date       Jan 2015
 * @brief
 *
 */

#ifndef BlynkSimpleIntelEdisonWiFi_h
#define BlynkSimpleIntelEdisonWiFi_h

#ifndef BLYNK_INFO_DEVICE
#define BLYNK_INFO_DEVICE  "Intel Edison"
#endif

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "WiFi"
#endif

void yield() { delay(0); }

#include <BlynkSimpleWifi.h>

#endif
