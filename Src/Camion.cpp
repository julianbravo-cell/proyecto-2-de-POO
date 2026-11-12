# include "../include/Camion.hpp"

Camion::Camion(string placa, Persona* propietario, int ejes) : Vehiculo(placa, propietario), ejes(ejes) {}
Camion::~Camion(){}

void Camion::setEjes(int ejes) {this->ejes = ejes;}
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