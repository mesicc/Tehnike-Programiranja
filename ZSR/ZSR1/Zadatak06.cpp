/* Napišite program koji traži da se sa tastature unesu tri realna broja, a koji zatim ispisuje da li ta tri
broja mogu biti stranice nekog pravouglog trougla. Napomena: ne zna se koji od tri unesena broja
predstavljaju katete, a koji hipotenuzu, tako da program treba da ponudi potvrdan odgovor kako na
trojku brojeva 3, 4, 5, tako i na trojku brojeva 5, 4, 3 ili 3, 5, 4. Obavezno testirajte program i na
ulaznim podacima 0.5, 1.2 i 1.3! */
#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Unesite tri realna broja: ";
    std::cin >> a >> b >> c;
    
    const double EPSILON = 1e-6;
    
    if(fabs(a * a + b * b - c * c) < EPSILON ||
       fabs(a * a + c * c - b * b) < EPSILON ||
       fabs(b * b + c * c - a * a) < EPSILON) {
           std::cout << "Brojevi mogu biti stranice pravouglog trougla.\n";
    }
    else
        std::cout << "Brojevi NE mogu biti stranice pravouglog trougla.\n";
    return 0;
}
