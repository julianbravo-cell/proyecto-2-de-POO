# include "../include/Bus.hpp"
#include "../include/Excepcion.hpp"

Bus::Bus(string placa, Persona* propietario, int puestos) : Vehiculo(placa, propietario), puestos(puestos) {
    if (puestos < 1) {
        throw ExcepcionPuestos();
    }
}
Bus::~Bus(){}

void Bus::setPuestos(int puestos) {
    if (puestos < 1) {
        throw ExcepcionPuestos();
    }
    this->puestos = puestos;
}
int Bus::getPuestos() const {return puestos;}
string Bus::getTipo() const {return "Bus";}

string Bus::informacion() const {
    return "Tipo: " + getTipo() + " " + Vehiculo::informacion() + ", Puestos: " + to_string(puestos);
}

int Bus::cobrar() const {
    int total = 14000 + (300 * DESENA);
    return total;
}
