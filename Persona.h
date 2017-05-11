#include<string>

#ifndef PERSONA_H
#define PERSONA_H
using namespace std;

class Persona{

   public:
	
	string nombre;
	string ID;
	string sexo;
	int edad;
	
	Persona();
	Persona(string nombre, string ID, string sexo, int edad);
	
	string getNombre();
	void setNombre(string);
	string getID();
	void setID(string);
	string getSexo();
 	void setSexo(string);
	int getEdad();	
	void setEdad(int);

	
	


};


#endif


























