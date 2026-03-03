#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "Koliko zelite unijeti brojeva? ";
    std::cin >> n;
    std::cout << "Unesite brojeve:" << std::endl;
    
    int najmanji_dosad = std::numeric_limits<int>::max(), 
        najveci_dosad = std::numeric_limits<int>::lowest();

    std::cout << "Unesite brojeve: " << std::endl;
    for(int i = 1; i <= n; i++) {
        int tekuci_broj;
        std::cout << i << ". broj: ";
        std::cin >> tekuci_broj;

        if(tekuci_broj < najmanji_dosad) najmanji_dosad = tekuci_broj;
        if(tekuci_broj > najveci_dosad) najveci_dosad = tekuci_broj;
        
    }

    std::cout << "Najmanji medju unesenim brojevima je " << najmanji_dosad
              << ", a najveci medju unesenim brojevima je " << najveci_dosad << std::endl;

    return 0;
}