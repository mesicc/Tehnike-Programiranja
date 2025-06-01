/* Napišite program koji za cijeli broj unesen sa tastature ispisuje sve njegove proste faktore razdvojene
razmacima, pri čemu se svaki prosti faktor javlja samo jedanput. Na primer, ukoliko se unese broj
290472, program treba da ispiše 2 3 7 13 19, s obzirom da je 290472 = 2^3∙ 3 ∙ 7^2 ∙ 13 ∙ 19.*/
#include <iostream>

int main() {
    int broj;
    std::cout << "Unesite cijeli broj: ";
    std::cin >> broj;

    std::cout << "Prosti faktori: ";

    // Provjera za faktor 2
    int count = 0; // broj ponavljanja ^ neku
    while (broj % 2 == 0) {
        count++;
        broj /= 2;
    }
    if (count > 0) {
        if (count == 1)
            std::cout << "2 ";
        else
            std::cout << "2^" << count << " ";
    }

    // Provjera za neparne faktore
    for (int i = 3; i * i <= broj; i += 2) {
        count = 0;
        while (broj % i == 0) {
            count++;
            broj /= i;
        }
        if (count > 0) {
            if (count == 1)
                std::cout << i << " ";
            else
                std::cout << i << "^" << count << " ";
        }
    }

    // Ako na kraju ostane prost broj
    if (broj > 2)
        std::cout << broj << std::endl;

    return 0;
}
