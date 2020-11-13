#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"

using namespace std;



class KsiazkaAdresowa{
    UzytkownikManager uzytkownikManager;
public:
    KsiazkaAdresowa(string nazwaPlikuzUzytkownikami): uzytkownikManager(nazwaPlikuzUzytkownikami){
        uzytkownikManager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif // KSIAZKAADRESOWA_H
