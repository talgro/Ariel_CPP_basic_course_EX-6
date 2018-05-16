#include "Champion.h"
#include "Board.h"
#include <iostream>

using namespace std;

const Coordinate Champion::play(const Board & board) {
	if (board[{board.getSize() - 1, 0}] == '.') {
		return { board.getSize() - 1, 0 };
	}
	if (board[{0, board.getSize() - 1}] == '.') {
		return { 0, board.getSize() - 1 };
	}
	for (int i = 1; i < board.getSize() - 1; ++i) {
		if (board[{board.getSize() - 1 - i, i}] == '.') {
			return { board.getSize() - 1 - i, i };
		}
	}
	cout << "here"; // TODO: delete
	return { 0, 0 };
}
