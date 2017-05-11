#include"Persona.h"
#include <string>
using namespace std;


class Persona{
	
     Persona::Persona();
	
     Persona::Persona(string nombre, string ID, string sexo, int edad){

	this->nombre=nombre;
	this->ID=ID;
	this->sexo=sexo;
	this->edad=edad;

     }

     string Persona::getNombre(){
	return nombre;
     }
     
     string Persona::getID(){
	return ID;
     }
     
     string Persona::getSexo(){
	return sexo;	
     }
  
     int Persona::getEdad(){
	return edad;
     }
  	
     void Persona::setNombre(string nNombre){
	nombre=nNombre;
     }
     
     void Persona::setID(string nID){
        ID=nID;
     }

     void Persona::setSexo(string nSexo){
        sexo=nSexo;
     }

     void Persona::setEdad(int nEdad){
        edad=nEdad;
     }

     
     
           	
     
};























