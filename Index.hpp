//
// Created by tal on 06/05/18.
//

#ifndef INC_6_INDEX_HPP
#define INC_6_INDEX_HPP


class Index {
private:
    unsigned int _row;
    unsigned int _col;
public:
    Index(unsigned int row, unsigned int col);
    unsigned int getRow();
    unsigned int getCol();
};


#endif //INC_6_INDEX_HPP
