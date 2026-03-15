/* LISTA INICIJALIZATORA*/
/* Kao argumenti funkcijama koje kao parametre očekuju vektore, mogu se također prosljeđivati i liste
inicijalizatora, koje se tada interpretiraju kao vektori s odgovarajućim brojem elemenata i sadržajem
koji odgovara listi inicijalizatora. Na primjer, ukoliko nas zanima aritmetička sredina (prosjek) brojeva
3, 4, 6, 2, 7, za tu svrhu možemo iskoristiti gore napisanu funkciju “Prosjek” na sljedeći način:*/

#include <iostream>
#include <vector>

double Prosjek(std::vector<int> v) {
    double suma = 0;
    for(int i = 0; i < v.size(); i++) suma += v[i];
    return suma / v.size();
}

int main() {
 
    std::cout << "Prosjek brojeva je : " << Prosjek({3, 4, 6, 2, 7});

    return 0;
}

