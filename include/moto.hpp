# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"
# include <Vehiculo.hpp>
#include <Variante.hpp>

using namespace std;

class Moto: public Vehiculo {
    private:
    int cilindrada;
    bool altoCilindraje;

    public:
    Moto(string placa, Persona* propietario, int cilindrada);
    ~Moto();

    void setCilindrada(int cilindrada);
    int getCilindrada() const;
    string getTipo() const override;
    bool getAltoCilindraje() const;
    int cobrar() const override;
    string informacion() const override;
};