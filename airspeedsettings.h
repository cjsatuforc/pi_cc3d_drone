/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup AirspeedSettings AirspeedSettings
 * @brief Settings for the @ref BaroAirspeed module used on CopterControl or Revolution
 *
 * Autogenerated files and functions for AirspeedSettings Object
 *
 * @{
 *
 * @file       airspeedsettings.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the AirspeedSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: airspeedsettings.xml.
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

#ifndef AIRSPEEDSETTINGS_H
#define AIRSPEEDSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define AIRSPEEDSETTINGS_OBJID 0x69F4AD7A
#define AIRSPEEDSETTINGS_ISSINGLEINST 1
#define AIRSPEEDSETTINGS_ISSETTINGS 1
#define AIRSPEEDSETTINGS_ISPRIORITY 0
#define AIRSPEEDSETTINGS_NUMBYTES sizeof(AirspeedSettingsData)

/* Field Scale information */

/* Field IMUBasedEstimationLowPassPeriod1 information */

/* Field IMUBasedEstimationLowPassPeriod2 information */

/* Field ZeroPoint information */

/* Field SamplePeriod information */

/* Field AirspeedSensorType information */

// Enumeration options for field AirspeedSensorType
typedef enum __attribute__ ((__packed__)) {
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_PIXHAWKAIRSPEEDMS4525DO=0,
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_EAGLETREEAIRSPEEDV3=1,
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_DIYDRONESMPXV5004=2,
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_DIYDRONESMPXV7002=3,
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_GROUNDSPEEDBASEDWINDESTIMATION=4,
    AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_NONE=5
} AirspeedSettingsAirspeedSensorTypeOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float Scale;
    float IMUBasedEstimationLowPassPeriod1;
    float IMUBasedEstimationLowPassPeriod2;
    uint16_t ZeroPoint;
    uint8_t SamplePeriod;
    AirspeedSettingsAirspeedSensorTypeOptions AirspeedSensorType;

} __attribute__((packed)) AirspeedSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef AirspeedSettingsDataPacked __attribute__((aligned(4))) AirspeedSettingsData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    AirspeedSettingsDataPacked data;
    byte arr[AIRSPEEDSETTINGS_NUMBYTES];
 } AirspeedSettingsDataUnion;

#endif // AIRSPEEDSETTINGS_H

/**
 * @}
 * @}
 */
