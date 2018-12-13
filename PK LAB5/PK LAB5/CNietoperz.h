#pragma once
#include"CPtak.h"
#include"CSsak.h"
#include<string>
class CNietoperz : public CSsak, public CPtak
{
public:
	CNietoperz() : CSsak::CSsak(), CPtak::CPtak()
	{
		CSsak::nazwa = "Ptak";
		CSsak::waga = 1;
		CSsak::max_V = 1;
	}
	CNietoperz(std::string _nazwa, double _waga, int _max_V) : CSsak::CSsak(_nazwa, _waga, _max_V), CPtak::CPtak(_nazwa, _waga, _max_V)
	{
		std::cout << "konstruktor nietoperz\n";
	}
	~CNietoperz()
	{
		std::cout << "destruktor nietoperz\n";
	};
	//albo przeslonic metode albo uzyc operatora zasiegu
	void zjedz()
	{
		CSsak::zjedz();
		//std::cout << "Nietoperz " << CSsak::nazwa << " je";
	}
};