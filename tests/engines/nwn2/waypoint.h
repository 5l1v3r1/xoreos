/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  Module save data for waypoint tests.
 */

#include "src/common/error.h"

#ifndef TESTS_ENGINES_NWN2_WAYPOINT_TESTS_H
#define TESTS_ENGINES_NWN2_WAYPOINT_TESTS_H

/**
 * NWN2 .git file from a 1x2 interior area with two waypoints.
 */
static const byte kDataWaypoint[] = {
	0x47,0x49,0x54,0x20,0x56,0x33,0x2E,0x32,0x38,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,
	0xE0,0x00,0x00,0x00,0x64,0x00,0x00,0x00,0x90,0x05,0x00,0x00,0x36,0x00,0x00,0x00,
	0xF0,0x08,0x00,0x00,0xF9,0x00,0x00,0x00,0xE9,0x09,0x00,0x00,0x88,0x01,0x00,0x00,
	0x71,0x0B,0x00,0x00,0x50,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
	0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
	0x05,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x1F,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC8,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xD8,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xE8,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,
	0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x4C,0x01,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x58,0x01,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x01,0x00,0x00,
	0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x01,0x00,0x00,0x04,0x00,0x00,0x00,
	0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
	0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,
	0x0E,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
	0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x05,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
	0x09,0x00,0x00,0x00,0xF4,0x01,0x00,0x00,0x05,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x05,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
	0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,
	0x10,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
	0x0F,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
	0x11,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x12,0x00,0x00,0x00,
	0x20,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x24,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00,0x00,0x00,
	0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x16,0x00,0x00,0x00,
	0x14,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
	0x0B,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
	0x19,0x00,0x00,0x00,0x03,0xCF,0x05,0x3F,0x0A,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,
	0x4C,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x1B,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
	0x0C,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x5C,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
	0x1D,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
	0x0E,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x21,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,
	0x25,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x24,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x26,0x00,0x00,0x00,
	0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x23,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x5C,0xC9,0xD7,0x40,0x0C,0x00,0x00,0x00,
	0x29,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x2A,0x00,0x00,0x00,
	0x0C,0x3C,0x9A,0x40,0x00,0x00,0x00,0x00,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
	0x2D,0x00,0x00,0x00,0xC0,0x3E,0x5A,0x3F,0x00,0x00,0x00,0x00,0x2E,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
	0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00,0x00,0x00,0x15,0x00,0x00,0x00,
	0x83,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x97,0x00,0x00,0x00,
	0x0C,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0xA4,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,
	0x18,0x00,0x00,0x00,0xC2,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x19,0x00,0x00,0x00,
	0x9C,0x6D,0x0E,0xBF,0x0A,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,0xD1,0x00,0x00,0x00,
	0x0A,0x00,0x00,0x00,0x1B,0x00,0x00,0x00,0xD5,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,
	0x1C,0x00,0x00,0x00,0xE1,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x1D,0x00,0x00,0x00,
	0x34,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
	0x0E,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,
	0x20,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x25,0x00,0x00,0x00,
	0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x23,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x0D,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x22,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
	0x28,0x00,0x00,0x00,0x47,0x77,0x7A,0x40,0x0C,0x00,0x00,0x00,0x29,0x00,0x00,0x00,
	0xED,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x2A,0x00,0x00,0x00,0xA6,0x61,0xB6,0x40,
	0x00,0x00,0x00,0x00,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x2D,0x00,0x00,0x00,
	0x7C,0xB8,0x54,0x3F,0x00,0x00,0x00,0x00,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x31,0x00,0x00,0x00,
	0x38,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x32,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,
	0x0F,0x00,0x00,0x00,0x33,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
	0x34,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x35,0x00,0x00,0x00,
	0x48,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x1D,0x00,0x00,0x00,0x4C,0x00,0x00,0x00,
	0x45,0x6E,0x63,0x6F,0x75,0x6E,0x74,0x65,0x72,0x20,0x4C,0x69,0x73,0x74,0x00,0x00,
	0x50,0x6C,0x61,0x63,0x65,0x64,0x46,0x58,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,
	0x54,0x72,0x65,0x65,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x53,0x74,0x61,0x74,0x69,0x63,0x43,0x61,0x6D,0x65,0x72,0x61,0x4C,0x69,0x73,0x74,
	0x41,0x72,0x65,0x61,0x50,0x72,0x6F,0x70,0x65,0x72,0x74,0x69,0x65,0x73,0x00,0x00,
	0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x53,0x6E,0x64,0x4E,0x69,0x74,0x56,0x6F,0x6C,
	0x4D,0x75,0x73,0x69,0x63,0x42,0x61,0x74,0x74,0x6C,0x65,0x00,0x00,0x00,0x00,0x00,
	0x4D,0x75,0x73,0x69,0x63,0x4E,0x69,0x67,0x68,0x74,0x00,0x00,0x00,0x00,0x00,0x00,
	0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x53,0x6E,0x64,0x4E,0x69,0x67,0x68,0x74,0x00,
	0x4D,0x75,0x73,0x69,0x63,0x44,0x65,0x6C,0x61,0x79,0x00,0x00,0x00,0x00,0x00,0x00,
	0x45,0x6E,0x76,0x41,0x75,0x64,0x69,0x6F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x53,0x6E,0x64,0x44,0x61,0x79,0x56,0x6F,0x6C,
	0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x53,0x6E,0x64,0x44,0x61,0x79,0x00,0x00,0x00,
	0x4D,0x75,0x73,0x69,0x63,0x44,0x61,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x54,0x72,0x65,0x61,0x73,0x75,0x72,0x65,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,
	0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x43,0x72,0x65,0x61,0x74,0x75,0x72,0x65,0x20,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,
	0x4C,0x69,0x67,0x68,0x74,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x53,0x74,0x6F,0x72,0x65,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x57,0x61,0x79,0x70,0x6F,0x69,0x6E,0x74,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,
	0x5A,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x47,0x55,0x49,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x54,0x61,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x4C,0x6F,0x63,0x61,0x6C,0x69,0x7A,0x65,0x64,0x4E,0x61,0x6D,0x65,0x00,0x00,0x00,
	0x54,0x65,0x6D,0x70,0x6C,0x61,0x74,0x65,0x52,0x65,0x73,0x52,0x65,0x66,0x00,0x00,
	0x58,0x4F,0x72,0x69,0x65,0x6E,0x74,0x61,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,
	0x4C,0x69,0x6E,0x6B,0x65,0x64,0x54,0x6F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x43,0x6C,0x61,0x73,0x73,0x69,0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x00,
	0x44,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,0x00,
	0x56,0x61,0x72,0x54,0x61,0x62,0x6C,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x54,0x69,0x6E,0x74,0x61,0x62,0x6C,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x54,0x69,0x6E,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x53,0x74,0x61,0x63,0x6B,0x61,0x62,0x6C,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x58,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x4D,0x61,0x70,0x4E,0x6F,0x74,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x59,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x48,0x65,0x69,0x67,0x68,0x74,0x4C,0x6F,0x63,0x6B,0x00,0x00,0x00,0x00,0x00,0x00,
	0x4D,0x61,0x70,0x4E,0x6F,0x74,0x65,0x45,0x6E,0x61,0x62,0x6C,0x65,0x64,0x00,0x00,
	0x59,0x4F,0x72,0x69,0x65,0x6E,0x74,0x61,0x74,0x69,0x6F,0x6E,0x00,0x00,0x00,0x00,
	0x41,0x70,0x70,0x65,0x61,0x72,0x61,0x6E,0x63,0x65,0x00,0x00,0x00,0x00,0x00,0x00,
	0x48,0x61,0x73,0x4D,0x61,0x70,0x4E,0x6F,0x74,0x65,0x00,0x00,0x00,0x00,0x00,0x00,
	0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x4C,0x6F,0x63,0x6B,0x00,0x00,0x00,0x00,
	0x50,0x6C,0x61,0x63,0x65,0x61,0x62,0x6C,0x65,0x20,0x4C,0x69,0x73,0x74,0x00,0x00,
	0x53,0x6F,0x75,0x6E,0x64,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x54,0x72,0x69,0x67,0x67,0x65,0x72,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,
	0x45,0x6E,0x76,0x69,0x72,0x6F,0x6E,0x6D,0x65,0x6E,0x74,0x4C,0x69,0x73,0x74,0x00,
	0x44,0x6F,0x6F,0x72,0x20,0x4C,0x69,0x73,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x00,0x00,0x00,0x87,0xD6,0x8F,0x8A,0x23,0xB3,0xE2,0x45,0x8E,0x1F,0xDC,0x80,
	0x73,0xCF,0x7E,0xA6,0x08,0x00,0x00,0x00,0x6D,0x61,0x70,0x6E,0x6F,0x74,0x65,0x31,
	0x1A,0x00,0x00,0x00,0xDE,0x39,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0A,0x00,0x00,0x00,0x4D,0x61,0x70,0x20,0x4E,0x6F,0x74,0x65,0x20,0x31,0x0D,0x6E,
	0x77,0x5F,0x6D,0x61,0x70,0x6E,0x6F,0x74,0x65,0x30,0x30,0x31,0x00,0x00,0x00,0x00,
	0x08,0x00,0x00,0x00,0x7B,0x31,0x38,0x34,0x33,0x33,0x37,0x7D,0x08,0x00,0x00,0x00,
	0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0xDF,0x39,0x00,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x4D,0x79,0x20,0x6E,
	0x6F,0x74,0x65,0x10,0x00,0x00,0x00,0xBF,0x31,0xB7,0x7E,0x59,0xEE,0x2F,0x40,0x8D,
	0x2F,0x05,0xB2,0x8D,0x2B,0x7B,0xF5,0x09,0x00,0x00,0x00,0x77,0x61,0x79,0x70,0x6F,
	0x69,0x6E,0x74,0x31,0x1A,0x00,0x00,0x00,0xE1,0x39,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x57,0x61,0x79,0x70,0x6F,0x69,0x6E,0x74,
	0x20,0x31,0x0E,0x6E,0x77,0x5F,0x77,0x61,0x79,0x70,0x6F,0x69,0x6E,0x74,0x30,0x30,
	0x31,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x7B,0x31,0x38,0x34,0x33,0x33,0x37,
	0x7D,0x08,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x08,0x00,0x00,
	0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,
	0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x0E,0x00,0x00,
	0x00,0x0F,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x12,0x00,0x00,
	0x00,0x13,0x00,0x00,0x00,0x5E,0x00,0x00,0x00,0x5F,0x00,0x00,0x00,0x60,0x00,0x00,
	0x00,0x61,0x00,0x00,0x00,0x62,0x00,0x00,0x00,0x63,0x00,0x00,0x00,0x05,0x00,0x00,
	0x00,0x06,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x09,0x00,0x00,
	0x00,0x0A,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x0D,0x00,0x00,
	0x00,0x14,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x17,0x00,0x00,
	0x00,0x18,0x00,0x00,0x00,0x19,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,0x1B,0x00,0x00,
	0x00,0x1C,0x00,0x00,0x00,0x1D,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x2F,0x00,0x00,
	0x00,0x30,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x32,0x00,0x00,0x00,0x33,0x00,0x00,
	0x00,0x34,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x37,0x00,0x00,
	0x00,0x38,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x25,0x00,0x00,0x00,0x2A,0x00,0x00,
	0x00,0x21,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x24,0x00,0x00,
	0x00,0x26,0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x29,0x00,0x00,
	0x00,0x2B,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x2D,0x00,0x00,0x00,0x2E,0x00,0x00,
	0x00,0x39,0x00,0x00,0x00,0x3A,0x00,0x00,0x00,0x3B,0x00,0x00,0x00,0x3C,0x00,0x00,
	0x00,0x3D,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x40,0x00,0x00,
	0x00,0x41,0x00,0x00,0x00,0x42,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x54,0x00,0x00,
	0x00,0x55,0x00,0x00,0x00,0x56,0x00,0x00,0x00,0x57,0x00,0x00,0x00,0x58,0x00,0x00,
	0x00,0x59,0x00,0x00,0x00,0x5A,0x00,0x00,0x00,0x5B,0x00,0x00,0x00,0x5C,0x00,0x00,
	0x00,0x5D,0x00,0x00,0x00,0x45,0x00,0x00,0x00,0x4A,0x00,0x00,0x00,0x4F,0x00,0x00,
	0x00,0x46,0x00,0x00,0x00,0x47,0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x49,0x00,0x00,
	0x00,0x4B,0x00,0x00,0x00,0x4C,0x00,0x00,0x00,0x4D,0x00,0x00,0x00,0x4E,0x00,0x00,
	0x00,0x50,0x00,0x00,0x00,0x51,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x53,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x08,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,
};

#endif // TESTS_ENGINES_NWN2_WAYPOINT_TESTS_H
