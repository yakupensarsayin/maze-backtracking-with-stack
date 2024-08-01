#ifndef COORDINATE_H
#define COORDINATE_H

#include <ostream>

class Coordinate {
public:
    Coordinate(int x, int y);

    inline bool operator==(const Coordinate &other) const;

    inline std::ostream& operator<<(std::ostream& os) const;

private:
    int mX;
    int mY;
};

#endif //COORDINATE_H