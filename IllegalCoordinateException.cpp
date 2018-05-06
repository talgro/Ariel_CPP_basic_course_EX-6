//
// Created by tal on 06/05/18.
//

#include "Index.hpp"
#include "IllegalCoordinateException.hpp"

IllegalCoordinateException::IllegalCoordinateException(Index& badIndex)
        : _badIndex(badIndex){
    string temp = _badIndex.getRow() + "," + _badIndex.getCol();
    _msg = temp.c_str();
}

const char* IllegalCoordinateException::what() const noexcept {
    return _msg;
}

string IllegalCoordinateException::theCoordinate() const{
    return what();
}