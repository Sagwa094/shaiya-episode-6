#pragma once
#include <shaiya/include/common.h>
#include <shaiya/include/common/Country.h>
#include "include/shaiya/include/SVector.h"

namespace shaiya
{
    enum struct Invasion : UINT16
    {
        StableErdeLight = 1010,
        DeepDesertLight = 1011,
        StableErdeFury = 1020,
        DeepDesertFury = 1021,
        PalaionRegnumLight = 1060,
        ValdemarRegnumFury = 1061,
        OpalusFury = 1065,
        OpalusLight = 1066
    };

    enum struct PortalCountry : UINT32
    {
        Neutral,
        Light,
        Fury
    };

    #pragma pack(push, 1)
    struct CDoor
    {
        UINT32 insZoneId;       //0x00
        SVector pos;            //0x04
        ULONG id;               //0x10
        PortalCountry country;  //0x14
        UINT32 minLevel;        //0x18
        UINT32 maxLevel;        //0x1C
        UINT32 destMapId;       //0x20
        SVector destPos;        //0x24
        // 0x30
    };
    #pragma pack(pop)

    static_assert(sizeof(CDoor) == 0x30);
}
