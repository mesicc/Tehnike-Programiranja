#include <iostream>
#include <vector>

typedef std::vector<double> Vektor;

bool TestPerioda(Vektor v, int p) {
    if(p < 1 || p >= v.size()) return false;
    for(int i = 0; i < v.size() - p; i++) 
        if(v[i] != v[i + p]) return false;
    return true;
}

int OdrediOsnovniPeriod(Vektor v) {
    for(int p = 1; p < v.size(); p++) 
        if(v[0] == v[p] && TestPerioda(v, p)) return p;
    return 0;
}


int main() {
    Vektor v;
    int broj;
    std::cout << "Unesite slijed brojeva (0 za kraj): ";
    do {
        std::cin >> broj;
        if(broj != 0) v.push_back(broj);
    }while(broj != 0);

    int p = OdrediOsnovniPeriod(v);
    
    if(p == 0) std::cout << "Slijed nije periodican!\n";
    else std::cout << "Slijed je periodicna sa osnovim periodom " << p << ".\n"; 

    return 0;
}