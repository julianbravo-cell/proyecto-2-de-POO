
#include "../include/Vehiculo.hpp"

using namespace std;

Vehiculo::Vehiculo(string placa, Persona* propietario) : placa(placa), propietario(propietario){}
Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca() const { return placa; }
void Vehiculo::setPlaca(string p){placa = p;}

Persona* Vehiculo::getPropietario() const { return propietario; }
void Vehiculo::setPropietario(Persona* pro) { propietario = pro; }

string Vehiculo::informacion() const
{
    return "placa " + this->placa + " ";
}

ostream &operator << (ostream &os, Vehiculo & Vehiculo)
{
    os << Vehiculo.informacion();
    return os;
}
