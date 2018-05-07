//
// Created by tal on 06/05/18.
//

#include "IllegalCoordinateException.hpp"

IllegalCoordinateException::IllegalCoordinateException(int row, int col)
	: _row(row), _col(col) {}

string IllegalCoordinateException::theCoordinate() const {
    return to_string(_row) + "," + to_string(_col);;
}