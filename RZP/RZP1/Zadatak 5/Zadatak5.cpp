#include <iostream>

int main() {
    int n;
    std::cout << "Koliko zelite unijeti brojeva? ";
    std::cin >> n;
    std::cout << "Unesite brojeve:" << std::endl;
    int tekuci_broj;

    std::cout << "1. broj: ";
    std::cin >> tekuci_broj;
    int najmanji_dosad = tekuci_broj, najveci_dosad = tekuci_broj;

    for(int i = 2; i <= n; i++) {
        std::cout << i << ". broj: ";
        std::cin >> tekuci_broj;
        if(tekuci_broj < najmanji_dosad) najmanji_dosad = tekuci_broj;
        if(tekuci_broj > najveci_dosad) najveci_dosad = tekuci_broj;
    }

    std::cout << "Najmanji medju unesenim brojevima je " << najmanji_dosad
              << ", a najveci medju unesenim brojevima je " << najveci_dosad << std::endl;
              
    return 0;
}