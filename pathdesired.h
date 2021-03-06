/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup PathDesired PathDesired
 * @brief The endpoint or path the craft is trying to achieve.  Can come from @ref ManualControl or @ref PathPlanner 
 *
 * Autogenerated files and functions for PathDesired Object
 *
 * @{
 *
 * @file       pathdesired.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the PathDesired object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: pathdesired.xml.
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

#ifndef PATHDESIRED_H
#define PATHDESIRED_H
#include <stdbool.h>
/* Object constants */
#define PATHDESIRED_OBJID 0xBCD3B396
#define PATHDESIRED_ISSINGLEINST 1
#define PATHDESIRED_ISSETTINGS 0
#define PATHDESIRED_ISPRIORITY 0
#define PATHDESIRED_NUMBYTES sizeof(PathDesiredData)

/* Field Start information */

// Array element names for field Start
typedef enum {
    PATHDESIRED_START_NORTH=0,
    PATHDESIRED_START_EAST=1,
    PATHDESIRED_START_DOWN=2
} PathDesiredStartElem;

// Number of elements for field Start
#define PATHDESIRED_START_NUMELEM 3

/* Field End information */

// Array element names for field End
typedef enum {
    PATHDESIRED_END_NORTH=0,
    PATHDESIRED_END_EAST=1,
    PATHDESIRED_END_DOWN=2
} PathDesiredEndElem;

// Number of elements for field End
#define PATHDESIRED_END_NUMELEM 3

/* Field StartingVelocity information */

/* Field EndingVelocity information */

/* Field ModeParameters information */

// Number of elements for field ModeParameters
#define PATHDESIRED_MODEPARAMETERS_NUMELEM 4

/* Field UID information */

/* Field Mode information */

// Enumeration options for field Mode
typedef enum __attribute__ ((__packed__)) {
    PATHDESIRED_MODE_GOTOENDPOINT=0,
    PATHDESIRED_MODE_FOLLOWVECTOR=1,
    PATHDESIRED_MODE_CIRCLERIGHT=2,
    PATHDESIRED_MODE_CIRCLELEFT=3,
    PATHDESIRED_MODE_FIXEDATTITUDE=4,
    PATHDESIRED_MODE_SETACCESSORY=5,
    PATHDESIRED_MODE_DISARMALARM=6,
    PATHDESIRED_MODE_LAND=7,
    PATHDESIRED_MODE_BRAKE=8,
    PATHDESIRED_MODE_VELOCITY=9,
    PATHDESIRED_MODE_AUTOTAKEOFF=10
} PathDesiredModeOptions;



typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  PathDesiredStartData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  PathDesiredStartDataArray ;
#define PathDesiredStartToArray( var ) UAVObjectFieldToArray( PathDesiredStartData, var )

typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  PathDesiredEndData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  PathDesiredEndDataArray ;
#define PathDesiredEndToArray( var ) UAVObjectFieldToArray( PathDesiredEndData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    PathDesiredStartData Start;
    PathDesiredEndData End;
    float StartingVelocity;
    float EndingVelocity;
    float ModeParameters[4];
    int16_t UID;
    PathDesiredModeOptions Mode;

} __attribute__((packed)) PathDesiredDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef PathDesiredDataPacked __attribute__((aligned(4))) PathDesiredData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    PathDesiredDataPacked data;
    byte arr[PATHDESIRED_NUMBYTES];
 } PathDesiredDataUnion;

#endif // PATHDESIRED_H

/**
 * @}
 * @}
 */
