#pragma once
#include <string>
#include "clsAlquiler.h"

class ArchivoAlquiler{
    private:
        std::string _nombreArchivo;

    public:
        ArchivoAlquiler(std::string nombreArchivo);
        bool Guardar(Alquiler alquiler);
        bool Guardar(Alquiler alquiler, int posicion);
        int Buscar(int IDAlquiler);
        Alquiler Leer(int posicion);
        int CantidadRegistros();
        void Leer(int cantidadRegistros, Alquiler *vector);
};
