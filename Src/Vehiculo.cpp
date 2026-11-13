
#include "../include/Vehiculo.hpp"
#include "../include/Excepcion.hpp"

using namespace std;

Vehiculo::Vehiculo(string placa, Persona* propietario) : placa(placa), propietario(propietario) {
    if (placa.empty()) {
        throw ExcepcionPlaca();
    }
}
Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca() const { return placa; }
void Vehiculo::setPlaca(string p) {
    if (p.empty()) {
        throw ExcepcionPlaca();
    }
    placa = p;
}

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
