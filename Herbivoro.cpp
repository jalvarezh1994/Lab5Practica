#include "Herbivoro.h"
#include <string>
#include "Dinosaurio.h"

using namespace std;

Herbivoro::Herbivoro(){


}


Herbivoro::Herbivoro(string nombre, double altura, double peso, string sexo, double largo, int dientes, string raza){

   this-> sexo=sexo;
   this-> nombre=nombre;
   this-> altura=altura;
   this-> peso=peso;
   this-> largo=largo;
   this-> dientes=dientes;
   this-> raza=raza;

}

int Herbivoro::getDientes(){
	return dientes;
}

string Herbivoro::getRaza(){
	return raza;
}

void Herbivoro::setDientes(int pDientes){
	dientes=pDientes;
}

void Herbivoro::setRaza(string pRaza){
	raza=pRaza;
}





















