//
// Created by tal on 06/05/18.
//

#include <vector>
#include <string>
#include <iostream>
#include "Board.h"
#include "Index.hpp"
#include "IllegalCoordinateException.hpp"
#include "IllegalCharException.hpp"

Board::Board(int size)
        : _size(size), _board(new vector<vector<SYMBOL>*>()){
    for (int innerVector = 0; innerVector < _size; ++innerVector) {
        _board->push_back(new vector<SYMBOL>());
    }
    for (vector<SYMBOL>* vec : *_board){
        for (int symbolIndex = 0; symbolIndex < _size; ++symbolIndex){
            vec->push_back(Board::DOT);
        }
    }
}

Board::~Board() {
    for(vector<SYMBOL>* vectorToRemove : *_board){
        delete vectorToRemove;
    }
    delete _board;
}

vector<vector<SYMBOL>*>* Board::getBoard() {
    return _board;
}

ostream& operator<<(ostream &out, Board &board) {
    string ans = "";
    for(vector<SYMBOL>* vector : *(board.getBoard())){
        for(SYMBOL symbol : *vector){
            out << symbol;
        }
        out << endl;
    }
    return out;
}

Board& Board::operator=(SYMBOL symbol) {
    for(vector<SYMBOL>* vector : *(_board)) {
        for (SYMBOL& symbolToChange : *vector) {
            symbolToChange = symbol;
        }
    }
    return *this;
}

SYMBOL& Board::operator[](Index index) {
    if (!isInBound(index)){
        throw (IllegalCoordinateException(index));
    }
    vector<SYMBOL>& vec = *(*_board)[index.getRow()];
    return vec[index.getCol()];
}

bool Board::isInBound(Index& index) {
    if (index.getRow() <= 0 || index.getRow()>= _size){
        return false;
    }
    if (index.getCol() <= 0 || index.getCol()>= _size){
        return false;
    }
    return true;
}