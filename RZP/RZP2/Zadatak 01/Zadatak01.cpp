#include <iostream>
#include <complex>

typedef std::complex<double> Kompleksni;

int main() {
    int n;
    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;
    std::cout << std::endl;
    
    Kompleksni z;
    Kompleksni suma = 0;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Z_" << i + 1 << " = ";
        std::cin >> z;
        suma = suma + 1. / z;
    }
    
    std::cout << "\nParalelna veza ovih elemenata ima impedansu Z_ = " << 1. / suma << ".\n";
    
    return 0;
}

/*
Unos:
Z_1 = (3.5,2.8)
Z_2 = (10,-1.54)
Z_3 = (12.37,0.24)

Ispis:
Paralelna veza ovih elemenata ima impedansu Z_ = (2.51479,0.897637).
*/