#include <iostream>
#include <iomanip>

int main() {
    int brzinaCvor;
    std::cout << "Unesi brzinu u cvorovima: ";
    std::cin >> brzinaCvor;

    //Konstanta za morsku milju
    const double MORSKA_MILJA = 1852;


    //Pomnoži sa 1852 i podijeli sa 1000 da dobiješ km/h (double)
    double brzina_kmh = brzinaCvor * MORSKA_MILJA / 1000.0;

    //Ispiši sa 2 decimale koristeći std::fixed i std::setprecision(2)
    std::cout << "Brzina je " << std::fixed << std::setprecision(2) << brzina_kmh << " km/h."; 

    return 0;
}