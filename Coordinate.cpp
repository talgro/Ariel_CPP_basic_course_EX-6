//
// Created by tal on 06/05/18.
//

#include "Coordinate.hpp"

Coordinate::Coordinate(int row, int col)
    :   _col(col), _row(row) {}

int Coordinate::getCol() {
    return _col;
}

int Coordinate::getRow() {
    return _row;
}

bool Coordinate::operator==(const Coordinate& rhs) {
	return getCol() == rhs.getCol() && getRow() == rhs.getRow();
}