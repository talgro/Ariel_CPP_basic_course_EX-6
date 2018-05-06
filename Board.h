//
// Created by tal on 06/05/18.
//

#ifndef INC_6_BOARD_HPP
#define INC_6_BOARD_HPP

#include <vector>
#include <iosfwd>
#include "Index.hpp"
typedef char SYMBOL;

using namespace std;

class Board {
private:
    //members
    int _size;
    vector<vector<SYMBOL>*>* _board;
    bool isInBound(Index& index);
public:
    static const SYMBOL DOT = '.';
    static const SYMBOL X = 'X';
    static const SYMBOL O = 'O';

    Board (int size);
    ~Board();
    vector<vector<SYMBOL>*>* getBoard();

    friend ostream& operator<< (ostream& out, Board& board);
    Board& operator= (SYMBOL c);
    SYMBOL& operator[] (Index index);
};

#endif //INC_6_BOARD_HPP
