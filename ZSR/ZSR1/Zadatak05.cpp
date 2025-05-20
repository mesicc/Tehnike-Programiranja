/*  Napišite program koji traži da se unesu koeficijenti 𝑎, 𝑏 i 𝑐 kvadratne jednačine 
𝑎 + 𝑏 + 𝑐 = 0 a koji zatim računa i ispisuje njena rješenja. Program napraviti tako da se pri svakom unosu
koeficijenta uvijek čitaju “svježi” podaci, bez obzira što je pri unosu prvog koeficijenta korisnik
eventualno odmah unio tri podatka (uputa: koristite “cin.ignore”). Predvidite i mogućnost
postojanja kompleksnih rješenja, koje ćete ispisivati kao uređene parove realnih brojeva. Program
treba da predvidi i sve specijalne slučajeve (za 𝑎 = 0, jednačina se svodi na linearnu, tako da imamo
samo jedno rješenje, ukoliko je ujedno 𝑏 ≠ 0; za 𝑎 = 𝑏 = 0 i 𝑐 ≠ 0 nema rješenja, dok je za
𝑎 = 𝑏 = 𝑐 = 0 jednačina identički zadovoljena za svaku vrijednost ). */

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Unesite koeficijente a kvadratne jednacine: ";
    std::cin >> a;
    std::cin.ignore(10000, '\n');

    std::cout << "Unesite koeficijente b kvadratne jednacine: ";
    std::cin >> b;
    std::cin.ignore(10000, '\n');

    std::cout << "Unesite koeficijente c kvadratne jednacine: ";
    std::cin >> c;
    std::cin.ignore(10000, '\n');
    
    if(a == 0 && b == 0 && c == 0) 
        std::cout << "Jednačina identički zadovoljena za svaku vrijednost x.";
    else if(a == 0 && b != 0) {
        double x = -c / b;
        std::cout << "Jednacina je linearna. Rjesenje je x = " << x << std::endl;
    }
    else if(a == 0 && b == 0 && c != 0)
        std::cout << "Jednacina nema rjesenje.";
    else {
        double diskriminanta = b * b - 4 * a * c;

        if (diskriminanta > 0) {
            double x1 = (-b + std::sqrt(diskriminanta)) / (2 * a);
            double x2 = (-b - std::sqrt(diskriminanta)) / (2 * a);
            std::cout << "Jednacina ima dva realna rjesenja:" << std::endl;
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        else if (diskriminanta == 0) {
            double x = -b / (2 * a);
            std::cout << "Jednacina ima jedno realno rjesenje: x = " << x << std::endl;
        }
        else {
            // Kompleksna rješenja
            double realni_dio = -b / (2 * a);
            double imaginarni_dio = std::sqrt(-diskriminanta) / (2 * a);
            std::cout << "Jednacina ima dva kompleksna rjesenja:" << std::endl;
            std::cout << "x1 = (" << realni_dio << ", " << imaginarni_dio << ")" << std::endl;
            std::cout << "x2 = (" << realni_dio << ", " << -imaginarni_dio << ")" << std::endl;
        }
    }
    return 0;
}