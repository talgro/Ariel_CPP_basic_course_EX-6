//
// Created by tal on 06/05/18.
//

#include "Index.hpp"
#include "IllegalCoordinateException.hpp"
#include <iostream>
#include <stdio.h>

IllegalCoordinateException::IllegalCoordinateException(int row, int col)
	: _row(row), _col(col) {}

string IllegalCoordinateException::theCoordinate() const {
    return to_string(_row) + "," + to_string(_col);;
}