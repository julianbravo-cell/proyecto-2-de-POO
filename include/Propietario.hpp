# pragma once
# include <iostream>
# include <string>
# include "Persona.hpp"

using namespace std;

class Propietario : public Persona{
    private:
    bool esvecino;

    public:
    Propietario(string nombre, string documento, bool esvecino);
    ~Propietario();

    bool getEsvecino() const;
    string getDescripcion() const override; 

};