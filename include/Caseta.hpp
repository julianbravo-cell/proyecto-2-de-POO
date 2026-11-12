#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Persona.hpp"
#include "Registro.hpp"

using namespace std;

class Caseta {
    private:
    Persona* operador;
    vector<Registro> registros;

    public:
    Caseta(Persona* operador, vector<Registro> registros);
    ~Caseta();

    void agregarRegistro(Vehiculo* &vehiculo);
    void setOperador(Persona* operador);
    void mostrarRegistros() const;
};