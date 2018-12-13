#pragma once
#include"CZwierze.h"
class CPtak : public CZwierze
{
private:
	int max_V;
public:
	void zjedz();
	CPtak();
	CPtak(std::string _nazwa, double _waga, int _max_V);
	~CPtak()
	{
		std::cout << "destruktor ptak\n";
	};
};