#include<iostream>
#include "Television.h"
#include<string>
using namespace std;

//definition du constructeur
Television::Television(char marque)
{
	this->marque = marque;
	this->etat_tv = false;
}

void Television::Allumer()
{
	this->etat_tv = true;
}

void Television::Eteindre()
{
	this->etat_tv = false;
}
	
void Television::set_volume(int vol)
{
	this->volume = vol;
}

void Television::changer_de_chaine(int c)
{
	this->chaine = c;
}

int Television::get_volume()
{
	cout<<"volume est :"<<volume<<endl;
	return volume;
}

char Television::get_marque()
{
	cout<<"la marque est\n"<<marque<<endl;
	return marque;
}



