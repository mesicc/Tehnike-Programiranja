/* U jeziku C postoji tijesna veza između nizova i pokazivača iskazana kroz dvije činjenice. Prva je da
se ime niza upotrijebljeno samo za sebe bez uglastih zagrada automatski konvertira u pokazivač na prvi
element niza (uz jedini izuzetak kada je ime niza upotrijebljeno kao argument operatora “sizeof” ili “&”,
kada ta pretvorba ne vrijedi). Stoga, ukoliko je “ocjene” neki niz, tada se ime “ocjene” upotrijebljeno
samo za sebe (tj. bez indeksiranja) interpretira kao “&ocjene[0]”. Ova osobina se u jeziku C, zajedno s
pokazivačkom aritmetikom, često koristi da se neke operacije izvedu na efektniji način. Svi ovi trikovi
rade i u jeziku C++. Na primjer, ukoliko je “ocjene” niz od 10 cijelih brojeva, njegove elemente možemo
ispisati i sljedećim programskim isječkom, u kojem se malo “igramo” s pokazivačkom aritmetikom
(analizirajte pažljivo ovaj isječak, da se podsjetite pokazivačke aritmetike): - Predavanje 2b (str.4) */

#include <iostream>
#include <vector>

int main() {
    int ocjene[10] = {6, 7, 7, 6, 8, 10, 9, 10, 8, 6};
    
    std::cout << "Niz: ";
    // Pokazivač koji pokazuje na prvi element niza
    for(int *p = ocjene; p < ocjene + 10; p++) 
        std::cout << *p << " ";
        
    std::vector<int> ocjeneVektor = {6, 8, 10, 9, 10, 8, 6, 7, 7, 6};
    
    std::cout << "\nVektor: ";
    for(int *p = &ocjeneVektor[0]; p < &ocjeneVektor[0] + 10; p++)
        std::cout << *p << " ";

    return 0;
}


