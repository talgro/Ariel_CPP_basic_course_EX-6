//
// Created by tal on 06/05/18.
//

#ifndef INC_6_BOARD_HPP
#define INC_6_BOARD_HPP

#include <vector>
#include <iosfwd>
#include "Index.hpp"

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

		bool operator==(const int num);
		Symbol& operator= (char ch);
		operator char();
	};

    int _size;
    vector<vector<Symbol>*>* _board;
    bool isInBound(Index& index);
	void delBoard();
public:
    Board (int size);
	Board (Board& board);
    ~Board();
    vector<vector<Symbol>*>* getBoard() const;

    friend ostream& operator<< (ostream& out, const Board& board);
    Board& operator= (char c);
	Board& operator= (Board& board);
    Symbol& operator[] (Index index);
};

#endif //INC_6_BOARD_HPP
