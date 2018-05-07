//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCHAREXCEPTION_HPP
#define INC_6_ILLEGALCHAREXCEPTION_HPP
#include <string>
//using namespace std;

class IllegalCharException {

private:
    char _badChar;
public:
    IllegalCharException(char badChar);
    char theChar() const;
};


#endif //INC_6_ILLEGALCHAREXCEPTION_HPP








