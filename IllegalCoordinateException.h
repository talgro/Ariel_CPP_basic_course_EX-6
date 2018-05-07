//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCOORDINATEEXCEPTION_HPP
#define INC_6_ILLEGALCOORDINATEEXCEPTION_HPP

#include <string>
class Index;
//using namespace std;

class IllegalCoordinateException : public std::exception{
private:
    int _row, _col;

public:
    IllegalCoordinateException(int row, int col);
    std::string theCoordinate() const;
};

#endif //INC_6_ILLEGALCOORDINATEEXCEPTION_HPP
