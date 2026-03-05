#include <iostream>
#include <iomanip>

int main() {
    int G, p;
    std::cout << "Unesite iznos glavnice(G): ";
    std::cin >> G;
    std::cout << "Unesite iznos kamatne stope(p): ";
    std::cin >> p;

    int K = G * p / 100; 
    int S = G + K;

    std::cout << std::left << std::setw(16) << "Glavnica: " << std::right << std::setw(6) << G << std::endl 
              << std::left << std::setw(16) << "Kamatna stopa: " << std::right << std::setw(6) << p << std::endl 
              << std::left << std::setw(16) << "Kamate: " << std::right << std::setw(6) << K << std::endl 
              << std::left << std::setw(16) << "Nova svota: " << std::right << std::setw(6) << S << std::endl;
    
    return 0;
}