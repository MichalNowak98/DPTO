#pragma once
#include<iostream>
class CZwierze
{
public:
	CZwierze() {};
	CZwierze(std::string _nazwa, double _waga) : nazwa(_nazwa), waga(_waga)
	{
		std::cout << "konstruktor zwirerze\n";
	};
	~CZwierze()
	{
		std::cout << "destruktor zwirerze\n";
	};
	std::string nazwa;
	double waga;
	virtual void zjedz() = 0;
};