#include "Dinosaurio.h"
#include <string>
#include "Persona.h"
using namespace std;

  Dinosaurio::Dinosaurio(){
  
  }
  
  Dinosaurio::Dinosaurio(string nombre,double altura,double peso, string sexo, double largo){
    this->nombre = nombre;
    this->altura = altura;
    this->peso = peso;
    this->sexo = sexo;
    this->largo = largo;
  }

  string Dinosaurio::getNombre(){
    return nombre;
  }

  double Dinosaurio::getAltura(){
    return altura;
  }
  double Dinosaurio::getPeso(){
    return peso;
  }
  string Dinosaurio::getSexo(){
    return sexo;
  }
  double Dinosaurio::getLargo(){
    return largo;
  }
  Persona Dinosaurio::getCuidador(){
    return this->cuidador;
  }

  void Dinosaurio::setNombre(string pNombre){
    nombre = pNombre;
  }
  void Dinosaurio::setAltura(double pAltura){
    altura = pAltura;
  }
  void Dinosaurio::setPeso(double pPeso){
    peso = pPeso;
  }
  void Dinosaurio::setSexo(string pSexo){
    sexo = pSexo;
  }
  void Dinosaurio::setLargo(double pLargo){
    largo = pLargo;
  }
  void Dinosaurio::setCuidador(Persona pCuidador){
    cuidador = pCuidador;
  }


