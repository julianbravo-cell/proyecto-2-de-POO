# include "../include/Excepcion.hpp"

ExcepcionPlaca::ExcepcionPlaca()
    : std::runtime_error("Error: la placa no puede estar vacia.") {
}

ExcepcionEjes::ExcepcionEjes()
    : std::runtime_error("Error: el camion debe tener minimo dos ejes.") {
}

ExcepcionPuestos::ExcepcionPuestos()
    : std::runtime_error("Error: el bus debe tener minimo un puesto.") {
}