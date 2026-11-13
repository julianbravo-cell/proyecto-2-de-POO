# include "../include/Camion.hpp"
#include "../include/Excepcion.hpp"

Camion::Camion(string placa, Persona* propietario, int ejes) : Vehiculo(placa, propietario), ejes(ejes) {
    if (ejes < 2) {
        throw ExcepcionEjes();
    }
}
Camion::~Camion(){}

void Camion::setEjes(int ejes) {
    if (ejes < 2) {
        throw ExcepcionEjes();
    }
    this->ejes = ejes;
}
int Camion::getEjes() const {return ejes;}
string Camion::getTipo() const {return "Camion";}
void Camion::agregarEje() {ejes++;}

string Camion::informacion() const {
    return "Tipo: " + getTipo() + " " + Vehiculo::informacion() + ", Ejes: " + to_string(ejes);
}

int Camion::cobrar() const {
    
    int total = (8000 + 500 * DESENA) * ejes;
    return total;
}