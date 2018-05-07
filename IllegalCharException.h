//
// Created by tal on 06/05/18.
//

#ifndef INC_6_ILLEGALCHAREXCEPTION_HPP
#define INC_6_ILLEGALCHAREXCEPTION_HPP

using namespace std;
#include <string>

class IllegalCharException {

private:
    char _badChar;
public:
    IllegalCharException(char badChar);
    char theChar() const;
};


#endif //INC_6_ILLEGALCHAREXCEPTION_HPP








