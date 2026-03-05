#include <iostream>

int IzbaciNule(int n) {
    int rezultat = 0;
    int mnozitelj = 1;

    while(n > 0) {
        int cifra = n % 10;
        if(cifra != 0) {
            rezultat = rezultat + cifra * mnozitelj;
            mnozitelj = mnozitelj * 10;
        }
        n = n / 10;
    }
    return rezultat;
}

int main() {
    int n;
    do {
        std::cout << "Unesite broj: ";
        std::cin >> n;
        if(n != 0)
            std::cout << IzbaciNule(n) << std::endl;
    } while(n != 0);

    return 0;
}
