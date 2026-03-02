#include <iostream>

int main() {
    int n;
    std::cout << "Koliko zelite unijeti brojeva? ";
    std::cin >> n;
    std::cout << "Unesite brojeve:" << std::endl;
    
    int najmanji_dosad, najveci_dosad;
    for(int i = 1; i <= n; i++) {
        int tekuci_broj;
        std::cout << i << ". broj: ";
        std::cin >> tekuci_broj;

        if(i == 1 || tekuci_broj < najmanji_dosad) najmanji_dosad = tekuci_broj;
        if(i == 1 || tekuci_broj > najveci_dosad) najveci_dosad = tekuci_broj;
    }

    std::cout << "Najmanji medju unesenim brojevima je " << najmanji_dosad
              << ", a najveci medju unesenim brojevima je " << najveci_dosad << std::endl;

    return 0;
}