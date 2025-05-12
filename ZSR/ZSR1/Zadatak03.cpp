/* Napišite program koji traži da se sa tastature unese neki podatak, a koji u zavisnosti od toga kakav
je uneseni podatak ispisuje jedan od sljedećih pet komentara:
Uneseni podatak je prirodan broj.
Uneseni podatak je cijeli broj, ali nije prirodan.
Uneseni podatak je realan broj, ali nije cijeli.
Uneseni podatak nije broj.
Obavezno testirajte sve navedene slučajeve. Uputa: Prvo probajte unijeti podatak u realnu
promjenljivu, a zatim testirajte ispravnost ulaznog toka. Ukoliko tok nije ispravan, podatak nije
broj. Cijelost broja ćete testirati ispitivanjem da li se odsjecanjem decimala (tj. konverzijom u
cjelobrojnu vrijenost) zadržava ista vrijednost. */
#include <iostream>

int main() {
    double broj;
    std::cout << "Unesite broj: ";
    
    if(std::cin >> broj) {
        // Provjera da li je broj cijeli
        if(broj == int(broj)) {
             // Ako je cijeli, provjeri da li je prirodan (pozitivan cijeli broj)
            if(broj > 0)
                std::cout << "Uneseni podatak je prirodan broj.";
            else
                std::cout << "Uneseni podatak je cijeli broj, ali nije prirodan.";
        }
        else
            std::cout << "Uneseni podatak je realan broj, ali nije cijeli.";
    }
    else
        std::cout << "Uneseni podatak nije broj.";
    
    return 0;
}