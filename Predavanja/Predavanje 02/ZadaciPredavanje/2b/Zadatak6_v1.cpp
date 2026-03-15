/* RASPONSKA FOR PETLJA */
/* Ovo je pogodno mjesto da se razmotri još jedna korisna stvar u jeziku C++, a to je rasponska
for-petlja. Ova vrsta petlje poznata je u mnogim drugim jezicima (u nekima pod nazivom foreach petlja
jer se u njima ona realizira pomoću posebne ključne riječi “foreach”), a njena sintaksa u jeziku C++ je
for(promjenljiva : kolekcija) tijelo_petlje */

#include <iostream>
#include <vector>


int main() {
 
    std::vector<int> v{1, 2, 3, 4, 5};
    std::cout << "Ispis niza preko for petlje: ";
    for(int i = 0; i < v.size(); i++) std::cout << v.at(i) << " ";
    
    std::cout << "\nIspis niza preko rasponske for petlje: ";
    for(int i : v) std::cout << i << " ";
    
    
    return 0;
}

/* Također, unutar rasponske for-petlje
nad kolekcijom kroz koju prolazimo nije dozvoljeno izvršiti nikakvu operaciju koja mijenja broj elemenata
te kolekcije (kao što je “resize” ili “push_back”). U suprotnom će petlja imati nepredvidljivo ponašanje. */