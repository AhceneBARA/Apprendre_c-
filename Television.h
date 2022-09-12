#ifndef TELEVISION_H
#define TELEVISION_H
#include<iostream>
#include<string>

class Television{
//attributs
private:
	int chaine;
	bool etat_tv;
	char marque;
	int volume;
//méthodes
public:
	void Allumer();
	void Eteindre();
	void set_volume(int vol);
	void changer_de_chaine(int c);
	int get_volume();
	char get_marque();
	// constructeur
	Television(char marque);


};

#endif //TELEVISION_H