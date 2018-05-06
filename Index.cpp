//
// Created by tal on 06/05/18.
//

#include "Index.hpp"

Index::Index(unsigned int row, unsigned int col)
    :   _col(col), _row(row) {}

unsigned int Index::getCol() {
    return _col;
}

unsigned int Index::getRow() {
    return _row;
}