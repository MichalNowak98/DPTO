#include "CPtak.h"
#include <string>

void CPtak::zjedz()
{
	std::cout << "Ptak " << nazwa << " je";
}

CPtak::CPtak() :CZwierze()
{
	nazwa = "Ptak";
	waga = 1;
	max_V = 1;
}

CPtak::CPtak(std::string _nazwa, double _waga, int _max_V) :CZwierze(_nazwa, _waga)
{
	std::cout << "konstruktor ptak\n";
	max_V = _max_V;
}
