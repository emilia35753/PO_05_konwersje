# Konstruktory konwertujące i operatory konwersji w C++ / Converting Constructors and Conversion Operators in C++
 
> 🇵🇱 [Polski] | 🇬🇧 [English] (below)
 
---
 
## 🇵🇱 Opis
 
Projekt z przedmiotu **Programowanie obiektowe** skupiający się na konstruktorach konwertujących, operatorach konwersji oraz funkcjach zaprzyjaźnionych w C++. Projekt podzielony jest na trzy pliki zgodnie z dobrą praktyką: plik nagłówkowy, implementacja i funkcja główna.
 
### Struktura projektu
 
```
├── Header_PO_05_emilia_lupa.h                     # deklaracje klas
├── Source_PO_05_emilia_lupa.cpp                   # implementacja metod
└── Main_PO_05_emilia_lupa.cpp                     # funkcja główna
```
 
### Co robi program
 
Program zawiera cztery niezależne zadania:
 
- **`TUlamek`** – klasa reprezentująca ułamek zwykły z konstruktorem dwuargumentowym, konstruktorem konwertującym (int → ułamek), operatorem konwersji (ułamek → float) oraz metodami mnożenia ułamków i podnoszenia do kwadratu
- **`TZespolona`** – klasa liczby zespolonej z konstruktorem domniemanym i zaprzyjaźnioną funkcją `Pokaz`; demonstracja tworzenia obiektów na różne sposoby (w tym dynamicznie)
- **`Stone_weight`** – klasa reprezentująca masę w dwóch jednostkach (kamienie i funty) z trzema konstruktorami i przeliczaniem między jednostkami
- **`Fahrenheit`** – klasa temperatury z konstruktorem konwertującym (°C → °F) i operatorem konwersji (°F → K)
### Technologie
 
- C++
- Kompilacja: g++ / dowolny kompilator C++
### Uruchomienie
 
```bash
g++ main.cpp source.cpp -o program
./program
```
 
---
 
## 🇬🇧 Description
 
A coursework project for **Object-Oriented Programming** focusing on converting constructors, conversion operators, and friend functions in C++. The project is split across three files following good practice: a header, an implementation file, and a main file.
 
### Project structure
 
```
├── Header_PO_05_emilia_lupa.h                     # class declarations
├── Source_PO_05_emilia_lupa.cpp                   # method implementations
└── Main_PO_05_emilia_lupa.cpp                     # main function
```
 
### What the program does
 
The program covers four independent tasks:
 
- **`TUlamek`** – a class representing a fraction with a two-argument constructor, a converting constructor (int → fraction), a conversion operator (fraction → float), and methods for multiplying fractions and squaring
- **`TZespolona`** – a complex number class with a default constructor and a friend function `Pokaz`; demonstrates creating objects in various ways including dynamic allocation
- **`Stone_weight`** – a class representing mass in two units (stones and pounds) with three constructors and unit conversion logic
- **`Fahrenheit`** – a temperature class with a converting constructor (°C → °F) and a conversion operator (°F → K)
### Technologies
 
- C++
- Build: g++ / any C++ compiler
### How to run
 
```bash
g++ main.cpp source.cpp -o program
./program
```
 
---
 
*Projekt studencki / Student project*
