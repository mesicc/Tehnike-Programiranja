#include <iostream>
#include <complex>
#include <cmath>

typedef std::complex<double> Kompleksni;

int main() {
    const double PI = 4 * std::atan(1);
    int n;
    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;
    std::cout << std::endl;
    
    Kompleksni suma = 0;
    
    for(int i = 0; i < n; i++) {
        double z, fi;
        std::cout << "Z" << i + 1 << " = ";
        std::cin >> z;
        std::cout << "fi" << i + 1 << " = ";
        std::cin >> fi;
        suma = suma + 1. / Kompleksni(z, fi * PI / 180);
        std::cout << std::endl;
    }
    
    suma = 1. / suma; 
    
    std::cout << "\nParalelna veza ovih elemenata ima Z = " << std::abs(suma) << " i fi = " << std::arg(suma) * 180 / PI  << ".\n";
    
    return 0;
}

/*
Unos:
Unesite broj elemenata: 2
Z1 = 10.5
fi1 = 30
Z2 = 2.8
fi2 = -47.6

Ispis:
Paralelna veza ovih elemenata ima Z = 2.57147 i fi = -33.7613.
*/