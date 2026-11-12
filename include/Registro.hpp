#pragma once
#include <iostream>
#include <string>
#include "Vehiculo.hpp"

using namespace std;

class Registro {

    private:
    std::string tipo;
    std::string placa;
    int cobro;

    public:
    Registro(string tipo,string placa, int cobro);
    ~Registro();

    void setPlaca(string placa);
    string getPlaca() const;
    void setTipo(string tipo);
    string getTipo() const;
    void setCobro(int cobro);
    int getCobro() const;
    string informacion() const;
};
ostream &operator << (ostream &os, Registro registro);