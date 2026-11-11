# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"

using namespace std;

class Operador : public Persona {
    private:
    string codigo;

    public:
    Operador(string nombre, string documento, string codigo);
    ~Operador();

    string getCodigo() const;
    string getDescripcion() const override;

};