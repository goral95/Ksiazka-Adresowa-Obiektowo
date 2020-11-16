#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;



class KsiazkaAdresowa{
    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string nazwaPlikuzUzytkownikami, string nazwaPlikuZAdresatami): uzytkownikManager(nazwaPlikuzUzytkownikami)
    , NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        adresatManager = NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatManager;
        adresatManager = NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif // KSIAZKAADRESOWA_H
