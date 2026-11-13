# include "../include/Caseta.hpp"
#include <stdexcept>

Caseta::Caseta(Persona* operador, vector<Registro> registros) : operador(operador), registros(registros) {}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador) {this->operador = operador;}
void Caseta::agregarRegistro(Vehiculo* &vehiculo) {
    if (vehiculo == nullptr) {
        throw invalid_argument("No se puede registrar un vehiculo nulo.");
    }

    Registro registro(vehiculo->getTipo(), vehiculo->getPlaca(), vehiculo->cobrar());
    registros.push_back(registro);
}

void Caseta::mostrarRegistros() const {

   cout << "CASETA - REGISTROS" << endl;

    for(const Registro& registro : registros) {

        cout << "_______________________________________" << endl;
        if (operador != nullptr) {
            cout << *operador << endl;
        } else {
            cout << "Operador: no asignado" << endl;
        }
        cout << "_______________________________________" << endl;
        cout << registro << endl;
        cout << "_______________________________________" << endl;

          
     }
}