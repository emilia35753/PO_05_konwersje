#pragma once
#include <iostream>
using namespace std;

//zadanie 1
class TUlamek {
private:
	int licznik;
	int mianownik;
public:
	TUlamek(float licznikk, float mianownikk); //konstruktor dwuargumentowy, inicjalizacja na liscie inicjalzacyjnej w Source
	int wypisz_licznik(); //metoda
	int wypisz_mianownik(); //metoda
	void wypisz_ulamek(); //metoda
	TUlamek Mnozenie(TUlamek ulamek1, TUlamek ulamek2);
	float Kwadrat(TUlamek ulamek1);
	TUlamek(int licznik); //konstruktor konwertujacy liczbe na ulamek
	operator float(); //operator konwersji zmieniajacy ulamek na liczbe
};

//zadanie 2
class TZespolona {
private:
	double cz_rzecz, cz_ur;
public:
	TZespolona(double cz_rzecz = 0, double cz_uroj = 0);
	friend void Pokaz(TZespolona zesp);
};

//zadanie 3
class Stone_weight {
private:
	const int ilosc_funtow_na_kamien = 14;
	int kamien;
	double reszta_w_funtach;
	double masa_w_funtach;
public:
	Stone_weight() { kamien = 0; reszta_w_funtach = 0; masa_w_funtach = 0; } //konstruktor domyslny zeruje obiekt
	void wypisz_funty();
	void wypisz_kamienie();
	Stone_weight(double funty);
	Stone_weight(double funty, int kamienie);
};

//zadanie 4
class Fahrenheit {
public:
	double temperatura_Fahrenheita;
	Fahrenheit(double celsjusz);
	operator int();
};