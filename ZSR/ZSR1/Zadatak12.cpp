/* Napišite program koji traži da se unese realan broj i prirodan broj 𝑛, a zatim računa i ispisuje
vrijednost sume S ∑(−1)∙ ( + ) Na primjer, za = 2 i 𝑛 = 5 program treba da izbaci rezultat −0.129762. 
U programu nije dozvoljeno koristiti funkciju “pow”. Također, u programu ne smije da bude više od jedne petlje. */
#include <iostream>

int main() {
    double x;
    int n;
    std::cout << "Unesite vrijednost x: ";
    std::cin >> x;

    std::cout << "Unesite prirodan broj n: ";
    std::cin >> n;

    double S = 0.0;
    double faktorijel = 1.0;
    int sign = -1;

    for (int i = 1; i <= n; i++) {
        faktorijel *= i;
        double clan = sign * (x + i) / faktorijel;
        S += clan;
        sign *= -1;
    }

    std::cout << "Vrijednost sume S je: " << S << std::endl;

    return 0;
}
