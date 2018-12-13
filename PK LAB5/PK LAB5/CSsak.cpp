#include "CSsak.h"
#include<string>

void CSsak::zjedz()
{
	std::cout << "Ssak " << nazwa << " je";
}

CSsak::CSsak() :CZwierze()
{
	nazwa = "Ssak";
	waga = 1;
	max_V = 1;
}

CSsak::CSsak(std::string _nazwa, double _waga, int _max_V) :CZwierze(_nazwa, _waga)
{
	std::cout << "konstruktor ssak\n";
	max_V = _max_V;
};
