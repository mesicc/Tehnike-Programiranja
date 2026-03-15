/* Rad s kompleksnim tipovima ilustriraćemo kroz analizu sljedećeg programa za rješavanje kvadratne
jednačine, uz upotrebu kompleksnih promjenljivih (objašnjenje slijedi odmah nakon prikaza): - Predavanje 2a(str 10). */ 

#include <iostream>
#include <complex> //biblioteka za rad sa kompleksnim brojevima

typedef std::complex<double> Kompleksni; //Korisna olaksica - typedef ime_tipa alternativno_ime (aliasi)

int main() {
    Kompleksni a, b, c;
    std::cout << "Unesite koeficijente: " << std::endl;
    std::cin >> a >> b >> c;

    Kompleksni d = b * b - Kompleksni(4) * a * c;

    Kompleksni x1 = (-b - std::sqrt(Kompleksni(d))) / (Kompleksni(2) * a);
    Kompleksni x2 = (-b + std::sqrt(Kompleksni(d))) / (Kompleksni(2) * a);

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}