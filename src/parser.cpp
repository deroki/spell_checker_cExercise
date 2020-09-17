//
// Created by Customer on 17/09/2020.
//

#include "parser.h"
#include "error.h"

using std::istream;

Parser::Parser( istream& is) : mIn(is) {}

std::string Parser::NextWord() {
    std::string word;
    if (mIn >> word){
        return word;
    }
    else if ( mIn.eof() ){
        return "";
    }
    else{
        throw ScheckError("read error");
    }

}


