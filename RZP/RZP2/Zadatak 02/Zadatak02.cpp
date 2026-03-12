#include <iostream>
#include <complex>

typedef std::complex<double> Kompleksni;

int main() {
    int n;
    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;
    std::cout << std::endl;
    
    Kompleksni suma = 0;
    
    for(int i = 0; i < n; i++) {
        double r,x;
        std::cout << "Unesi R" << i + 1 << " = ";
        std::cin >> r;
        std::cout << "Unesi X" << i + 1 << " = ";
        std::cin >> x;
        suma = suma + 1. / Kompleksni(r, x);
        std::cout << std::endl;
    }
    
    suma = 1. / suma; //računanje ukupne impendanse
    
    std::cout << "\nParalelna veza ovih elemenata ima impedansu R = " << suma.real() << " i X = " << suma.imag() << ".\n";
    
    return 0;
}

/*
Unos:
Unesite broj elemenata: 3
R1 = 3.5
X1 = 2.8
R2 = 10
X2 = -1.54
R3 = 12.37
X3 = 0.24

Ispis:
Paralelna veza ovih elemenata ima R = 2.51479 i X = 0.897637.
*/