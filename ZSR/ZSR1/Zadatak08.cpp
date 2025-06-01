/* Napišite program koji traži da se sa tastature unese 6 brojeva, a koji zatim ispisuje da li su svi uneseni
brojevi pozitivni i da li među njima ima neparnih brojeva. Za realizaciju programa ne koristiti nizove
niti druge srodne strukture podataka. Program testirajte na sljedećim karakterističnim primjerima:
  Primjer 1: 2 6 10 18 8 6
  Primjer 2: 4 −12 10 18 −18 10
  Primjer 3: 3 5 4 19 7 12
  Primjer 4: −3 9 15 −7 13 11 */
#include <iostream>

int main() {
    int a, b, c, d, e, f;
    std::cout << "Unesite 6 brojeva: ";
    std::cin >> a >> b >> c >> d >> e >> f;
    
    bool svi_pozitivni = true;
    bool ima_neparnih = false;
    
    if(a <= 0 || b <= 0 || c <= 0 || d <= 0 || e <= 0 || f <= 0) {
        svi_pozitivni = false;
    }
    
    if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0 || d % 2 != 0 || e % 2 != 0 || f % 2 != 0) {
        ima_neparnih = true;
    }
    
    if(svi_pozitivni)
        std::cout << "Svi uneseni brojevi su pozitivni.\n";
    else
        std::cout << "Nisu svi uneseni brojevi pozitivni.\n";
        
    if(ima_neparnih)
        std::cout << "Medju unesenim brojevima ima neparnih.\n";
    else
        std::cout << "Medju unesenim brojevima nema neparnih.";
    
    return 0;
}
