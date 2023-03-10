#pragma once
#include <stdint.h>
#include <avr/pgmspace.h>
#include "tileType.h"

namespace MapData
{
    constexpr uint8_t totalMaps = 2;
  
    constexpr uint8_t mapWidth = 24;
    constexpr uint8_t mapHeight = 8;

    constexpr uint8_t fullMapWidth = (mapWidth * tileWidth);
    constexpr uint8_t fullMapHeight = (mapHeight * tileHeight);

    constexpr TileType map0Data[mapHeight][mapWidth] PROGMEM =
    {
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Cap, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Cap, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Tube, TileType::Sky, TileType::Sky, TileType::GroundLeft, TileType::Ground, TileType::GroundRight, TileType::Sky, TileType::Sky, TileType::LeftWallRightPixel, TileType::Ground, TileType::LeftWall, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Ground,TileType::Ground,TileType::Ground,TileType::Ground,TileType::Ground,TileType::Ground,TileType::PixelBoth,TileType::Ground,TileType::Ground,TileType::PixelLeft,TileType::Sky,TileType::PixelRight,TileType::Ground,TileType::Ground,TileType::PixelLeft,TileType::Sky, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground
        }
    };

    constexpr TileType map1Data[mapHeight][mapWidth] PROGMEM =
    {
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Cap, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Cap, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Tube, TileType::Sky, TileType::Sky, TileType::GroundLeft, TileType::Ground, TileType::GroundRight, TileType::Sky, TileType::Sky, TileType::LeftWallRightPixel, TileType::Ground, TileType::LeftWall, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky, TileType::Sky
        },
        {
            TileType::Ground,TileType::Ground,TileType::GroundRight,TileType::Sky,TileType::Sky,TileType::GroundLeft,TileType::PixelBoth,TileType::Ground,TileType::Ground,TileType::PixelLeft,TileType::Sky,TileType::PixelRight,TileType::Ground,TileType::Ground,TileType::PixelLeft,TileType::Sky, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground, TileType::Ground
        }
    };

    extern const TileType (*currentMapData)[mapWidth];

    extern size_t getIndex(float x, float y);
    extern TileType getTile(float x, float y);
}
