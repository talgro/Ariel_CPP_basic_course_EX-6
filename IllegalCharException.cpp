//
// Created by tal on 06/05/18.
//

#include "IllegalCharException.hpp"
#include <iostream>

IllegalCharException::IllegalCharException(char badChar)
	: _badChar(badChar) {}

char IllegalCharException::theChar() const{
	return _badChar;
}