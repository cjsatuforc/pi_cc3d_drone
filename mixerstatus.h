/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup MixerStatus MixerStatus
 * @brief Status for the matrix mixer showing the output of each mixer after all scaling
 *
 * Autogenerated files and functions for MixerStatus Object
 *
 * @{
 *
 * @file       mixerstatus.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the MixerStatus object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: mixerstatus.xml.
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

#ifndef MIXERSTATUS_H
#define MIXERSTATUS_H
#include <stdbool.h>
/* Object constants */
#define MIXERSTATUS_OBJID 0x354C0F40
#define MIXERSTATUS_ISSINGLEINST 1
#define MIXERSTATUS_ISSETTINGS 0
#define MIXERSTATUS_ISPRIORITY 0
#define MIXERSTATUS_NUMBYTES sizeof(MixerStatusData)

/* Field Mixer1 information */

/* Field Mixer2 information */

/* Field Mixer3 information */

/* Field Mixer4 information */

/* Field Mixer5 information */

/* Field Mixer6 information */

/* Field Mixer7 information */

/* Field Mixer8 information */

/* Field Mixer9 information */

/* Field Mixer10 information */

/* Field Mixer11 information */

/* Field Mixer12 information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float Mixer1;
    float Mixer2;
    float Mixer3;
    float Mixer4;
    float Mixer5;
    float Mixer6;
    float Mixer7;
    float Mixer8;
    float Mixer9;
    float Mixer10;
    float Mixer11;
    float Mixer12;

} __attribute__((packed)) MixerStatusDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef MixerStatusDataPacked __attribute__((aligned(4))) MixerStatusData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    MixerStatusDataPacked data;
    byte arr[MIXERSTATUS_NUMBYTES];
 } MixerStatusDataUnion;

#endif // MIXERSTATUS_H

/**
 * @}
 * @}
 */
