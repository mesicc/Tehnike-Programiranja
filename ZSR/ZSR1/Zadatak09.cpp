/* Napišite program koji za cijeli broj unesen sa tastature ispisuje sve njegove proste faktore razdvojene
razmacima, pri čemu se svaki prosti faktor javlja onoliko puta koliko učestvuje u tom broju. Na
primer, ukoliko se unese broj 290472, program treba da ispiše 2 2 2 3 7 7 13 19, jer rastava ovog
broja na proste faktore glasi 290472 = 2 ∙ 3 ∙ 7 ∙ 13 ∙ 19.*/
#include <iostream>

int main() {
    int broj;
    std::cout << "Unesite cijeli broj: ";
    std::cin >> broj;
    
    std::cout << "Prosti faktori: ";
    // Dijelimo s 2 dok god je djeljiv
    while(broj % 2 == 0) {
        std::cout << "2 ";
        broj = broj / 2;
    }
    
    // Provjeravamo sve neparne brojeve od 3 do sqrt(n)
    for(int i = 3; i * i <= broj; i++) {
        while (broj % i == 0) {
            std::cout << i << " ";
            broj /= i;
        }
    }
    
    // Ako je n veće od 2, znači da je prost broj
    if (broj > 2)
        std::cout << broj << std::endl;
    
    return 0;
}
