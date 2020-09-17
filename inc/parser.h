//
// Created by Customer on 17/09/2020.
//

#ifndef SPCHECK_PARSER_H
#define SPCHECK_PARSER_H

#include <string>
#include <iostream>

class Parser {
public:
    Parser( std::istream& is );
    std::string NextWord();
    unsigned int LineNo() const;
    std::string Context() const;

private:
    std::istream& mIn;          //will use "&" because stream objects can only be referenced
};
#endif //SPCHECK_PARSER_H
