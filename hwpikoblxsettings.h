/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup HwPikoBLXSettings HwPikoBLXSettings
 * @brief Furious FPV Piko BLX Micro Flight Controller hardware configuration
 *
 * Autogenerated files and functions for HwPikoBLXSettings Object
 *
 * @{
 *
 * @file       hwpikoblxsettings.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the HwPikoBLXSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: hwpikoblxsettings.xml.
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

#ifndef HWPIKOBLXSETTINGS_H
#define HWPIKOBLXSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define HWPIKOBLXSETTINGS_OBJID 0xBE5F8824
#define HWPIKOBLXSETTINGS_ISSINGLEINST 1
#define HWPIKOBLXSETTINGS_ISSETTINGS 1
#define HWPIKOBLXSETTINGS_ISPRIORITY 0
#define HWPIKOBLXSETTINGS_NUMBYTES sizeof(HwPikoBLXSettingsData)

/* Field UARTPort information */

// Enumeration options for field UARTPort
typedef enum __attribute__ ((__packed__)) {
    HWPIKOBLXSETTINGS_UARTPORT_DISABLED=0,
    HWPIKOBLXSETTINGS_UARTPORT_TELEMETRY=1,
    HWPIKOBLXSETTINGS_UARTPORT_GPS=2,
    HWPIKOBLXSETTINGS_UARTPORT_SBUS=3,
    HWPIKOBLXSETTINGS_UARTPORT_DSM=4,
    HWPIKOBLXSETTINGS_UARTPORT_EXBUS=5,
    HWPIKOBLXSETTINGS_UARTPORT_HOTTSUMD=6,
    HWPIKOBLXSETTINGS_UARTPORT_HOTTSUMH=7,
    HWPIKOBLXSETTINGS_UARTPORT_SRXL=8,
    HWPIKOBLXSETTINGS_UARTPORT_IBUS=9,
    HWPIKOBLXSETTINGS_UARTPORT_DEBUGCONSOLE=10,
    HWPIKOBLXSETTINGS_UARTPORT_COMBRIDGE=11,
    HWPIKOBLXSETTINGS_UARTPORT_MSP=12,
    HWPIKOBLXSETTINGS_UARTPORT_MAVLINK=13,
    HWPIKOBLXSETTINGS_UARTPORT_HOTTTELEMETRY=14,
    HWPIKOBLXSETTINGS_UARTPORT_FRSKYSENSORHUB=15
} HwPikoBLXSettingsUARTPortOptions;

// Number of elements for field UARTPort
#define HWPIKOBLXSETTINGS_UARTPORT_NUMELEM 3

/* Field LEDPort information */

// Enumeration options for field LEDPort
typedef enum __attribute__ ((__packed__)) {
    HWPIKOBLXSETTINGS_LEDPORT_DISABLED=0,
    HWPIKOBLXSETTINGS_LEDPORT_WS281X=1
} HwPikoBLXSettingsLEDPortOptions;

/* Field PPMPort information */

// Enumeration options for field PPMPort
typedef enum __attribute__ ((__packed__)) {
    HWPIKOBLXSETTINGS_PPMPORT_DISABLED=0,
    HWPIKOBLXSETTINGS_PPMPORT_ENABLED=1
} HwPikoBLXSettingsPPMPortOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    HwPikoBLXSettingsUARTPortOptions UARTPort[3];
    HwPikoBLXSettingsLEDPortOptions LEDPort;
    HwPikoBLXSettingsPPMPortOptions PPMPort;

} __attribute__((packed)) HwPikoBLXSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef HwPikoBLXSettingsDataPacked __attribute__((aligned(4))) HwPikoBLXSettingsData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    HwPikoBLXSettingsDataPacked data;
    byte arr[HWPIKOBLXSETTINGS_NUMBYTES];
 } HwPikoBLXSettingsDataUnion;

#endif // HWPIKOBLXSETTINGS_H

/**
 * @}
 * @}
 */
