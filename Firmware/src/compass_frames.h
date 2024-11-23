#pragma once
#include <stdint.h>
uint32_t frames[28][42] = {
    {
        0, 0,        0,        0,        0,        0, 0, 0,        0,
        0, 0,        0,        0,        0,        0, 0, 0x4f4d4d, 0,
        0, 0xff1414, 0xff1414, 0xff1414, 0x4f4d4d, 0, 0, 0,        0x646464,
        0, 0,        0,        0,        0,        0, 0, 0,        0,
        0, 0,        0,        0,        0,        0,
    },
    {
        0,        0,        0,        0, 0, 0, 0,        0,        0,        0,
        0,        0,        0,        0, 0, 0, 0x646464, 0,        0,        0,
        0xff1414, 0xff1414, 0x4f4d4d, 0, 0, 0, 0x4f4d4d, 0xff1414, 0xff1414, 0,
        0,        0,        0,        0, 0, 0, 0,        0,        0,        0,
        0,        0,
    },
    {
        0,        0,        0,        0, 0, 0,        0,
        0,        0,        0,        0, 0, 0,        0,
        0,        0x646464, 0x646464, 0, 0, 0,        0xff1414,
        0xff1414, 0x4f4d4d, 0,        0, 0, 0x4f4d4d, 0xff1414,
        0xff1414, 0xff1414, 0,        0, 0, 0,        0,
        0,        0,        0,        0, 0, 0,        0,
    },
    {
        0, 0, 0, 0, 0,        0,        0, 0,        0,        0, 0,
        0, 0, 0, 0, 0x4f4d4d, 0x646464, 0, 0,        0,        0, 0xff1414,
        0, 0, 0, 0, 0xcb1a1a, 0xff1414, 0, 0xff1414, 0xcb1a1a, 0, 0,
        0, 0, 0, 0, 0xff1414, 0,        0, 0,        0,
    },
    {
        0,        0, 0, 0,        0, 0, 0,        0,        0,
        0,        0, 0, 0x646464, 0, 0, 0x4f4d4d, 0x646464, 0,
        0,        0, 0, 0xff1414, 0, 0, 0,        0,        0xcb1a1a,
        0xff1414, 0, 0, 0xff1414, 0, 0, 0,        0,        0,
        0xcb1a1a, 0, 0, 0,        0, 0,
    },
    {
        0,        0, 0, 0,        0, 0, 0,        0,        0,
        0,        0, 0, 0x646464, 0, 0, 0x4f4d4d, 0x646464, 0,
        0,        0, 0, 0xff1414, 0, 0, 0,        0,        0xcb1a1a,
        0xff1414, 0, 0, 0xff1414, 0, 0, 0,        0,        0,
        0xff1414, 0, 0, 0xcb1a1a, 0, 0,
    },
    {
        0,        0, 0,        0,        0,        0, 0, 0,        0,
        0,        0, 0x4f4d4d, 0,        0,        0, 0, 0x646464, 0,
        0,        0, 0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0,        0xff1414,
        0,        0, 0,        0xff1414, 0xcb1a1a, 0, 0, 0,        0,
        0xff1414, 0, 0,        0xff1414, 0,        0,
    },
    {
        0, 0, 0,        0,        0,        0, 0, 0,        0,
        0, 0, 0x4f4d4d, 0,        0,        0, 0, 0x646464, 0,
        0, 0, 0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0,        0xff1414,
        0, 0, 0,        0,        0xff1414, 0, 0, 0,        0xff1414,
        0, 0, 0,        0,        0xff1414, 0,
    },
    {
        0, 0, 0,        0,        0,        0,        0, 0,        0,
        0, 0, 0x4f4d4d, 0,        0,        0,        0, 0x646464, 0,
        0, 0, 0x646464, 0xff1414, 0x4f4d4d, 0,        0, 0,        0xff1414,
        0, 0, 0,        0,        0xff1414, 0xcb1a1a, 0, 0xff1414, 0,
        0, 0, 0,        0,        0,        0,
    },
    {
        0, 0,        0, 0,        0, 0,        0, 0,        0,
        0, 0x4f4d4d, 0, 0,        0, 0,        0, 0x646464, 0x646464,
        0, 0,        0, 0xff1414, 0, 0,        0, 0xcb1a1a, 0xff1414,
        0, 0,        0, 0,        0, 0xff1414, 0, 0xff1414, 0,
        0, 0,        0, 0,        0, 0,
    },
    {
        0, 0, 0, 0,        0, 0,        0,        0,        0,
        0, 0, 0, 0,        0, 0,        0,        0x646464, 0x646464,
        0, 0, 0, 0xff1414, 0, 0,        0,        0xcb1a1a, 0xff1414,
        0, 0, 0, 0,        0, 0xff1414, 0xcb1a1a, 0,        0,
        0, 0, 0, 0,        0, 0,
    },
    {
        0, 0, 0,        0,        0,        0, 0,        0,        0,
        0, 0, 0,        0,        0,        0, 0,        0x4f4d4d, 0x646464,
        0, 0, 0x646464, 0xff1414, 0xcb1a1a, 0, 0xcb1a1a, 0xff1414, 0x4f4d4d,
        0, 0, 0,        0,        0,        0, 0xff1414, 0,        0,
        0, 0, 0,        0,        0,        0,
    },
    {
        0, 0, 0,        0,        0,        0, 0,        0,        0,
        0, 0, 0,        0,        0,        0, 0,        0x4f4d4d, 0,
        0, 0, 0x646464, 0xff1414, 0xcb1a1a, 0, 0xff1414, 0xff1414, 0x4f4d4d,
        0, 0, 0,        0,        0,        0, 0,        0,        0,
        0, 0, 0,        0,        0,        0,
    },
    {
        0, 0, 0,        0,        0,        0,        0, 0,        0,
        0, 0, 0,        0,        0,        0,        0, 0x4f4d4d, 0,
        0, 0, 0x646464, 0xff1414, 0xff1414, 0xbe1515, 0, 0,        0x4f4d4d,
        0, 0, 0,        0,        0,        0,        0, 0,        0,
        0, 0, 0,        0,        0,        0,
    },
    {
        0,        0,        0,        0, 0,        0,        0,        0, 0, 0,
        0,        0,        0,        0, 0xff1414, 0xff1414, 0x4f4d4d, 0, 0, 0,
        0x646464, 0xff1414, 0xbe1515, 0, 0,        0,        0x4f4d4d, 0, 0, 0,
        0,        0,        0,        0, 0,        0,        0,        0, 0, 0,
        0,        0,
    },
    {
        0,        0,        0,        0, 0, 0,        0,
        0,        0,        0,        0, 0, 0,        0xff1414,
        0xbe1515, 0xff1414, 0x4f4d4d, 0, 0, 0,        0x646464,
        0xff1414, 0xbe1515, 0,        0, 0, 0x4f4d4d, 0x646464,
        0,        0,        0,        0, 0, 0,        0,
        0,        0,        0,        0, 0, 0,        0,
    },
    {
        0, 0,        0,        0, 0xff1414, 0,        0, 0, 0, 0, 0,
        0, 0xff1414, 0xbe1515, 0, 0xbe1515, 0xff1414, 0, 0, 0, 0, 0xff1414,
        0, 0,        0,        0, 0x646464, 0x4f4d4d, 0, 0, 0, 0, 0,
        0, 0,        0,        0, 0,        0,        0, 0, 0,
    },
    {
        0, 0,        0, 0, 0xbe1515, 0xff1414, 0, 0, 0,        0, 0,
        0, 0xff1414, 0, 0, 0xbe1515, 0xff1414, 0, 0, 0,        0, 0xff1414,
        0, 0,        0, 0, 0x4f4d4d, 0x646464, 0, 0, 0x4f4d4d, 0, 0,
        0, 0,        0, 0, 0,        0,        0, 0, 0,
    },
    {
        0,        0,        0,        0xff1414, 0,        0xff1414, 0,
        0,        0,        0,        0,        0xbe1515, 0xff1414, 0,
        0,        0xbe1515, 0xff1414, 0,        0,        0,        0,
        0xff1414, 0,        0,        0,        0,        0x4f4d4d, 0x646464,
        0,        0,        0x4f4d4d, 0,        0,        0,        0,
        0,        0,        0,        0,        0,        0,        0,
    },
    {
        0, 0, 0,        0xff1414, 0,        0xff1414, 0, 0,        0,
        0, 0, 0xff1414, 0xcb1a1a, 0,        0,        0, 0xff1414, 0,
        0, 0, 0x646464, 0xff1414, 0x4f4d4d, 0,        0, 0,        0x646464,
        0, 0, 0,        0,        0x4f4d4d, 0,        0, 0,        0,
        0, 0, 0,        0,        0,        0,
    },
    {
        0xcb1a1a, 0,        0xff1414, 0, 0, 0, 0xff1414, 0, 0, 0,
        0,        0xff1414, 0,        0, 0, 0, 0xff1414, 0, 0, 0,
        0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0, 0x646464, 0, 0, 0,
        0,        0x4f4d4d, 0,        0, 0, 0, 0,        0, 0, 0,
        0,        0,
    },
    {
        0xff1414, 0,        0xff1414, 0, 0, 0, 0xff1414, 0, 0, 0,
        0,        0xff1414, 0,        0, 0, 0, 0xff1414, 0, 0, 0,
        0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0, 0x646464, 0, 0, 0,
        0,        0x4f4d4d, 0,        0, 0, 0, 0,        0, 0, 0,
        0,        0,
    },
    {
        0xcb1a1a, 0,        0xff1414, 0, 0, 0, 0xff1414, 0, 0, 0,
        0,        0xff1414, 0,        0, 0, 0, 0xff1414, 0, 0, 0,
        0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0, 0x646464, 0, 0, 0,
        0,        0x4f4d4d, 0,        0, 0, 0, 0,        0, 0, 0,
        0,        0,
    },
    {
        0, 0xff1414, 0,        0,        0,        0, 0, 0xff1414, 0,
        0, 0xff1414, 0xcb1a1a, 0,        0,        0, 0, 0xff1414, 0,
        0, 0,        0x646464, 0xff1414, 0x4f4d4d, 0, 0, 0,        0x646464,
        0, 0,        0,        0,        0x4f4d4d, 0, 0, 0,        0,
        0, 0,        0,        0,        0,        0,
    },
    {
        0, 0xff1414, 0, 0,        0, 0,        0, 0xff1414, 0,
        0, 0xff1414, 0, 0,        0, 0,        0, 0xcb1a1a, 0xff1414,
        0, 0,        0, 0xff1414, 0, 0,        0, 0x4f4d4d, 0x646464,
        0, 0,        0, 0,        0, 0x646464, 0, 0,        0,
        0, 0,        0, 0,        0, 0,
    },
    {
        0, 0,        0, 0,        0, 0,        0, 0xcb1a1a, 0xff1414,
        0, 0xff1414, 0, 0,        0, 0,        0, 0xcb1a1a, 0xff1414,
        0, 0,        0, 0xff1414, 0, 0,        0, 0x4f4d4d, 0x646464,
        0, 0,        0, 0,        0, 0x646464, 0, 0,        0,
        0, 0,        0, 0,        0, 0,
    },
    {
        0,        0,        0, 0,        0, 0, 0, 0,        0xff1414,
        0xff1414, 0xcb1a1a, 0, 0,        0, 0, 0, 0xcb1a1a, 0xff1414,
        0,        0,        0, 0xff1414, 0, 0, 0, 0x4f4d4d, 0x646464,
        0,        0,        0, 0,        0, 0, 0, 0,        0,
        0,        0,        0, 0,        0, 0,
    },
    {
        0,        0, 0,        0,        0,        0, 0, 0,        0,
        0xff1414, 0, 0,        0,        0,        0, 0, 0x4f4d4d, 0xff1414,
        0xff1414, 0, 0xff1414, 0xff1414, 0x4f4d4d, 0, 0, 0x646464, 0x646464,
        0,        0, 0,        0,        0,        0, 0, 0,        0,
        0,        0, 0,        0,        0,        0,
    },
};