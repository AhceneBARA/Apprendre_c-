#include<iostream>
#include<string>
//#include"biblio"

using namespace std;

class Television{
	int volume;
	int chaine;
	string marque;
	bool etat_tel;


	void Television::allumer(){ self->etat_tel=true;}
	int Television::get_volume(){self->volume=volume; return volume;}
	int Television::set_volume(int vol){self->volume=vol;}

	Television::television(string marque, bool etat_tel){self->marque=marque; self->etat_tel=etat_tel;}
}

int main() 
{   
	Television tv1("samsung",true);
	tv1.set_volume(20);
	tv1.get_volume();
	cout<< "hello wooooooorld"<< endl;


	return 0;

}