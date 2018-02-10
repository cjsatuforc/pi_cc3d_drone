/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup OPLinkSettings OPLinkSettings
 * @brief OPLink configurations options.
 *
 * Autogenerated files and functions for OPLinkSettings Object
 *
 * @{
 *
 * @file       oplinksettings.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the OPLinkSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: oplinksettings.xml.
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef OPLINKSETTINGS_H
#define OPLINKSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define OPLINKSETTINGS_OBJID 0x885DAD90
#define OPLINKSETTINGS_ISSINGLEINST 1
#define OPLINKSETTINGS_ISSETTINGS 1
#define OPLINKSETTINGS_ISPRIORITY 0
#define OPLINKSETTINGS_NUMBYTES sizeof(OPLinkSettingsData)

/* Field CoordID information */

/* Field CustomDeviceID information */

/* Field SerialBaudrate information */

/* Field RFFrequency information */

/* Field FailsafeDelay information */

/* Field BeaconFrequency information */

/* Field Protocol information */

// Enumeration options for field Protocol
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_PROTOCOL_DISABLED=0,
    OPLINKSETTINGS_PROTOCOL_OPLINKRECEIVER=1,
    OPLINKSETTINGS_PROTOCOL_OPLINKCOORDINATOR=2,
    OPLINKSETTINGS_PROTOCOL_OPENLRS=3
} OPLinkSettingsProtocolOptions;

/* Field LinkType information */

// Enumeration options for field LinkType
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_LINKTYPE_DATA=0,
    OPLINKSETTINGS_LINKTYPE_CONTROL=1,
    OPLINKSETTINGS_LINKTYPE_DATAANDCONTROL=2
} OPLinkSettingsLinkTypeOptions;

/* Field MainPort information */

// Enumeration options for field MainPort
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_MAINPORT_DISABLED=0,
    OPLINKSETTINGS_MAINPORT_TELEMETRY=1,
    OPLINKSETTINGS_MAINPORT_SERIAL=2,
    OPLINKSETTINGS_MAINPORT_PPM=3,
    OPLINKSETTINGS_MAINPORT_PWM=4
} OPLinkSettingsMainPortOptions;

/* Field FlexiPort information */

// Enumeration options for field FlexiPort
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_FLEXIPORT_DISABLED=0,
    OPLINKSETTINGS_FLEXIPORT_TELEMETRY=1,
    OPLINKSETTINGS_FLEXIPORT_SERIAL=2,
    OPLINKSETTINGS_FLEXIPORT_PPM=3,
    OPLINKSETTINGS_FLEXIPORT_PWM=4
} OPLinkSettingsFlexiPortOptions;

/* Field PPMOutRSSI information */

// Enumeration options for field PPMOutRSSI
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_PPMOUTRSSI_FALSE=0,
    OPLINKSETTINGS_PPMOUTRSSI_TRUE=1
} OPLinkSettingsPPMOutRSSIOptions;

/* Field RadioPriStream information */

// Enumeration options for field RadioPriStream
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_RADIOPRISTREAM_DISABLED=0,
    OPLINKSETTINGS_RADIOPRISTREAM_HID=1,
    OPLINKSETTINGS_RADIOPRISTREAM_MAIN=2,
    OPLINKSETTINGS_RADIOPRISTREAM_FLEXI=3,
    OPLINKSETTINGS_RADIOPRISTREAM_VCP=4
} OPLinkSettingsRadioPriStreamOptions;

/* Field RadioAuxStream information */

// Enumeration options for field RadioAuxStream
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_RADIOAUXSTREAM_DISABLED=0,
    OPLINKSETTINGS_RADIOAUXSTREAM_HID=1,
    OPLINKSETTINGS_RADIOAUXSTREAM_MAIN=2,
    OPLINKSETTINGS_RADIOAUXSTREAM_FLEXI=3,
    OPLINKSETTINGS_RADIOAUXSTREAM_VCP=4
} OPLinkSettingsRadioAuxStreamOptions;

/* Field VCPBridge information */

// Enumeration options for field VCPBridge
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_VCPBRIDGE_DISABLED=0,
    OPLINKSETTINGS_VCPBRIDGE_MAIN=1,
    OPLINKSETTINGS_VCPBRIDGE_FLEXI=2
} OPLinkSettingsVCPBridgeOptions;

/* Field MainComSpeed information */

// Enumeration options for field MainComSpeed
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_MAINCOMSPEED_DISABLED=0,
    OPLINKSETTINGS_MAINCOMSPEED_4800=1,
    OPLINKSETTINGS_MAINCOMSPEED_9600=2,
    OPLINKSETTINGS_MAINCOMSPEED_19200=3,
    OPLINKSETTINGS_MAINCOMSPEED_38400=4,
    OPLINKSETTINGS_MAINCOMSPEED_57600=5,
    OPLINKSETTINGS_MAINCOMSPEED_115200=6
} OPLinkSettingsMainComSpeedOptions;

/* Field FlexiComSpeed information */

