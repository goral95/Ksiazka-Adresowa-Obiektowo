#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}
