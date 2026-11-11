# include "include/Propietario.hpp"

Propietario::Propietario(string nombre, string documento, bool esvecino) : Persona(nombre, documento), esvecino(esvecino) {}
Propietario::~Propietario(){}

bool Propietario::getEsvecino() const {return esvecino;}
string Propietario::getDescripcion () const
 {
    return "PROPIETARIO: " + nombre + ", DOCUMENTO: " + documento + ", ES VECINO:  " + (esvecino ? "si" : "no" );
 }