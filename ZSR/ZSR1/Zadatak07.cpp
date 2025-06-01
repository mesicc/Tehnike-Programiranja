/* Napišite program koji traži da se sa tastature unese iznos glavnice G i kamatna stopa 𝑝. Program
treba da izračuna iznos kamata K po formuli K =G ∙ 𝑝/100 i novu svotu S = G + K i nakon toga
treba da ispiše sve unesene i izračunate podatke u sređenom obliku sa svim brojevima poravnatim
uz desnu ivicu (sve cifre jedinica treba da budu jedna ispod druge). Na primjer, ukoliko se unese
G = 1000 i 𝑝 = 5, ispis treba da bude poput sljedećeg:
  Glavnica: 1000
  Kamatna stopa: 5
  Kamate: 50
  Nova svota: 1050
a ako unesemo G = 55000 i 𝑝 = 12, ispis treba da bude
  Glavnica: 55000
  Kamatna stopa: 12
  Kamate: 6600
  Nova svota: 61600
Pretpostavite da nijedna veličina neće preći širinu od 6 cifara. Eventualne decimalne rezultate
zaokružite, tako da za G = 3530 i 𝑝 = 7, kamate trebaju biti K = 247 a ne 247.1. */
#include <iostream>
#include <iomanip>

int main() {
    double G, p;
    std::cout << "Unesite glavnicu: ";
    std::cin >> G;
    std::cout << "Unesite kamatnu stopu: ";
    std::cin >> p;
    
    double K = G * p / 100;
    double S = G + K;
    
    std::cout << std::setw(15) << std::left << "Glavnica: " << std::setw(6) << std::right << int(G) << std::endl;
    std::cout << std::setw(15) << std::left << "Kamatna stopa: " << std::setw(6) << std::right << int(p) << std::endl;
    std::cout << std::setw(15) << std::left << "Kamate: " << std::setw(6) << std::right << K << std::endl;
    std::cout << std::setw(15) << std::left << "Nova svota: " << std::setw(6) << std::right << S << std::endl;
    
    return 0;
}
