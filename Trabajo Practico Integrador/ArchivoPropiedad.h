#pragma once
#include <string>
#include "clsPropiedad.h"

class ArchivoPropiedad{
    private:
        std::string _nombreArchivo;

    public:
        ArchivoPropiedad(std::string nombreArchivo);
        bool Guardar(Propiedad propiedad);
        bool Guardar(Propiedad propiedad, int posicion);
        int Buscar(int IDPropiedad);
        Propiedad Leer(int posicion);
        int CantidadRegistros();
        void Leer(int cantidadRegistros, Propiedad *vector);
};
