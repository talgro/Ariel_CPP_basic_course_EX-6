#ifndef INC_6_PLAYER_H
#define INC_6_PLAYER_H

#include <string>
#include "Coordinate.hpp"
#include "Board.h"

class Player {
protected:
	char _myChar;
public:
	virtual const string name() const = 0;	// do not change
	virtual const Coordinate play(const Board& board) = 0;	// do not change
	char getChar() const { return _myChar; }
	void setChar(char c) { _myChar = c; }
};
#endif //INC_6_PLAYER_H