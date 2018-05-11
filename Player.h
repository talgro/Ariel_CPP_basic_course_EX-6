#ifndef INC_6_PLAYER_H
#define INC_6_PLAYER_H

class Player {
private:
	char myChar;
public:
	const virtual string name() const = 0;
	const virtual Coordinate play(const Board& board) = 0;
	char getChar() const { return myChar; }
	void setChar(char c) { myChar = c; }
};
#endif //INC_6_PLAYER_H