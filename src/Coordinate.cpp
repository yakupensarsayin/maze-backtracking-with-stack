#include "../include/Coordinate.h"

Coordinate::Coordinate(const int x, const int y)
    : mX(x), mY(y) {

}

bool Coordinate::operator==(const Coordinate &other) const {
    return (this->mX == other.mX && this->mY == other.mY);
}

std::ostream & Coordinate::operator<<(std::ostream &os) const {
    os << "X: " << this->mX << ", Y: " << this->mY;
    return os;
}