#include <iostream>

int main() {
    int h1, min1, s1;
    std::cout << "Unesite prvo vrijeme (h min sek): ";
    std::cin >> h1 >> min1 >> s1;

    int h2, min2, s2;
    std::cout << "Unesite drugo vrijeme (h min sek): ";
    std::cin >> h2 >> min2 >> s2;

    //prvo vrijeme u sekundama
    int t1 = h1 * 3600 + min1 * 60 + s1;
    //drugo vrijeme u sekundama
    int t2 = h2 * 3600 + min2 * 60 + s2;

    //razlika t2 - t1
    int razlika = t2 - t1;

    int h = razlika / 3600; 
    int ostatak = razlika % 3600;
    int min = ostatak / 60;
    int s = ostatak % 60;

    std::cout << "Izmedju ova dva trenutka proteklo je " << h << "h " << min  
              << "min " << s << "sek.";
 
    return 0;
}