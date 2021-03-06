/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup HoTTBridgeSettings HoTTBridgeSettings
 * @brief Settings for the @ref HoTT Telemetry Module
 *
 * Autogenerated files and functions for HoTTBridgeSettings Object
 *
 * @{
 *
 * @file       hottbridgesettings.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the HoTTBridgeSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: hottbridgesettings.xml.
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

#ifndef HOTTBRIDGESETTINGS_H
#define HOTTBRIDGESETTINGS_H
#include <stdbool.h>
/* Object constants */
#define HOTTBRIDGESETTINGS_OBJID 0xE1F7BD4A
#define HOTTBRIDGESETTINGS_ISSINGLEINST 1
#define HOTTBRIDGESETTINGS_ISSETTINGS 1
#define HOTTBRIDGESETTINGS_ISPRIORITY 0
#define HOTTBRIDGESETTINGS_NUMBYTES sizeof(HoTTBridgeSettingsData)

/* Field Limit information */

// Array element names for field Limit
typedef enum {
    HOTTBRIDGESETTINGS_LIMIT_MINSPEED=0,
    HOTTBRIDGESETTINGS_LIMIT_MAXSPEED=1,
    HOTTBRIDGESETTINGS_LIMIT_NEGDIFFERENCE1=2,
    HOTTBRIDGESETTINGS_LIMIT_POSDIFFERENCE1=3,
    HOTTBRIDGESETTINGS_LIMIT_NEGDIFFERENCE2=4,
    HOTTBRIDGESETTINGS_LIMIT_POSDIFFERENCE2=5,
    HOTTBRIDGESETTINGS_LIMIT_MINHEIGHT=6,
    HOTTBRIDGESETTINGS_LIMIT_MAXHEIGHT=7,
    HOTTBRIDGESETTINGS_LIMIT_MAXDISTANCE=8,
    HOTTBRIDGESETTINGS_LIMIT_MINPOWERVOLTAGE=9,
    HOTTBRIDGESETTINGS_LIMIT_MAXPOWERVOLTAGE=10,
    HOTTBRIDGESETTINGS_LIMIT_MINSENSOR1VOLTAGE=11,
    HOTTBRIDGESETTINGS_LIMIT_MAXSENSOR1VOLTAGE=12,
    HOTTBRIDGESETTINGS_LIMIT_MINSENSOR2VOLTAGE=13,
    HOTTBRIDGESETTINGS_LIMIT_MAXSENSOR2VOLTAGE=14,
    HOTTBRIDGESETTINGS_LIMIT_MINCELLVOLTAGE=15,
    HOTTBRIDGESETTINGS_LIMIT_MAXCURRENT=16,
    HOTTBRIDGESETTINGS_LIMIT_MAXUSEDCAPACITY=17,
    HOTTBRIDGESETTINGS_LIMIT_MINSENSOR1TEMP=18,
    HOTTBRIDGESETTINGS_LIMIT_MAXSENSOR1TEMP=19,
    HOTTBRIDGESETTINGS_LIMIT_MINSENSOR2TEMP=20,
    HOTTBRIDGESETTINGS_LIMIT_MAXSENSOR2TEMP=21,
    HOTTBRIDGESETTINGS_LIMIT_MAXSERVOTEMP=22,
    HOTTBRIDGESETTINGS_LIMIT_MINRPM=23,
    HOTTBRIDGESETTINGS_LIMIT_MAXRPM=24,
    HOTTBRIDGESETTINGS_LIMIT_MINFUEL=25,
    HOTTBRIDGESETTINGS_LIMIT_MAXSERVODIFFERENCE=26
} HoTTBridgeSettingsLimitElem;

// Number of elements for field Limit
#define HOTTBRIDGESETTINGS_LIMIT_NUMELEM 27

/* Field Sensor information */

// Enumeration options for field Sensor
typedef enum __attribute__ ((__packed__)) {
    HOTTBRIDGESETTINGS_SENSOR_DISABLED=0,
    HOTTBRIDGESETTINGS_SENSOR_ENABLED=1
} HoTTBridgeSettingsSensorOptions;

// Array element names for field Sensor
typedef enum {
    HOTTBRIDGESETTINGS_SENSOR_VARIO=0,
    HOTTBRIDGESETTINGS_SENSOR_GPS=1,
    HOTTBRIDGESETTINGS_SENSOR_EAM=2,
    HOTTBRIDGESETTINGS_SENSOR_GAM=3,
    HOTTBRIDGESETTINGS_SENSOR_ESC=4
} HoTTBridgeSettingsSensorElem;

// Number of elements for field Sensor
#define HOTTBRIDGESETTINGS_SENSOR_NUMELEM 5

/* Field Warning information */

// Enumeration options for field Warning
typedef enum __attribute__ ((__packed__)) {
    HOTTBRIDGESETTINGS_WARNING_DISABLED=0,
    HOTTBRIDGESETTINGS_WARNING_ENABLED=1
} HoTTBridgeSettingsWarningOptions;

// Array element names for field Warning
typedef enum {
    HOTTBRIDGESETTINGS_WARNING_ALTITUDEBEEP=0,
    HOTTBRIDGESETTINGS_WARNING_MINSPEED=1,
    HOTTBRIDGESETTINGS_WARNING_MAXSPEED=2,
    HOTTBRIDGESETTINGS_WARNING_NEGDIFFERENCE1=3,
    HOTTBRIDGESETTINGS_WARNING_POSDIFFERENCE1=4,
    HOTTBRIDGESETTINGS_WARNING_NEGDIFFERENCE2=5,
    HOTTBRIDGESETTINGS_WARNING_POSDIFFERENCE2=6,
    HOTTBRIDGESETTINGS_WARNING_MINHEIGHT=7,
    HOTTBRIDGESETTINGS_WARNING_MAXHEIGHT=8,
    HOTTBRIDGESETTINGS_WARNING_MAXDISTANCE=9,
    HOTTBRIDGESETTINGS_WARNING_MINPOWERVOLTAGE=10,
    HOTTBRIDGESETTINGS_WARNING_MAXPOWERVOLTAGE=11,
    HOTTBRIDGESETTINGS_WARNING_MINSENSOR1VOLTAGE=12,
    HOTTBRIDGESETTINGS_WARNING_MAXSENSOR1VOLTAGE=13,
    HOTTBRIDGESETTINGS_WARNING_MINSENSOR2VOLTAGE=14,
    HOTTBRIDGESETTINGS_WARNING_MAXSENSOR2VOLTAGE=15,
    HOTTBRIDGESETTINGS_WARNING_MINCELLVOLTAGE=16,
    HOTTBRIDGESETTINGS_WARNING_MAXCURRENT=17,
    HOTTBRIDGESETTINGS_WARNING_MAXUSEDCAPACITY=18,
    HOTTBRIDGESETTINGS_WARNING_MINSENSOR1TEMP=19,
    HOTTBRIDGESETTINGS_WARNING_MAXSENSOR1TEMP=20,
    HOTTBRIDGESETTINGS_WARNING_MINSENSOR2TEMP=21,
    HOTTBRIDGESETTINGS_WARNING_MAXSENSOR2TEMP=22,
    HOTTBRIDGESETTINGS_WARNING_MAXSERVOTEMP=23,
    HOTTBRIDGESETTINGS_WARNING_MINRPM=24,
    HOTTBRIDGESETTINGS_WARNING_MAXRPM=25,
    HOTTBRIDGESETTINGS_WARNING_MINFUEL=26,
    HOTTBRIDGESETTINGS_WARNING_MAXSERVODIFFERENCE=27
} HoTTBridgeSettingsWarningElem;

// Number of elements for field Warning
#define HOTTBRIDGESETTINGS_WARNING_NUMELEM 28



typedef struct __attribute__ ((__packed__)) {
    float MinSpeed;
    float MaxSpeed;
    float NegDifference1;
    float PosDifference1;
    float NegDifference2;
    float PosDifference2;
    float MinHeight;
    float MaxHeight;
    float MaxDistance;
    float MinPowerVoltage;
    float MaxPowerVoltage;
    float MinSensor1Voltage;
    float MaxSensor1Voltage;
    float MinSensor2Voltage;
    float MaxSensor2Voltage;
    float MinCellVoltage;
    float MaxCurrent;
    float MaxUsedCapacity;
    float MinSensor1Temp;
    float MaxSensor1Temp;
    float MinSensor2Temp;
    float MaxSensor2Temp;
    float MaxServoTemp;
    float MinRPM;
    float MaxRPM;
    float MinFuel;
    float MaxServoDifference;
}  HoTTBridgeSettingsLimitData ;
typedef struct __attribute__ ((__packed__)) {
    float array[27];
}  HoTTBridgeSettingsLimitDataArray ;
#define HoTTBridgeSettingsLimitToArray( var ) UAVObjectFieldToArray( HoTTBridgeSettingsLimitData, var )

typedef struct __attribute__ ((__packed__)) {
    HoTTBridgeSettingsSensorOptions VARIO;
    HoTTBridgeSettingsSensorOptions GPS;
    HoTTBridgeSettingsSensorOptions EAM;
    HoTTBridgeSettingsSensorOptions GAM;
    HoTTBridgeSettingsSensorOptions ESC;
}  HoTTBridgeSettingsSensorData ;
typedef struct __attribute__ ((__packed__)) {
    HoTTBridgeSettingsSensorOptions array[5];
}  HoTTBridgeSettingsSensorDataArray ;
#define HoTTBridgeSettingsSensorToArray( var ) UAVObjectFieldToArray( HoTTBridgeSettingsSensorData, var )

typedef struct __attribute__ ((__packed__)) {
    HoTTBridgeSettingsWarningOptions AltitudeBeep;
    HoTTBridgeSettingsWarningOptions MinSpeed;
    HoTTBridgeSettingsWarningOptions MaxSpeed;
    HoTTBridgeSettingsWarningOptions NegDifference1;
    HoTTBridgeSettingsWarningOptions PosDifference1;
    HoTTBridgeSettingsWarningOptions NegDifference2;
    HoTTBridgeSettingsWarningOptions PosDifference2;
    HoTTBridgeSettingsWarningOptions MinHeight;
    HoTTBridgeSettingsWarningOptions MaxHeight;
    HoTTBridgeSettingsWarningOptions MaxDistance;
    HoTTBridgeSettingsWarningOptions MinPowerVoltage;
    HoTTBridgeSettingsWarningOptions MaxPowerVoltage;
    HoTTBridgeSettingsWarningOptions MinSensor1Voltage;
    HoTTBridgeSettingsWarningOptions MaxSensor1Voltage;
    HoTTBridgeSettingsWarningOptions MinSensor2Voltage;
    HoTTBridgeSettingsWarningOptions MaxSensor2Voltage;
    HoTTBridgeSettingsWarningOptions MinCellVoltage;
    HoTTBridgeSettingsWarningOptions MaxCurrent;
    HoTTBridgeSettingsWarningOptions MaxUsedCapacity;
    HoTTBridgeSettingsWarningOptions MinSensor1Temp;
    HoTTBridgeSettingsWarningOptions MaxSensor1Temp;
    HoTTBridgeSettingsWarningOptions MinSensor2Temp;
    HoTTBridgeSettingsWarningOptions MaxSensor2Temp;
    HoTTBridgeSettingsWarningOptions MaxServoTemp;
    HoTTBridgeSettingsWarningOptions MinRPM;
    HoTTBridgeSettingsWarningOptions MaxRPM;
    HoTTBridgeSettingsWarningOptions MinFuel;
    HoTTBridgeSettingsWarningOptions MaxServoDifference;
}  HoTTBridgeSettingsWarningData ;
typedef struct __attribute__ ((__packed__)) {
    HoTTBridgeSettingsWarningOptions array[28];
}  HoTTBridgeSettingsWarningDataArray ;
#define HoTTBridgeSettingsWarningToArray( var ) UAVObjectFieldToArray( HoTTBridgeSettingsWarningData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    HoTTBridgeSettingsLimitData Limit;
    HoTTBridgeSettingsSensorData Sensor;
    HoTTBridgeSettingsWarningData Warning;

} __attribute__((packed)) HoTTBridgeSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef HoTTBridgeSettingsDataPacked __attribute__((aligned(4))) HoTTBridgeSettingsData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    HoTTBridgeSettingsDataPacked data;
    byte arr[HOTTBRIDGESETTINGS_NUMBYTES];
 } HoTTBridgeSettingsDataUnion;

#endif // HOTTBRIDGESETTINGS_H

/**
 * @}
 * @}
 */
