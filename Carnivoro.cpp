#include <iostream>
#include <string>
#include "Carnivoro.h"
#include "Dinosaurio.h"

using namespace std;

Carnivoro::Carnivoro(){
	
}

Carnivoro::Carnivoro(string Nombre,double Altura,double Peso, string Sexo,double Longitud,string OrganoDepredador,string CazadorCarronero){
	this->nombre=Nombre;
	this->altura=Altura;
	this->peso=Peso;
	this->sexo=Sexo;
	this->largo=Longitud;
}

string Carnivoro::getOrganoDepredador(){
	return OrganoDepredador;
}

void Carnivoro::setOrganoDepredador(string OrganoDepredador){
	this->OrganoDepredador=OrganoDepredador;
}

void Carnivoro::setCazadorCarronero(string CazadorCarronero){
	this->CazadorCarronero=CazadorCarronero;
}

string Carnivoro::getCazadorCarronero(){
	return this->CazadorCarronero;
}
