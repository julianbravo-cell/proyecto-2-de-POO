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

    bool getEsVecino() const;
    bool esVecino() const override;
    string getDescripcion() const override; 

};