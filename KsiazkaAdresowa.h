#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;



class KsiazkaAdresowa{
    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;
public:
    KsiazkaAdresowa(string nazwaPlikuzUzytkownikami, string nazwaPlikuZAdresatami): uzytkownikManager(nazwaPlikuzUzytkownikami)
    , adresatManager(nazwaPlikuZAdresatami){
        uzytkownikManager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif // KSIAZKAADRESOWA_H
