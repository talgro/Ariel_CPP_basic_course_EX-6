//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCHAREXCEPTION_HPP
#define INC_6_ILLEGALCHAREXCEPTION_HPP
#include <string>
#include <exception>

class IllegalCharException : public std::exception{

private:
    char _badChar;
public:
    IllegalCharException(char badChar);
    char theChar() const;
};


#endif //INC_6_ILLEGALCHAREXCEPTION_HPP








