# pragma once
# include <Vehiculo.hpp>

class Carro : public Vehiculo {
    private:
    int pasajeros;

    public:
    Carro(string placa, int modelo, string color, bool isVecino, int pasajeros);
    ~Carro();
    
};
