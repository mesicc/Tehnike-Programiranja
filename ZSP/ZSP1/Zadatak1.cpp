#include <iostream>
int main() {
    int a, b, c, d;
    std::cout << "Unesite duzinu, sirinu i dubinu bazena u metrima: ";
    std::cin >> a >> b >> c;
    std::cout << "Unesite sirinu plocice u centimetrima: ";
    std::cin >> d;
    std::cout << std::endl;
    int a1 = 100 * a, b1 = 100 * b, c1 = 100 * c;
    if(a1 % d != 0 || b1 % d != 0 || c1 % d != 0)
    std::cout << "Poplocavanje bazena dimenzija " << a << "x" << b << "x" << c
    << "m s plocicama dimenzija " << d << "x" << d << "cm\n"
    << "nije izvodljivo bez lomljenja plocica!\n";
    else
    std::cout << "Za poplocavanje bazena dimenzija " << a << "x" << b << "x" << c
    << "m s plocicama dimenzija " << d << "x" << d << "cm\n"
    << "potrebno je " << (2 * c1 * (a1 + b1) + a1 * b1) / (d * d) << " plocica.\n";
    return 0;
}