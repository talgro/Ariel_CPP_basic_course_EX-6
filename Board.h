//
// Created by tal on 06/05/18.
//

#ifndef INC_6_BOARD_HPP
#define INC_6_BOARD_HPP

#include <vector>
#include <iosfwd>
#include "Index.hpp"
#include "IllegalCharException.h"
#include "IllegalCoordinateException.h"

using namespace std;

class Board {
private:
    //members

	class Symbol {
	private:
		char _val;
	public:
		char getChar();

		Symbol(char c);

		bool operator==(const int num) const;
		Symbol& operator= (char ch);
		operator char();
	};

    int _size;
    vector<vector<Symbol>*>* _board;
    bool isInBound(Index& index);
	void delBoard();
public:
    Board (int size);
	Board (const Board& board);
    ~Board();
    vector<vector<Symbol>*>* getBoard() const;

    friend ostream& operator<< (ostream& out, const Board& board);
    Board& operator= (char c);
	Board& operator= (Board& board);
    Symbol& operator[] (Index index) const;
    bool operator==(const Board& board) const;
};

#endif //INC_6_BOARD_HPP
