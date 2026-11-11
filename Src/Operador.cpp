# include "../include/Operador.hpp"

Operador::Operador(string nombre, string documento, string codigo) : Persona(nombre, documento), codigo(codigo) {}
Operador::~Operador(){} 

string Operador::getCodigo() const { return codigo; }
string Operador::getDescripcion() const 
{
    return "OPERADOR: " + nombre + ", DOCUMENTO: " + documento + ", CODIGO:  " + codigo;
}