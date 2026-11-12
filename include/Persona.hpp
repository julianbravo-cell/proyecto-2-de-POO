#pragma once
#include <iostream>
#include <string>

using namespace std;

class Persona{

     protected:
    string nombre;
    string documento;

    public:
    Persona(string nombre, string documento);
    virtual ~Persona();

    virtual string getDescripcion() const = 0;
    string getNombre() const;
    string getDocumento() const;
    virtual bool esVecino() const {return false;}
};
   
