//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCOORDINATEEXCEPTION_HPP
#define INC_6_ILLEGALCOORDINATEEXCEPTION_HPP

#include <string>
#include <exception>
class Index;
using namespace std;

class IllegalCoordinateException : public exception{

private:
    Index & _badIndex;
    const char* _msg;
public:
    const char* what() const noexcept override;
    IllegalCoordinateException(Index& badIndex);
    string theCoordinate() const;
};

#endif //INC_6_ILLEGALCOORDINATEEXCEPTION_HPP