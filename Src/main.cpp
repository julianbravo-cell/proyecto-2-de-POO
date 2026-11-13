#include "../include/Bus.hpp"
#include "../include/Carro.hpp"
#include "../include/Camion.hpp"
#include "../include/Caseta.hpp"
#include "../include/Excepcion.hpp"
#include "../include/Moto.hpp"
#include "../include/Operador.hpp"
#include "../include/Propietario.hpp"

#include <exception>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

void liberarObjetos(vector<Vehiculo*>& vehiculos, vector<Persona*>& personas)
{
    for (Vehiculo* vehiculo : vehiculos) {
        delete vehiculo;
    }
    vehiculos.clear();

    for (Persona* persona : personas) {
        delete persona;
    }
    personas.clear();
}

int main()
{
    vector<Persona*> personas;
    vector<Vehiculo*> vehiculos;
    Caseta* cerroVerde = nullptr;

    try {
        personas.reserve(3);
        vehiculos.reserve(6);

        Persona* operador = new Operador("Julian Andrey", "0024", "HO0024");
        personas.push_back(operador);
        Persona* forastero = new Propietario("Disney Hernan", "0025", false);
        personas.push_back(forastero);
        Persona* vecino = new Propietario("Jeison Bravo", "0026", true);
        personas.push_back(vecino);

        vector<Registro> registros;
        cerroVerde = new Caseta(operador, registros);
        cerroVerde->setOperador(operador);

        Vehiculo* carro = new Carro("ABC123", forastero, 3);
        vehiculos.push_back(carro);
        cout << "Prueba 1 / Carro ABC123, 3 pasajeros, propietario NO vecino, Paga: " << carro->cobrar() << endl;

        Vehiculo* carroRepetido = new Carro("ABC123", forastero, 3);
        vehiculos.push_back(carroRepetido);
        cout << "Repeticion del caso del carro sin descuento: "
             << carroRepetido->cobrar() << endl;

        carro->setPropietario(vecino);
        cout << "Prueba 2 / El mismo carro, ahora con un propietariovecino, Paga: " << carro->cobrar() << endl;

        Moto* motoUrbana = new Moto("XYZ45A", vecino, 125);
        vehiculos.push_back(motoUrbana);
        cout << "Prueba 3 / Moto XYZ45A de 125 cc, propietario vecino, Paga: " << motoUrbana->cobrar() << endl;

        Moto* motoGrande = new Moto("MOT650", nullptr, 650);
        vehiculos.push_back(motoGrande);
        cout << "Prueba 4 / Moto MOT650 de 650 cc, sin propietario, Paga: " << motoGrande->cobrar()
             << ", alto cilindraje: "
             << (motoGrande->getAltoCilindraje() ? "si" : "no") << endl;

        Bus* bus = new Bus("BUS777", vecino, 38);
        vehiculos.push_back(bus);
        cout << "Prueba 5 / Bus BUS777 de 38 puestos, propietario vecino, Paga: " << bus->cobrar() << endl;

        Camion* camion = new Camion("CAM301", nullptr, 3);
        vehiculos.push_back(camion);
        cout << "Prueba 6 / Camion CAM301 de 3 ejes, sin propietario, Paga: " << camion->cobrar() << endl;
        camion->agregarEje();

        cout << "Prueba 7 / El mismo camion despues de agregarle un eje, Paga: "
             << camion->cobrar() << endl;

        cout << "Prueba 8 / carro con placa vacia: ";
        try {
            Vehiculo* carroInvalido = new Carro("", forastero, 2);
            vehiculos.push_back(carroInvalido);
            cout << "no se detecto el error" << endl;
        } catch (const ExcepcionPlaca& error) {
            cout << error.what() << endl;
        }

        cout << "Prueba 9 / camion con un eje: ";
        try {
            Camion* camionInvalido = new Camion("CAM001", forastero, 1);
            vehiculos.push_back(camionInvalido);
            cout << "no se detecto el error" << endl;
        } catch (const ExcepcionEjes& error) {
            cout << error.what() << endl;
        }

        Vehiculo* pasoPorCaseta[] = {carro, motoUrbana, bus, camion};
        map<string, int> cantidadPorTipo;
        int recaudoTotal = 0;

        for (Vehiculo* vehiculo : pasoPorCaseta) {
            cerroVerde->agregarRegistro(vehiculo);
            recaudoTotal += vehiculo->cobrar();
            ++cantidadPorTipo[vehiculo->getTipo()];
        }

        cout << "Prueba 10 / recaudo de los casos 2, 3, 5 y 7: "
             << recaudoTotal << endl;
        for (const auto& categoria : cantidadPorTipo) {
            cout << categoria.first << ": " << categoria.second << endl;
        }
        cerroVerde->mostrarRegistros();
    } catch (const exception& error) {
        cerr << "Error inesperado: " << error.what() << endl;
        delete cerroVerde;
        liberarObjetos(vehiculos, personas);
        return 1;
    }

    delete cerroVerde;
    liberarObjetos(vehiculos, personas);
    return 0;
}
