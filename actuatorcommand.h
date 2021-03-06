/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup ActuatorCommand ActuatorCommand
 * @brief Contains the pulse duration sent to each of the channels.  Set by @ref ActuatorModule
 *
 * Autogenerated files and functions for ActuatorCommand Object
 *
 * @{
 *
 * @file       actuatorcommand.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the ActuatorCommand object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: actuatorcommand.xml.
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

#ifndef ACTUATORCOMMAND_H
#define ACTUATORCOMMAND_H
#include <stdbool.h>
/* Object constants */
#define ACTUATORCOMMAND_OBJID 0xB8229FE4
#define ACTUATORCOMMAND_ISSINGLEINST 1
#define ACTUATORCOMMAND_ISSETTINGS 0
#define ACTUATORCOMMAND_ISPRIORITY 0
#define ACTUATORCOMMAND_NUMBYTES sizeof(ActuatorCommandData)

/* Field Channel information */

// Number of elements for field Channel
#define ACTUATORCOMMAND_CHANNEL_NUMELEM 12

/* Field UpdateTime information */

/* Field MaxUpdateTime information */

/* Field NumFailedUpdates information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    int16_t Channel[12];
    uint16_t UpdateTime;
    uint16_t MaxUpdateTime;
    uint8_t NumFailedUpdates;

} __attribute__((packed)) ActuatorCommandDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef ActuatorCommandDataPacked __attribute__((aligned(4))) ActuatorCommandData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    ActuatorCommandDataPacked data;
    byte arr[ACTUATORCOMMAND_NUMBYTES];
 } ActuatorCommandDataUnion;

#endif // ACTUATORCOMMAND_H

/**
 * @}
 * @}
 */
