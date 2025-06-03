/* Napišite program koji zahtijeva da se sa tastature unose realni brojevi sve dok se ne unese broj 0.
Nakon toga, program treba da ispiše aritmetičku i geometrijsku sredinu unesenih brojeva, ne
računajući unesenu nulu. Na primjer, ukoliko se unesu brojevi 3, 8, 5.4, 2.13, 7 i 0, aritmetička
sredina treba da bude 5.106, a geometrijska sredina 4.54168. Pri tome, u programu nije dozvoljeno
koristiti nizove niti vektore. */
#include <iostream>
#include <cmath>

int main() {
    double broj, suma = 0.0, proizvod = 1.0;
    int brojac = 0;
    
    std::cout << "Unesite brojeve (0 za kraj): ";
    
    while(true) {
        std::cin >> broj;
        if(broj == 0)
            break;
        suma = suma + broj;
        proizvod = proizvod * broj;
        brojac++;
    }
    if(brojac == 0)
        std::cout << "Niste unijeli nijedan broj." << std::endl;
    else {
        double aritmeticka = suma / brojac;
        double geometrijska = std::pow(proizvod, 1.0 / brojac);
        std::cout << "Aritmeticka sredina: " << aritmeticka << std::endl;
        std::cout << "Geometrijsak sredina: " << geometrijska << std::endl;
    }
    
    return 0;
}
