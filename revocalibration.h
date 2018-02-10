/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup RevoCalibration RevoCalibration
 * @brief Settings for the INS to control the algorithm and what is updated
 *
 * Autogenerated files and functions for RevoCalibration Object
 *
 * @{
 *
 * @file       revocalibration.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the RevoCalibration object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: revocalibration.xml.
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

#ifndef REVOCALIBRATION_H
#define REVOCALIBRATION_H
#include <stdbool.h>
/* Object constants */
#define REVOCALIBRATION_OBJID 0x9A5BA08
#define REVOCALIBRATION_ISSINGLEINST 1
#define REVOCALIBRATION_ISSETTINGS 1
#define REVOCALIBRATION_ISPRIORITY 0
#define REVOCALIBRATION_NUMBYTES sizeof(RevoCalibrationData)

/* Field mag_bias information */

// Array element names for field mag_bias
typedef enum {
    REVOCALIBRATION_MAG_BIAS_X=0,
    REVOCALIBRATION_MAG_BIAS_Y=1,
    REVOCALIBRATION_MAG_BIAS_Z=2
} RevoCalibrationmag_biasElem;

// Number of elements for field mag_bias
#define REVOCALIBRATION_MAG_BIAS_NUMELEM 3

/* Field mag_transform information */

// Array element names for field mag_transform
typedef enum {
    REVOCALIBRATION_MAG_TRANSFORM_R0C0=0,
    REVOCALIBRATION_MAG_TRANSFORM_R0C1=1,
    REVOCALIBRATION_MAG_TRANSFORM_R0C2=2,
    REVOCALIBRATION_MAG_TRANSFORM_R1C0=3,
    REVOCALIBRATION_MAG_TRANSFORM_R1C1=4,
    REVOCALIBRATION_MAG_TRANSFORM_R1C2=5,
    REVOCALIBRATION_MAG_TRANSFORM_R2C0=6,
    REVOCALIBRATION_MAG_TRANSFORM_R2C1=7,
    REVOCALIBRATION_MAG_TRANSFORM_R2C2=8
} RevoCalibrationmag_transformElem;

// Number of elements for field mag_transform
#define REVOCALIBRATION_MAG_TRANSFORM_NUMELEM 9

/* Field MagBiasNullingRate information */

/* Field BiasCorrectedRaw information */

// Enumeration options for field BiasCorrectedRaw
typedef enum __attribute__ ((__packed__)) {
    REVOCALIBRATION_BIASCORRECTEDRAW_FALSE=0,
    REVOCALIBRATION_BIASCORRECTEDRAW_TRUE=1
} RevoCalibrationBiasCorrectedRawOptions;



typedef struct __attribute__ ((__packed__)) {
    float X;
    float Y;
    float Z;
}  RevoCalibrationmag_biasData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  RevoCalibrationmag_biasDataArray ;
#define RevoCalibrationmag_biasToArray( var ) UAVObjectFieldToArray( RevoCalibrationmag_biasData, var )

typedef struct __attribute__ ((__packed__)) {
    float r0c0;
    float r0c1;
    float r0c2;
    float r1c0;
    float r1c1;
    float r1c2;
    float r2c0;
    float r2c1;
    float r2c2;
}  RevoCalibrationmag_transformData ;
typedef struct __attribute__ ((__packed__)) {
    float array[9];
}  RevoCalibrationmag_transformDataArray ;
#define RevoCalibrationmag_transformToArray( var ) UAVObjectFieldToArray( RevoCalibrationmag_transformData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    RevoCalibrationmag_biasData mag_bias;
    RevoCalibrationmag_transformData mag_transform;
    float MagBiasNullingRate;
    RevoCalibrationBiasCorrectedRawOptions BiasCorrectedRaw;

} __attribute__((packed)) RevoCalibrationDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef RevoCalibrationDataPacked __attribute__((aligned(4))) RevoCalibrationData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    RevoCalibrationDataPacked data;
    byte arr[REVOCALIBRATION_NUMBYTES];
 } RevoCalibrationDataUnion;

#endif // REVOCALIBRATION_H

/**
 * @}
 * @}
 */
