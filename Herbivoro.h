#include <iostream>
#include "Dinosaurio.h"
#include <string>
#ifndef HERBIVORO_H
#define HERBIVORO_H

using namespace std;

class Herbivoro: public Dinosaurio{

    public:
		
	int dientes;
	string raza;	

	Herbivoro();
	Herbivoro(int, string);
	Herbivoro(string, double,double,string,double,int,string);

	
 	int getDientes();	
	string getRaza();
	
	void setDientes(int);
	void setRaza(string);
		

};

#endif




