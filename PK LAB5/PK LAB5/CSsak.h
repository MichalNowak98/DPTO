#pragma once
#include"CZwierze.h"
class CSsak : public virtual CZwierze
{
public:
	int max_V;
	void zjedz();
	CSsak();
	CSsak(std::string _nazwa, double _waga, int _max_V);
	~CSsak() 
	{
		std::cout << "destruktor ssak\n";
	};
};