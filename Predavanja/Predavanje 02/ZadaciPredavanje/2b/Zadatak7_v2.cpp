/* Istu stvar smo mogli uraditi i ovako, uz upotrebu funkcije “push_back”: */
#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;

Vektor ZbirVektora(Vektor a, Vektor b) {
    Vektor c;
    for(int i = 0; i < a.size(); i++) c.push_back(a[i] + b[i]);
    return c;
}
 
int main() {
    Vektor v1 = {1, 2, 3, 4, 5};
    Vektor v2 = {5, 4, 3, 2, 1};
    
    /* Naime, primijetimo da je s logičkog aspekta čisti višak navoditi da promjenljiva “v3” 
    ima tip “std::vector<int>”, s obzirom da je jasno da ona mora imati taj tip na osnovu toga što povratni tip 
    funkcije “ZbirVektora” upravo takav.*/
    auto v3 = ZbirVektora(v1, v2); // Kopirajuća sintaksa
    
    for(int x : v3) std::cout << x << " "; 
    
    return 0;
}
