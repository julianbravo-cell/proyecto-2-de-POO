#include "../include/Carro.hpp"
#include "../include/Bus.hpp"
#include "../include/Camion.hpp"
#include "../include/Excepcion.hpp"
#include "../include/Moto.hpp"
#include "../include/Operador.hpp"
#include "../include/Propietario.hpp"
#include "../include/Caseta.hpp"

#include <exception>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    vector <Registro> registros;
    Persona* operador = new Operador("Julian Andrey", "0024", "HO0024");
    Caseta cerroVerde = new Caseta(registros, operador);
    vector <Vehiculo*> vehiculos;
    Persona* forastero = new Propietario("Disney Hernan","0025",false);
    Persona* Vecino = new propietario("Jeison Bravo","0026",true);

    try {
        Vehiculo* carro1 = new Carro("ABC123", forastero, 4);
        Vehiculo* moto1 = new Moto("XYZ789", Vecino, 500);
        Vehiculo* camion1 = new Camion("LMN456", forastero, 3);
        Vehiculo
    }
   
}
    