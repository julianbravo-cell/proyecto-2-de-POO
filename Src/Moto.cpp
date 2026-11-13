# include "../include/Moto.hpp"

Moto::Moto(string placa, Persona* propietario, int cilindrada) : Vehiculo(placa, propietario), cilindrada(cilindrada) {}
Moto::~Moto(){}

void Moto::setCilindrada(int cilindrada) {this->cilindrada = cilindrada;}
int Moto::getCilindrada() const {return cilindrada;}
string Moto::getTipo() const {return "Moto";}
bool Moto::getAltoCilindraje() const {return cilindrada > 400 ? true : false;}

string Moto::informacion() const {
    const string nombrePropietario = propietario != nullptr
        ? propietario->getNombre()
        : "no asignado";
    return "Tipo: " + getTipo() + ", Placa: " + getPlaca() + ", Cilindraje: " + to_string(cilindrada) + ", Alto cilindraje: " + (getAltoCilindraje() ? "Si" : "No") + ", Propietario: " + nombrePropietario;
}

int Moto::cobrar() const {
    int total = 3000 + (100 * UNIDAD);

    if(propietario != nullptr && propietario->esVecino()) {
        total = total * (100 - CENTENA) / 100;
    }
    return total;
}