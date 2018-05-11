#include "TicTacToe.hpp"
#include "Board.h"
#include "Player.h"
#include "Coordinate.hpp"

using namespace std;

TicTacToe::TicTacToe(int size) : _board(new Board(size)), _winner(nullptr) {}

bool TicTacToe::checkWin(const Coordinate& coordinate, char c) {
	return checkDiagonal(coordinate, c) || checkHorizontal(coordinate, c) || checkVertical(coordinate, c);
}

bool TicTacToe::checkDiagonal(const Coordinate& coordinate, char c) {
	if (coordinate.getCol() == coordinate.getRow()) {
		for (int i = 0; i < _board.getSize()) {
			if (_board[{i, i}] != c) {
				return false;
			}
		}
		return true;
	}
	return false;
}

bool TicTacToe::checkHorizontal(const Coordinate& coordinate, char c) {
	int row = coordinate.getRow();
	for (int col = 0; col < _board.getSize(); ++col) {
		if (_board[{row, col}] != c) {
			return false;
		}
	}
	return true;
}

bool TicTacToe::checkVertical(const Coordinate& coordinate, char c) {
	int col = coordinate.getCol();
	for (int row = 0; row < _board.getSize(); ++row) {
		if (_board[{row, col}] != c) {
			return false;
		}
	}
	return true;
}

void TicTacToe::play(const Player& Xplayer, const Player& Oplayer) {
	Xplayer.setChar('X');
	Oplayer.setChar('O');
	Player otherPlayer = Oplayer;
	Coordinate lastCoordinate{ -1, -1 };
	vector<Player> players;
	players.push_back(Xplayer);
	players.push_back(Oplayer);
	while (true) {
		for (Player player : players) {
			try {
				char c = player.getChar();
				Coordinate coordinate = player.play(_board);
				if (coordinate == lastCoordinate) {
					winner = Oplayer;
					return;
				}
				if (_board[coordinate] != '.') {
					winner = otherPlayer;
					return;
				}
				_board[coordinate] = c;
				if (checkWin(coordinate, c)) {
					winner = player;
					return;
				}
				otherPlayer = player;
				lastCoordinate = coordinate;
			}
			catch (string msg) {
				winner = otherPlayer;
				return;
			}
		}
	}
}