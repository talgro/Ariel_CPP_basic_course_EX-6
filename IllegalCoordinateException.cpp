//
// Created by tal on 06/05/18.
//

#include "Index.hpp"
#include "IllegalCoordinateException.hpp"
#include <iostream>
#include <stdio.h>

IllegalCoordinateException::IllegalCoordinateException(Index& badIndex) {
	string temp = badIndex.getRow() + "," + badIndex.getCol() + '\0';
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