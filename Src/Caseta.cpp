# include "../include/Caseta.hpp"

Caseta::Caseta(Persona* operador, vector<Registro> registros) : operador(operador), registros(registros) {}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador) {this->operador = operador;}
void Caseta::agregarRegistro(Vehiculo* &vehiculo) {
 
    Registro registro(vehiculo->getTipo(), vehiculo->getPlaca(), vehiculo->cobrar());
    registros.push_back(registro);
}

void Caseta::mostrarRegistros() const {

   cout << "CASETA - REGISTROS" << endl;

    for(const Registro& registro : registros) {

        cout << "_______________________________________" << endl;
        cout << *operador << endl;
        cout << "_______________________________________" << endl;
        cout << registro << endl;
        cout << "_______________________________________" << endl;

          
     }
}