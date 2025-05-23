/* Napišite program koji traži da se sa tastature unese brzina broda u čvorovima koja se zadaje
isključivo kao cijeli broj (obavezno koristiti promjenljivu tipa “int”), a zatim izračunava i ispisuje
brzinu broda u km/h kao decimalan broj. Koristite činjenicu da je čvor morska milja na sat, a da je
jedna morska milja 1852 m (ovaj podatak obavezno definirati u programu kao konstantu). Na
primjer, ukoliko se kao brzina broda unese broj 20, program treba da ispiše rezultat 37.04 jer je
20 čvorova = 37.04 km/h. */
#include <iostream>

int main() {
    const double morska_milja = 1852.0; // u metrima
    int brzina_broda_cvor;
    std::cout << "Unesite brzinu broda u cvorovima: ";
    std::cin >> brzina_broda_cvor;
    
    double brzina_kmh = (brzina_broda_cvor * morska_milja) / 1000.0;
    
    std::cout << "Brzina broda u kmh/h: " << brzina_kmh << std::endl;
    
    return 0;
}