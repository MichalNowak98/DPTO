#include<iostream>
#include"CNietoperz.h"
#include"CPtak.h"
#include"CSsak.h"
int main()
{
	//CSsak pies("pies", 25.4, 3); //, kot("kot", 12, 4);
	//CPtak skowronek("skowronek", 2.4, 6);//, wrobel("wrobelek", 1, 8);
	CNietoperz brzydal1("gacek", 4, 4);// , brzydal2("nazwa", 3, 5);
	brzydal1.~CNietoperz();
	/*std::cout << sizeof(pies);
	std::cout << "\n";
	std::cout << sizeof(skowronek);
	std::cout << "\n";
	std::cout << sizeof(brzydal1);
	std::cout << "\n";*/

	//1 albo przeslonic metode albo uzyc operatora zasiegu

	//2a konstruktory: zwierze, ssak, zwierze, ptak, nietoperz destruktory: nietoperz, ptak, zwierze, ssak, zwierze
	//2b konstruktory: ssak, zwierze, ptak, nietoperz, destruktory: nietoperz, ptak, zwierzze, ssak, zwierze
	//2c konstruktory: zwierze, ssak, ptak, nietoperz destruktory: nietoperz, ptak, ssak, zwierze, zwierze
	//2d konstruktory: ssak, ptak, nietoperz, destruktory: nietoperz, ptak, ssak, zwierze

	//3 nie wp³ynie to na problem wieloznacznoœci
	
	//4 

	//5		nievirtualne dziedziczenie dla obu klas	ssak: 56, ptak: 56, nietoperz: 112
	//		1 klasa	dziedziczy wirtualnie			ssak: 56, ptak: 64, nietoperz: 120
	//		2klasy dziedzicza wirtualnie			ssak: 64, ptak: 64, nietoperz: 72

	//6 nie, komunikat: "duplicate base class name"
	return 0;
}