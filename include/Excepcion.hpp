#pragma once

#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

class ExcepcionPlaca : public std::runtime_error {
    public:
    Excepcionplaca();
};

class Excepcionejes : public std::runtime_error {
public:
    ExcepcionEjes();
};

class ExcepcionPuestos : public std::runtime_error {
public:
    ExcepcionPuestos();
};
