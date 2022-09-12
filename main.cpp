#include<iostream>
#include<string>
#include<cstdlib>
#include "Television.h"

using namespace std;

int main()
{
	Television tv1('s');
	tv1.Allumer();
	tv1.set_volume(10);
	tv1.get_volume();
	tv1.changer_de_chaine(3);
	tv1.get_marque();


	return 0;

}