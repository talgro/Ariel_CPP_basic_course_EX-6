//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCHAREXCEPTION_HPP
#define INC_6_ILLEGALCHAREXCEPTION_HPP

using namespace std;
#include <exception>
#include <string>
#include "Index.hpp"

class IllegalCharException : public exception{

private:
    char _badChar;
public:
    const char* what() const noexcept override;
    IllegalCharException(char badChar);
    string theChar() const;
};


#endif //INC_6_ILLEGALCHAREXCEPTION_HPP








