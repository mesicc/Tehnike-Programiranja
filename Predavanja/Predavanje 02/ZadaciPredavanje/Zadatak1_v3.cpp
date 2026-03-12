/* RInteresantnu mogućnost dobijamo ukoliko u prethodnom  programu  sve  promjenljive, uključujući 
“a”, “b” i “c”, deklariramo  kao  kompleksne  promjenljive.  To će nam omogućiti da možemo rješavati i 
kvadratne jednačine čiji su koeficijenti kompleksni brojevi (ne zaboravimo da kompleksne brojeve 
unosimo s tastature kao uređene parove). Probajte sami izvršiti izmjene u prethodnom programu koje 
će omogućiti i rješavanje takvih jednačina. Drugim riječima, program nakon izmjene treba da prihvati i 
scenario poput sljedećeg, u kojem je prikazano rješavanje jednačine (2 + 3 𝑖) 𝑥 * x  − 5 𝑥 + 7 𝑖 = 0 (probajte 
riješiti ovu jednačinu “pješke”, vidjećete da nije baš jednostavno, pogotovo zbog relativno komplikovanog 
postupka računanja kvadratnog korijena iz kompleksnih brojeva) - Predavanje 2a(str 10). */ 

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