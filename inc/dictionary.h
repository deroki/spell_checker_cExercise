//
// Created by Customer on 15/09/2020.
//

#ifndef SPCHECK_DICTIONARY_H
#define SPCHECK_DICTIONARY_H

#include <string>
#include <set>
#include <fstream>
#include <algorithm>
#include "error.h"

class Dictionary
{
public:
    Dictionary( const std::string& fname)
    {
        std::ifstream ifs(fname.c_str());
        std::string word;
        if (ifs.good()) {
            while (std::getline(ifs, word)) {
                //erase /n or /n in case windowstxt or linuxtxt
                word.erase( std::remove( word.begin(), word.end(), '\r' ), word.end() );
                word.erase( std::remove( word.begin(), word.end(), '\n' ), word.end() );
                mWords.insert(word);
            }
        }
        else{
            throw ScheckError("Error reading file " + fname);
        }
    }
    bool check( const std::string& word)
    {
        return mWords.find(word)  != mWords.end();
    }

private:
    std::set<std::string> mWords;
};


#endif //SPCHECK_DICTIONARY_H
