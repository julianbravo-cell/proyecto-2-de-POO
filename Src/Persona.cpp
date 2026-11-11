#include "../include/Persona.hpp"

Persona::Persona(string nombre, string documento) : nombre(nombre), documento(documento) {}
Persona::~Persona(){};

string Persona::getNombre() const { return nombre; }
string Persona::getDocumento() const { return documento; }