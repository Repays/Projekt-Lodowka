#pragma once
#include "Jedzenie.h"


class Nabial : public Jedzenie
{
public:
	Nabial(const string nazwa, const int kalorie,const float bialko,const float weglowodany,const float tluszcze,const int ilosc,const jednoski jednostka);

	void Wyswietl();
};