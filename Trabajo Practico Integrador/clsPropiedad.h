#pragma once

class Propiedad{ 
    private: 
	    int _IDPropiedad, _Tipo, _PrecioMensual;
	    char  _Ubicacion[100];
	    bool _Disponible;       

    public: 
	    Propiedad(); 
	    Propiedad(int _IDPropiedad, int _Tipo, char _Ubicacion[100], int _PrecioMensual, bool _Disponible); 

      int getIDPropiedad(); 
      int getTipo(); 
      char getUbicacion(); 
      int getPrecioMensual(); 
      bool getDisponible(); 

      void setIDPropiedad(); 
      void setTipo(); 
      void setUbicacion(); 
      void setPrecioMensual(); 
      void setDisponible();
};
