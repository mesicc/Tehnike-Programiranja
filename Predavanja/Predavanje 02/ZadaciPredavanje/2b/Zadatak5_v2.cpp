/* Razmotrimo sljedeću funkciju, koja je analogna prethodnoj, ali radi s vektorima: */

#include <iostream>
#include <vector>

double Prosjek(std::vector<int> v) {
    double suma = 0;
    for(int i = 0; i < v.size(); i++) suma += v[i];
    return suma / v.size();
}

int main() {
    std::vector<int> ocjeneVektor = {6, 8, 10, 9, 10, 8, 6, 7, 7, 6};
    
    std::cout << "Prosjek ocjena: ";
    for(int *p = &ocjeneVektor[0]; p < &ocjeneVektor[0] + 10; p++)
        std::cout << *p << " ";
    std::cout << "iznosi: " << Prosjek(ocjeneVektor);

    return 0;
}

