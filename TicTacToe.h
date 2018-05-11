#ifndef INC_6_TICTACTOE_H
#define INC_6_TICTACTOE_H

class Board;
class Player;

class TicTacToe {
private:
	Board& _board;
	Player& _winner;

	bool checkWin(const Coordinate& coordinate, char c);
	bool checkDiagonal(const Coordinate& coordinate, char c);
	bool checkHorizontal(const Coordinate& coordinate, char c);
	bool checkVertical(const Coordinate& coordinate, char c);
public:
	TicTacToe(int size);
	void play(const Player& xplayer, const Player& oplayer);
	Board board() const { return _board; }
	Player winner() const { return winner; }
};
#endif //INC_6_TICTACTOE_H