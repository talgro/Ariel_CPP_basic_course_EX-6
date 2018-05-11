

class Player {
private:
	char myChar;
public:
	const string name() const = 0;
	const Coordinate play(const Board& board) = 0;
	char getChar() const { return myChar; }
	void setChar(char c) { myChar = c; }
};