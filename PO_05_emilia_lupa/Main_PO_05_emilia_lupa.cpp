#include "Header_PO_05_emilia_lupa.h"

int main() {
	
	//zadanie 1
	/*TUlamek ulamek1(1, 5), ulamek2(2, 5); //nadanie wartosci przy uzyciu konstruktora dwuargumentowego

	cout << "ulamek1 * ulamek2: ";
	ulamek1.Mnozenie(ulamek1, ulamek2).wypisz_ulamek();

	cout << "ulamek1 * 10: ";
	ulamek1.Mnozenie(ulamek1, 10).wypisz_ulamek();

	float wynik = ulamek2.Kwadrat(ulamek2);
	cout << "ulamek2 ^2: " << wynik;
	*/

	//zadanie 2
	/*TZespolona zesp1; //dwa domniemane argumenty
	TZespolona zesp2(3); // jeden domniemany argument
	Pokaz(zesp1);
	Pokaz(zesp2);
	TZespolona* zesp3 = new TZespolona(4); //obiekt stworzony dynamicznie z jednym domniemanym argumentem
	Pokaz(*zesp3);
	delete zesp3;
	*/

	//zadanie 3
	/*Stone_weight obiekt1;
	obiekt1.wypisz_funty();
	obiekt1.wypisz_kamienie();

	Stone_weight obiekt2(16);
	obiekt2.wypisz_funty();
	obiekt2.wypisz_kamienie();

	Stone_weight obiekt3(2, 3);
	obiekt3.wypisz_funty();
	obiekt3.wypisz_kamienie();
	*/

	//zadanie 4
	/*Fahrenheit obiekt4(4);
	cout << "4 stopnie Celsjusza to: " << obiekt4.temperatura_Fahrenheita << " stopni Fahrenheita" << endl;
	int wynik = obiekt4.operator int();
	cout << "4 stopnie Celsjusza to: " << wynik << " stopni kelvina" << endl;
	*/

	return 0;
}