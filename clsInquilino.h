#pragma once

class Inquilino { 
    private: 
	    int _IDInquilino; 
      char _Nombre [20]; 
      char _Apellido [20]; 
      char _Telefono [15]; 
      char _Direccion [25]; 

    public: 
	    Inquilino (); 
	    Inquilino (int _IDInquilino, char _Nombre [20], char _Apellido [20], char _Telefono [15], char _Direccion[25]); 

      int getIDInquilino(); 
      char getNombre (); 
      char getApellido (); 
      char getTelefono (); 
      char getDireccion (); 

      void setIDInquilino (); 
      void setNombre (); 
      void setApellido (); 
      void setTelefono (); 
      void setDireccion (); 

};
