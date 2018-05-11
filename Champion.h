#ifndef INC_6_CHAMPION_H
#define INC_6_CHAMPION_H

#include "Player.h"

class Champion : public Player {
public:
	const string name() const override { return "TomTal"; }
	const Coordinate play(const Board& board) override;
};
#endif //INC_6_CHAMPION_H