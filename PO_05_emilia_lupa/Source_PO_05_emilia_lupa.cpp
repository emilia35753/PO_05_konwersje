#include "Header_PO_05_emilia_lupa.h"


//zadanie 1
TUlamek::TUlamek(float licznikk, float mianownikk) : licznik(licznikk), mianownik(mianownikk) //konstruktor dwuargumentowy, inicjalizacja na liscie inicjalzacyjnej
{}


int TUlamek::wypisz_licznik() {
	return licznik;
}

int TUlamek::wypisz_mianownik() {
	return mianownik;
}

void TUlamek::wypisz_ulamek() {
	cout << licznik << "/" << mianownik << endl;
}

TUlamek TUlamek::Mnozenie(TUlamek ulamek1, TUlamek ulamek2) {
	int l, m;
	l = ulamek1.licznik * ulamek2.licznik;
	m = ulamek1.mianownik * ulamek2.mianownik;
	TUlamek wynik_mnozenia(l, m); //przypisanie wartosci przy uzyciu konstruktora
	
	return wynik_mnozenia;
}

float TUlamek::Kwadrat(TUlamek ulamek1){
	float l, m;
	l = ulamek1.licznik * ulamek1.licznik;
	m = ulamek1.mianownik * ulamek1.mianownik;
	return l / m;
}

TUlamek::TUlamek(int licznik): licznik(licznik), mianownik(1) {} //konstruktor konwertujacy liczbe na ulamek

TUlamek::operator float() { //operator konwersji zmieniajacy ulamek na liczbe
	return licznik / mianownik;
}

//zadanie 2
TZespolona::TZespolona(double cz_rzecz, double cz_uroj)
	: cz_rzecz(cz_rzecz), cz_ur(cz_uroj)
{}

void Pokaz(TZespolona zesp) {
	cout << "[" << zesp.cz_rzecz << "," << zesp.cz_ur << "]" << endl;
}

//zadanie 3
void Stone_weight::wypisz_funty() {
	//masa_w_funtach = 14 * kamien + reszta_w_funtach;
	cout << "Masa w funtach to: " << masa_w_funtach << endl;
}

void Stone_weight::wypisz_kamienie() {
	//kamien = masa_w_funtach / 14;
	//reszta_w_funtach = masa_w_funtach % 14;
	cout << "Masa w kamieniach to: " << kamien << ", reszta w funtach to: " << reszta_w_funtach << endl;
}

Stone_weight::Stone_weight(double funty) {
	kamien = int (funty / ilosc_funtow_na_kamien);
	reszta_w_funtach = funty - kamien * ilosc_funtow_na_kamien;
	masa_w_funtach = funty;
}

Stone_weight::Stone_weight(double funty, int kamienie) { //zakladam ze funtow jest nie wiecej niz 14
	kamien = kamienie;
	reszta_w_funtach = funty;
	masa_w_funtach = funty + kamien * ilosc_funtow_na_kamien;
}

//zadanie 4
Fahrenheit::Fahrenheit(double celsjusz) {
	temperatura_Fahrenheita = 2 * celsjusz + 32;
}

Fahrenheit::operator int() {
	int kelvin = int((temperatura_Fahrenheita + 459.67) * 5 / 9);
	return kelvin;
}