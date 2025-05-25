#include <iostream>
using namespace std;

class Fecha{
private:
    int _Dia, _Mes, _Anio;
public:
    Fecha(int d, int m, int a);
    
    void CargarFecha();
    void MostrarFecha();
    
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    
    int getDia();
    int getMes();
    int getAnio();
};

Fecha::Fecha(int d=0, int m=0, int a=0){}

void Fecha::CargarFecha(){
    cout << "Dia: ";
    cin >> _Dia;
    cout << "Mes: ";
    cin >> _Mes;
    cout << "A¤o: ";
    cin >> _Anio;
}
void Fecha::MostrarFecha(){
    cout << endl << "Fecha: " << _Dia << "/" << _Mes << "/" << _Anio << endl;
}

void Fecha::setDia(int d){
    if(d>=1 && d<=31){
      _Dia = d;
    }else{
      _Dia = 0;
    }
}
void Fecha::setMes(int m){
    if(m>=1 && m<=12){
      _Mes=m;
    }else{
      _Mes=0;
    }
}
void Fecha::setAnio(int a){
    if(a>=1900 && a<=2024){
      _Anio=a;
    }else{
      _Anio=0;
    }
}

int Fecha::getDia(){return _Dia;}
int Fecha::getMes(){return _Mes;}
int Fecha::getAnio(){return _Anio;}
