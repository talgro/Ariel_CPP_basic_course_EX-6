#include "TicTacToe.h"
#include "Board.h"
#include "Player.h"
#include "Coordinate.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

TicTacToe::TicTacToe(int size) : _board(size), _winner(nullptr) {}

const Board& TicTacToe::board() const{
	return _board;
}

Player& TicTacToe::winner() const{
	return *_winner;
}

bool TicTacToe::checkWin(Coordinate& coordinate, char c) {
	return checkDiagonal(coordinate, c) || checkHorizontal(coordinate, c) || checkVertical(coordinate, c);
}

bool TicTacToe::checkDiagonal(Coordinate& coordinate, char c) {
	if (coordinate.getCol() == coordinate.getRow()) {
		for (int i = 0; i < _board.getSize(); i++) {
			if (_board[{i, i}] != c) {
				return false;
			}
		}
		return true;
	}
	return false;
}

bool TicTacToe::checkHorizontal(Coordinate& coordinate, char c) {
	int row = coordinate.getRow();
	for (int col = 0; col < _board.getSize(); ++col) {
		if (_board[{row, col}] != c) {
			return false;
		}
	}
	return true;
}

bool TicTacToe::checkVertical(Coordinate& coordinate, char c) {
	int col = coordinate.getCol();
	for (int row = 0; row < _board.getSize(); ++row) {
		if (_board[{row, col}] != c) {
			return false;
		}
	}
	return true;
}

void TicTacToe::play(Player& Xplayer, Player& Oplayer) {
	_board = '.';
	Xplayer.setChar('X');
	Oplayer.setChar('O');
	Player* otherPlayer = &Oplayer;
	Coordinate lastCoordinate{-1, -1};
	vector<Player*> players;
	players.push_back(&Xplayer);
	players.push_back(&Oplayer);
	while (true) {
		for (Player* player : players) {
			try {
				char currPlayerChar = player->getChar();
				Coordinate coordinate = player->play(_board);
				if (_board[coordinate] != '.') {
					cout << coordinate.getRow() << "" << coordinate.getCol() << endl;
					cout << "illegal" << endl;
					_winner = otherPlayer;
					return;
				}
				if (coordinate == lastCoordinate) {
					cout << "tie" << endl;
					_winner = &Oplayer;
					return;
				}
				_board[coordinate] = currPlayerChar;
				if (checkWin(coordinate, currPlayerChar)) {
					cout << "valid" << endl;
					_winner = player;
					return;
				}
				otherPlayer = player;
				lastCoordinate = coordinate;
			}
			catch (string msg) {
				cout << "exception" <<endl;
				_winner = otherPlayer;
				return;
			}
		}
	}

}