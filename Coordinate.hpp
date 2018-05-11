//
// Created by tal on 06/05/18.
//

#ifndef INC_6_COORDINATE_HPP
#define INC_6_COORDINATE_HPP


class Coordinate {
private:
    int _row;
    int _col;
public:
	Coordinate(int row, int col);
    int getRow();
    int getCol();
	bool operator==(const Coordinate& rhs);
};


#endif //INC_6_INDEX_HPP
