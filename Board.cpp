//
// Created by tal on 06/05/18.
//

#include <vector>
#include <string>
#include <iostream>
#include "Board.h"
#include "Index.hpp"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

Board::Board(int size)
        : _size(size), _board(new vector<vector<Symbol>*>()){
    for (int innerVector = 0; innerVector < _size; ++innerVector) {
        _board->push_back(new vector<Symbol>());
    }
    for (vector<Symbol>* vec : *_board){
        for (int SymbolIndex = 0; SymbolIndex < _size; ++SymbolIndex){
            vec->push_back(Board::Symbol('.'));
        }
    }
}

Board::Board(Board& board) {
	_board = new vector<vector<Symbol>*>();
	_size = board._size;
	for (vector<Symbol>* row : *board._board) {
		vector<Symbol>* new_row = new vector<Symbol>();
		_board->push_back(new_row);
		for (Symbol symbol : *row) {
			new_row->push_back(*(new Symbol(symbol.getChar())));
		}
	}
}

Board::~Board() {
	delBoard();
}

void Board::delBoard() {
	for (vector<Board::Symbol>* vectorToRemove : *_board) {
		delete vectorToRemove;
	}
	delete _board;
}

vector<vector<Board::Symbol>*>* Board::getBoard() const{
    return _board;
}

ostream& operator<<(ostream &out, const Board &board) {
    string ans = "";
    for(vector<Board::Symbol>* vector : *(board.getBoard())){
        for(Board::Symbol Symbol : *vector){
            out << Symbol.getChar();
        }
        out << "\n";
    }
    return out;
}

Board& Board::operator=(char Symbol) {
    for(vector<Board::Symbol>* vector : *(_board)) {
        for (Board::Symbol& SymbolToChange : *vector) {
            SymbolToChange = Symbol;
        }
    }
    return *this;
}

Board& Board::operator=(Board& board) {
	delBoard();
	_board = new vector<vector<Symbol>*>();
	_size = board._size;
	for (vector<Symbol>* row : *board._board) {
		vector<Symbol>* new_row = new vector<Symbol>();
		_board->push_back(new_row);
		for (Symbol symbol : *row) {
			new_row->push_back(*(new Symbol(symbol.getChar())));
		}
	}
	return *this;
}

Board::Symbol& Board::operator[](Index index) {
    if (!isInBound(index)){
        throw IllegalCoordinateException(index.getRow(), index.getCol());
    }
	else {
		vector<Symbol>* vec = (*_board)[index.getRow()];
		return vec->at(index.getCol());
	}
}

bool Board::isInBound(Index& index) {
    if (index.getRow() < 0 || index.getRow()>= _size){
        return false;
    }
    if (index.getCol() < 0 || index.getCol()>= _size){
        return false;
    }
    return true;
}

Board::Symbol::Symbol(char c) {
	_val = c;
}

char Board::Symbol::getChar() {
	return _val;
}

Board::Symbol & Board::Symbol::operator=(char ch) {
	if (ch != 'X' && ch != 'O' && ch != '.'){
		throw IllegalCharException(ch);
	}
	_val = ch;
}

Board::Symbol::operator char() {
	return _val;
}

bool Board::Symbol::operator==(const int num) const{
	return _val == num;
}
