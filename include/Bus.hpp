# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"
#include <Variante.hpp>
# include <Vehiculo.hpp>

using namespace std;

class Bus : public Vehiculo {

    private:
    int puestos;

    public:
    Bus(string placa, Persona* propietario, int puestos);
    ~Bus();

    void setPuestos(int puestos);
    int getPuestos() const;
    string getTipo() const override;
    int cobrar() const override;
    string informacion() const override;
};