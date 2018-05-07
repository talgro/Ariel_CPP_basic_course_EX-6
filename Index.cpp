//
// Created by tal on 06/05/18.
//

#include "Index.hpp"

Index::Index(int row, int col)
    :   _col(col), _row(row) {}

int Index::getCol() {
    return _col;
}

int Index::getRow() {
    return _row;
}