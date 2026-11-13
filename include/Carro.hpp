# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"
#include "Variante.hpp"
#include "Vehiculo.hpp"

using namespace std;

class Carro : public Vehiculo {
    private:
    int pasajero;


    public:
    Carro(string placa, Persona* propietario, int pasajero);
    ~Carro();

    void setPasajero(int pasajero);
    int getPasajero() const;
    string getTipo() const override;
    int cobrar() const override;
    string informacion() const override;
    void subirPasajero();

};
 