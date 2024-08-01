#include <utility>

#include "../include/MapData.h"

MapData::MapData(CharVector2D map) : mMap(std::move(map)) {
}

std::ostream & operator<<(std::ostream &os, const MapData& mapData) {
    for (const std::vector<char>& row : mapData.mMap) {
        for (const char cell : row) {
            os << cell;
        }
        os << std::endl;
    }
    return os;
}