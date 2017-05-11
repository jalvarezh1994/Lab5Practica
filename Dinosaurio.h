#ifndef DINOSAURIO_H
#define DINOSAURIO_H

#include <string>
#include "Persona.h"
using namespace std;

class Dinosaurio{

  public:
    string nombre;
    double altura;
    double peso;
    string sexo;
    double largo;
    Persona cuidador;

    Dinosaurio();
    Dinosaurio(string, double,double,string,double);

    string getNombre();
    double getAltura();
    double getPeso();
    string getSexo();
    double getLargo();
    Persona getCuidador();

    void setNombre(string);
    void setAltura(double);
    void setPeso(double);
    void setSexo(string);
    void setLargo(double);
    void setCuidador(Persona);
};

#endif 
