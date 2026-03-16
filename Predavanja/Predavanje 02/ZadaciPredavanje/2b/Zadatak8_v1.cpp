/* Funkcija insert() i erase(). Brisanje i dodavanje elemenata u vektor.*/

#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;


int main() {
    Vektor v = {1, 2, 4, 5};

    std::cout << "Vektor prije umetanja broja 3: ";
    for(int x : v) std::cout << x << " ";
    
    std::cout << "\nVektor nakon umetanja broja 3: ";
    v.insert(v.begin() + 2, 3);
    for(int x : v) std::cout << x << " "; 
    
    std::cout << "\nVektor nakon brisanja broja 5: ";
    v.erase(v.begin() + 4);
    for(int x : v) std::cout << x << " ";
    
    std::cout << "\nVektor nakon brisanja prve tri pozicije: ";
    v.erase(v.begin(), v.begin() + 3);
    for(int x : v) std::cout << x << " ";

    std::cout << "\nNovi vektor je: ";
    v = {1, 2, 3, 4, 5};
    for(int x : v) std::cout << x << " ";
    /* “v.front()” odnosno “v.back()” sinonimi za “v[0]” odnosno “v[v.size() - 1]” */
    std::cout << "\nPrvi element vektora: " << v.front();
    std::cout << "\nZadnji element vektora: " << v.back();

    return 0;
}