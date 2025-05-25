#pragma once
#include <string>
#include "clsInquilino.h"

class ArchivoInquilino{
    private:
        std::string _nombreArchivo;

    public:
        ArchivoInquilino(std::string nombreArchivo);
        bool Guardar(Inquilino inquilino);
        bool Guardar(Inquilino inquilino, int posicion);
        int Buscar(int IDInquilino);
        Inquilino Leer(int posicion);
        int CantidadRegistros();
        void Leer(int cantidadRegistros, Inquilino *vector);
};
