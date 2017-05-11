#include <iostream>
#include <vector>
#include "Dinosaurio.h"
#include "Persona.h"

using namespace std;
vector<Dinosaurio> 

int main(){
	cout<<"Menú"<<endl;
        cout<<"1. Agregar"<<endl;
        cout<<"2. Listar"<<endl;
        cout<<"3. Modificar"<<endl;
        cout<<"4. Eliminar"<<endl;
        int opc;
        switch(opc){
                case 1:{
			cout<<"¿Qué desea agregar?"<<endl;
			cout<<"1. Persona"<<endl;
			cout<<"2. Dinosaurio"<<endl;
                }
                case 2:{
			cout<<"¿Qué desea listar?"<<endl;
			cout<<"1. Personas"<<endl;
			cout<<"2. Dinosaurio"<<endl;
                }
                case 3:{
			cout<<"Modificar"<<endl;
			cout<<"1. Persona"<<endl;
			cout<<"2. Dinosaurio"<<endl;
                }
                case 4:{
			cout<<"¿Qué desea eliminar?"<<endl;
			cout<<"1. Persona"<<endl;
			cout<<"2. Dinosaurio"<<endl;
                }
        }
	return 0;
}
