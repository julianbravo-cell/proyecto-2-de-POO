# include "../include/Carro.hpp"

Carro::Carro(string placa, Persona* propietario, int pasajero) : Vehiculo(placa, propietario), pasajero(pasajero) {}
Carro::~Carro(){}   

void Carro::setPasajero(int pasajero) {this->pasajero = pasajero;}
int Carro::getPasajero() const {return pasajero;}
string Carro::getTipo() const {return "Carro";}

void Carro::subirPasajero() {pasajero++;}

string Carro::informacion() const {
    const string propietarioInfo = propietario != nullptr
        ? propietario->getDescripcion()
        : "PROPIETARIO: no asignado";
    return getTipo() + " " + Vehiculo::informacion() + " Pasajeros: " + to_string(pasajero) + " " + propietarioInfo;
}

int Carro::cobrar() const {
    int total = 10000 + (200 * UNIDAD);

    if(propietario != nullptr && propietario->esVecino()) {
        total = total * 80 / 100;
    }
    return total;
} 

