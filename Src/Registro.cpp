# include "../include/Registro.hpp"

Registro::Registro(string tipo, string placa, int cobro) : tipo(tipo), placa(placa), cobro(cobro) {}
Registro::~Registro(){}

void Registro::setPlaca(string placa) {this->placa = placa;}
string Registro::getPlaca() const {return placa;}

void Registro::setTipo(string tipo) {this->tipo = tipo;}
string Registro::getTipo() const {return tipo;}

void Registro::setCobro(int cobro) {this->cobro = cobro;}
int Registro::getCobro() const {return cobro;}

string Registro::informacion() const {
    return "REGISTRO. Placa: " + placa + ", Tipo: " + tipo + ", Cobro: " + to_string(cobro);
}

ostream &operator << (ostream &os, Registro registro)
{
    os << registro.informacion();
    return os;
}