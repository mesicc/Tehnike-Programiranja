#include <iostream>

int main() {
    int sati;
    std::cout << "Unesi zeljeni broj sati: ";
    std::cin >> sati;


    double cijena_Prva = 10 + sati * 0.5;
    double cijena_Druga = sati * 0.9;

    if(cijena_Prva < cijena_Druga)
        std::cout << "Isplatljivija je prva firma. Ukupni trošak bi iznosio " << cijena_Prva <<"km mjesečno.";
    else
        std::cout << "Isplatljivija je druga firma. Ukupni trošak bi iznosio " << cijena_Druga <<"km mjesečno.";

    return 0;
}