// Enumeration options for field FlexiComSpeed
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_FLEXICOMSPEED_DISABLED=0,
    OPLINKSETTINGS_FLEXICOMSPEED_4800=1,
    OPLINKSETTINGS_FLEXICOMSPEED_9600=2,
    OPLINKSETTINGS_FLEXICOMSPEED_19200=3,
    OPLINKSETTINGS_FLEXICOMSPEED_38400=4,
    OPLINKSETTINGS_FLEXICOMSPEED_57600=5,
    OPLINKSETTINGS_FLEXICOMSPEED_115200=6
} OPLinkSettingsFlexiComSpeedOptions;

/* Field AirDataRate information */

// Enumeration options for field AirDataRate
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_AIRDATARATE_9600=0,
    OPLINKSETTINGS_AIRDATARATE_19200=1,
    OPLINKSETTINGS_AIRDATARATE_32000=2,
    OPLINKSETTINGS_AIRDATARATE_57600=3,
    OPLINKSETTINGS_AIRDATARATE_64000=4,
    OPLINKSETTINGS_AIRDATARATE_100000=5,
    OPLINKSETTINGS_AIRDATARATE_128000=6,
    OPLINKSETTINGS_AIRDATARATE_192000=7,
    OPLINKSETTINGS_AIRDATARATE_256000=8
} OPLinkSettingsAirDataRateOptions;

/* Field Version information */

/* Field RSSIType information */

// Enumeration options for field RSSIType
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_RSSITYPE_COMBINED=0,
    OPLINKSETTINGS_RSSITYPE_RSSI=1,
    OPLINKSETTINGS_RSSITYPE_LINKQUALITY=2
} OPLinkSettingsRSSITypeOptions;

/* Field RFPower information */

/* Field RFXtalCap information */

/* Field MinChannel information */

/* Field MaxChannel information */

/* Field RFBand information */

// Enumeration options for field RFBand
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_RFBAND_433MHZ=0,
    OPLINKSETTINGS_RFBAND_868MHZ=1,
    OPLINKSETTINGS_RFBAND_915MHZ=2
} OPLinkSettingsRFBandOptions;

/* Field MaxRFPower information */

// Enumeration options for field MaxRFPower
typedef enum __attribute__ ((__packed__)) {
    OPLINKSETTINGS_MAXRFPOWER_0=0,
    OPLINKSETTINGS_MAXRFPOWER_125=1,
    OPLINKSETTINGS_MAXRFPOWER_16=2,
    OPLINKSETTINGS_MAXRFPOWER_316=3,
    OPLINKSETTINGS_MAXRFPOWER_63=4,
    OPLINKSETTINGS_MAXRFPOWER_126=5,
    OPLINKSETTINGS_MAXRFPOWER_25=6,
    OPLINKSETTINGS_MAXRFPOWER_50=7,
    OPLINKSETTINGS_MAXRFPOWER_100=8
} OPLinkSettingsMaxRFPowerOptions;

/* Field RFChannelSpacing information */

/* Field HopChannel information */

// Number of elements for field HopChannel
#define OPLINKSETTINGS_HOPCHANNEL_NUMELEM 24

/* Field ModemParams information */

/* Field Flags information */

/* Field BeaconDelay information */

/* Field BeaconPeriod information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    uint32_t CoordID;
    uint32_t CustomDeviceID;
    uint32_t SerialBaudrate;
    uint32_t RFFrequency;
    uint32_t FailsafeDelay;
    uint32_t BeaconFrequency;
    OPLinkSettingsProtocolOptions Protocol;
    OPLinkSettingsLinkTypeOptions LinkType;
    OPLinkSettingsMainPortOptions MainPort;
    OPLinkSettingsFlexiPortOptions FlexiPort;
    OPLinkSettingsPPMOutRSSIOptions PPMOutRSSI;
    OPLinkSettingsRadioPriStreamOptions RadioPriStream;
    OPLinkSettingsRadioAuxStreamOptions RadioAuxStream;
    OPLinkSettingsVCPBridgeOptions VCPBridge;
    OPLinkSettingsMainComSpeedOptions MainComSpeed;
    OPLinkSettingsFlexiComSpeedOptions FlexiComSpeed;
    OPLinkSettingsAirDataRateOptions AirDataRate;
    uint8_t Version;
    OPLinkSettingsRSSITypeOptions RSSIType;
    uint8_t RFPower;
    uint8_t RFXtalCap;
    uint8_t MinChannel;
    uint8_t MaxChannel;
    OPLinkSettingsRFBandOptions RFBand;
    OPLinkSettingsMaxRFPowerOptions MaxRFPower;
    uint8_t RFChannelSpacing;
    uint8_t HopChannel[24];
    uint8_t ModemParams;
    uint8_t Flags;
    uint8_t BeaconDelay;
    uint8_t BeaconPeriod;

} __attribute__((packed)) OPLinkSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef OPLinkSettingsDataPacked __attribute__((aligned(4))) OPLinkSettingsData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    OPLinkSettingsDataPacked data;
    byte arr[OPLINKSETTINGS_NUMBYTES];
 } OPLinkSettingsDataUnion;

#endif // OPLINKSETTINGS_H

/**
 * @}
 * @}
 */