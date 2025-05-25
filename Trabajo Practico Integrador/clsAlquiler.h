#pragma once
#include "clsFecha.h"

class Alquiler{ 
    private: 
      int _IDAlquiler, _IDPropiedad, _IDInquilino, _Estado;
      Fecha _FechaCreacion, _FechaVencimiento;

    public: 
	    Alquiler();
	    Alquiler(_IDAlquiler, _IDPropiedad, _IDInquilino, _FechaCreacion, _FechaVencimiento, _Estado); 

      int getIDAlquiler(); 
      int getIDPropiedad(); 
      int getIDInquilino(); 
      Fecha getFechaCreacion(); 
      Fecha getFechaVencimiento();
      int getEstado();

      void setIDAlquiler(); 
      void setIDPropiedad(); 
      void setIDInquilino(); 
      void setFechaCreacion(); 
      void setFechaVencimiento();
      void setEstado();
};
