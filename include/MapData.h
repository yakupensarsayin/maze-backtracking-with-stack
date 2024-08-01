#ifndef MAPDATA_H
#define MAPDATA_H

#include <ostream>
#include <vector>

typedef std::vector<std::vector<char>> CharVector2D;

class MapData {
public:
    explicit MapData(CharVector2D map);

    friend std::ostream& operator<<(std::ostream& os, const MapData& obj);

private:
    CharVector2D mMap;
};

#endif //MAPDATA_H