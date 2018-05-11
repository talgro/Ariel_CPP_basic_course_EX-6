//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCHAREXCEPTION_HPP
#define INC_6_ILLEGALCHAREXCEPTION_HPP

using namespace std;
#include <exception>
#include <string>
#include "Coordinate.hpp"

class IllegalCharException {

private:
    string _badChar;
public:
    IllegalCharException(string badChar);
    string theChar() const;
};


#endif //INC_6_ILLEGALCHAREXCEPTION_HPP








