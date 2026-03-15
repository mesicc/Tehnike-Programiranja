/* Kao još jednu ilustraciju rasponske for-petlje napisaćemo i verziju funkcije “Prosjek” koja računa
aritmetičku sredinu elemenata vektora, ali ovaj put pomoću rasponske for-petlje: */

#include <iostream>
#include <vector>

double Prosjek(std::vector<int> v) {
    double suma = 0;
    for(int x : v) suma += x;
    return suma / v.size();
}

int main() {
    std::vector<int> ocjeneVektor = {6, 8, 10, 9, 10, 8, 6, 7, 7, 6};
    
    std::cout << "Prosjek ocjena: ";
    for(int *p = &ocjeneVektor[0]; p < &ocjeneVektor[0] + 10; p++)
        std::cout << *p << " ";
    std::cout << "iznosi: " << Prosjek(ocjeneVektor);
    
    /* Rasponska for-petlja može se primijeniti i direktno na liste inicijalizatora. Stoga je konstrukcija
    poput sljedeće posve legalna (ispisuje brojeve 3, 5, 2, 8 i 6 na ekran, svaki u novom redu): */
    std::cout << "\nLista inicijalizaotra u rasponskoj for petlji: ";
    for(int x : {1, 2, 3, 4, 5}) std::cout << x << " ";

    return 0;
}
