//
// Created by Customer on 16/09/2020.
//

#ifndef SPCHECK_ERROR_H
#define SPCHECK_ERROR_H

#include <stdexcept>
#include <string>

class ScheckError : public std::runtime_error{
public:
    ScheckError( const std::string& emsg) : std::runtime_error(emsg) {}
};
#endif //SPCHECK_ERROR_H
