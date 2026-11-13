# pragma once
# include <iostream>
# include <string>
#include "Persona.hpp"
#include "Variante.hpp"
#include "Vehiculo.hpp"

using namespace std;

class Camion : public Vehiculo{

    private:
    int ejes;

    public:
    Camion(string placa, Persona* propietario, int ejes);
    ~Camion();

    void setEjes(int ejes);
    int getEjes() const;
    string getTipo() const override;
    void agregarEje();
    int cobrar() const override;
    string informacion() const override;
};