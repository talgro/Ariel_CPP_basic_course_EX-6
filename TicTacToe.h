#ifndef INC_6_TICTACTOE_H
#define INC_6_TICTACTOE_H


#include "Board.h"
class Player;
class Board;
class Coordinate;

class TicTacToe {
private:
	Board _board;
	Player* _winner;

	bool checkWin(Coordinate& coordinate, char c);
	bool checkDiagonal(Coordinate& coordinate, char c);
	bool checkHorizontal(Coordinate& coordinate, char c);
	bool checkVertical(Coordinate& coordinate, char c);
public:
	TicTacToe(int size);
	void play(Player& xplayer, Player& oplayer);
	const Board& board() const;
	Player& winner() const;
};
#endif //INC_6_TICTACTOE_H