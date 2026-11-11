# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"

using namespace std;

class Vehiculo {
    protected:
    string placa;
    Persona* propietario;

    public:
    Vehiculo (string placa, Persona* propietario);

    virtual ~Vehiculo();

    virtual string getTipo() = 0;
    string getPlaca() const;
    void setPlaca(string);
    Persona* getPropietario() const;
    void setPropietario(Persona* propietario);

    virtual int cobrar()const = 0;
    virtual string informacion() const;
};
ostream &operator <<(ostream &os, Vehiculo &Vehiculo);
