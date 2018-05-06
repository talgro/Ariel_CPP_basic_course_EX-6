//
// Created by tal on 06/05/18.
//

#include "IllegalCharException.hpp"

IllegalCharException::IllegalCharException(char badChar)
    :   _badChar(badChar){}

const char* IllegalCharException::what() const noexcept {
    return &_badChar;
}

string IllegalCharException::theChar() const{
    return what();
}