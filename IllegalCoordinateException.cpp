//
// Created by tal on 06/05/18.
//

#include "Coordinate.hpp"
#include "IllegalCoordinateException.hpp"
#include <iostream>
#include <stdio.h>

IllegalCoordinateException::IllegalCoordinateException(Coordinate& badCoordinate) {
	string temp = badCoordinate.getRow() + "," + badCoordinate.getCol() + '\0';
	_msg = &temp[0];
	cout << _msg << endl;
}

IllegalCoordinateException::~IllegalCoordinateException() {
	cout << "testaa" << endl;
}

const char* IllegalCoordinateException::what() const noexcept {
	return _msg;
}

string IllegalCoordinateException::theCoordinate() const noexcept {
    return what();
}