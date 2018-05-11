#include "Champion.h"
#include "Board.h"
#include "Champion.hpp"

using namespace std;

const Coordinate Champion::play(const Board & board) {
	for (int i = 0; i < board.getSize(); ++i) {
		Coordinate coordinate{ i,i };
		if (board[coordinate] == '.') {
			return coordinate;
		}
	}
}
