/* 
U ovom primjeru, unosimo slijed brojeva u vektor, sve dok se ne unese nula. Pri tome je odgovarajući
vektor na početku prazan, a svaki novouneseni broj (osim terminalne nule) dodajemo na kraj vektora
pomoću funkcije “push_back”. Na kraju, unesene brojeve ispisujemo u obrnutom poretku, pri čemu broj
unesenih elemenata saznajemo pomoću funkcije “size”.
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<int> brojevi;
    std::cout << "Unesite slijed broj, pri cemu 0 oznacava kraj unosa: \n";
    int broj;
    do {
        std::cin >> broj;
        if(broj != 0) brojevi.push_back(broj);
    } while (broj != 0);
    
    std::cout << "Elementi ovog niza su: ";
    for(int i = 0; i < brojevi.size(); i++)
        std::cout << brojevi.at(i) << " ";
        
    std::cout << "\nOvaj niz brojeva u obrnutom poretku glasi: ";
    for(int i = brojevi.size() - 1; i >= 0; i--) 
        std::cout << brojevi.at(i) << " ";

    return 0;
}