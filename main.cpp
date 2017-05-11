#include <iostream>
#include <vector>
#include "Dinosaurio.h"
#include "Persona.h"
#include <string>

using namespace std;
/*vector<Dinosaurio> Dinosaurios;
vector<Persona> Personas;*/

int main(){
  vector<Dinosaurio>Dinosaurios;
  vector<Persona>Personas;
 /* Dinosaurio dino;
  Persona daniel;
  dino.setNombre("juan");
  dino.setAltura(34);
  //cout<<dino.getAltura()<<endl;
  daniel.setNombre("pedro");
  //string nombre = daniel.getNombre();
  //string nombre = dino.getAltura;
  //cout<<nombre;
  //
  //
  Dinosaurios.push_back(dino);
  cout<<Dinosaurios[0].getNombre();*/
  bool vivo = true;
  while(vivo){
	cout<<"Menú"<<endl;
        cout<<"1. Agregar"<<endl;
        cout<<"2. Listar"<<endl;
        cout<<"3. Modificar"<<endl;
        cout<<"4. Eliminar"<<endl;
        cout<<"5. Salir"<<endl;
        int opc;
        cin>>opc;
        switch(opc){
          case 1:{
			      cout<<"¿Qué desea agregar?"<<endl;
			      cout<<"1. Persona"<<endl;
			      cout<<"2. Dinosaurio"<<endl;
            int op;
            cin>>op;
            switch(op){
              case 1:{
                string nombre;       
                string ID;
                string sexo;
                int edad;
                cout<<"Ingrese el nombre: ";
                cin>>nombre;
                cout<<"Ingrese el ID: ";
                cin>>ID;
                cout<<"Ingrese el sexo: ";
                cin>>sexo;
                cout<<"Ingrese la edad: ";
                cin>>edad;
                Persona nn(nombre,ID,sexo,edad);
                Personas.push_back(nn);
                break;
              }
            }
            break;
          }
          case 2:{
			      cout<<"¿Qué desea listar?"<<endl;
			      cout<<"1. Personas"<<endl;
			      cout<<"2. Dinosaurio"<<endl;
            int op;
            cin>>op;
            switch(op){
              case 1:{
                for(int i=0;i<Personas.size();i++){
                  cout<<Personas[i].getNombre()<<endl;
                }  
              }
            }
              break;
          }
          case 3:{
			      cout<<"Modificar"<<endl;
			      cout<<"1. Persona"<<endl;
			      cout<<"2. Dinosaurio"<<endl;
            break;
          }
          case 4:{
			      cout<<"¿Qué desea eliminar?"<<endl;
			      cout<<"1. Persona"<<endl;
			      cout<<"2. Dinosaurio"<<endl;
            break;
          }
          case 5:{
            vivo = false;     
            break;
            }
        }
  }
	return 0;
}

void agregarPersona(){
//	if()
}

void agregarDinosaurio(){
	
}
