#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"


using namespace std;

class AdresatManager{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
public:
    AdresatManager(string nazwaPlikuZAdresatami): plikZAdresatami(nazwaPlikuZAdresatami){
        idOstatniegoAdresata = 0;
    };
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyczyscWektorAdresatow();
};

#endif // ADRESATMANAGER_H

