#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class AdresatManager{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
public:
    AdresatManager(){
        idOstatniegoAdresata = 0;
    }
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();

};

#endif // ADRESATMANAGER_H

