//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCOORDINATEEXCEPTION_HPP
#define INC_6_ILLEGALCOORDINATEEXCEPTION_HPP

#include <string>
#include <exception>
class Coordinate;
using namespace std;

class IllegalCoordinateException : public exception{

private:
    char* _msg;
public:
    const char* what() const noexcept override;
    IllegalCoordinateException(Coordinate& badIndex);
	~IllegalCoordinateException();
    string theCoordinate() const noexcept;
};

#endif //INC_6_ILLEGALCOORDINATEEXCEPTION_HPP
