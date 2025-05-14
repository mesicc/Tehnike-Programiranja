/* Dvije firme nude usluge priključenja na Internet, pri čemu prva firma traži fiksnu pretplatu od 10
KM plus 50 feninga po svakom potrošenom satu, dok druga firma ne traži fiksnu pretplatu, ali traži
80 feninga po svakom potrošenom satu. Napišite program koji od korisnika traži da unese željeni
broj sati a nakon toga da mu preporuči koja je firma isplatnija za njegove potrebe. Na primjer, za 15
sati isplatnija je druga firma (jer je 10 + 15 ∙ 0.5 = 17.5 > 15 ∙ 0.8 = 12), dok je za 40 sati isplatnija
prva firma (jer je 10 + 40 ∙ 0.5 = 30 < 40 ∙ 0.8 = 32). */
#include <iostream>

int main() {
    int broj_sati;
    double cijena_prva, cijena_druga;

    std::cout << "Unesite zeljeni broj sati: ";
    std::cin >> broj_sati;

    cijena_prva = 10 + broj_sati * 0.5;
    cijena_druga = broj_sati * 0.8;

    std::cout << "Cijena kod prve firme: " << cijena_prva << " KM" << std::endl;
    std::cout << "Cijena kod druge firme: " << cijena_druga << " KM" << std::endl;

    if (cijena_prva < cijena_druga)
        std::cout << "Isplatnija je prva firma." << std::endl;
    else if (cijena_druga < cijena_prva)
        std::cout << "Isplatnija je druga firma." << std::endl;
    else
        std::cout << "Obje firme su jednako isplative." << std::endl;

    return 0;
}

