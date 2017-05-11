#include <string>
#include "Dinosaurio.h"
#ifndef CARNIVORO_H
#define CARNIVORO_H

using namespace std;

class Carnivoro: public Dinosaurio{
	private:
		string OrganoDepredador;
		string CazadorCarronero;
	public: 
		Carnivoro();
		Carnivoro(string,double,double,string,double,string,string);
		string getOrganoDepredador();
		void setOrganoDepredador(string);
		string getCazadorCarronero();
		void setCazadorCarronero(string);
};

#endif
