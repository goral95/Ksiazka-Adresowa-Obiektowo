#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikManager.logowanieUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikManager.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata(){
    adresatManager.dodajAdresata(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatManager.wyswietlWszystkichAdresatow();
}

