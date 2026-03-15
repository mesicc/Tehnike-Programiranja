/* Veliki nedostatak nizova je u tome što se oni ne mogu prenositi kao parametri u funkcije */
/* Doduše, zahvaljujući automatskoj pretvorbi nizova u pokazivače izgleda kao da se nizovi mogu prenositi kao
parametri u funkcije, ali se pri tome u funkciju ne prenosi niz, već samo pokazivač na prvi element niza, a
funkcija se ponaša kao da operira s nizom zahvaljujući činjenici da se na pokazivače može primjenjivati
indeksiranje. */

#include <iostream>
#include <vector>

double Prosjek(int niz[], int broj_elemenata) {
    double suma = 0;
    for(int i = 0; i < broj_elemenata; i++) suma += niz[i];
    return suma / broj_elemenata;
}

int main() {
    int ocjene[10] = {6, 7, 7, 6, 8, 10, 9, 10, 8, 6};
    
    std::cout << "Prosjek ocjena ";
    for(int *p = ocjene; p < ocjene + 10; p++) std::cout << *p << " ";
    std::cout << "iznosi: " << Prosjek(ocjene, 10);

    return 0;
}
