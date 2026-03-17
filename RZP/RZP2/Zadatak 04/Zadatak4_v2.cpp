#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;

bool DaLiJeProst(int n) {
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    // Provjerav samo za brojeve oblika 6k-1 i 6k+1
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

Vektor ProstiBrojeviUOpsegu(int a, int b) {
    Vektor v;
    for(int i = a; i <= b; i++) {
        if(DaLiJeProst(i)) v.push_back(i);
        if(i == b) break;                       // Ovo je zbog INT_MAX...
    }
    return v;
}

int main() {
    int p, q;
    std::cout << "Unesite pocetnu i krajnju vrijednost: ";
    std::cin >> p >> q;
    
    auto v = ProstiBrojeviUOpsegu(p, q);
    
    if(v.size() == 0) std::cout << "Nema prostih brojeva u opsegu " << p << " i " << q << "!\n";
    else {
        std::cout << "Prosti brojevi u rasponu od " << p << " i " << q << " su: ";
        for(int i = 0; i < v.size(); i++)
            std::cout << v[i] << (i != v.size() - 1 ? ", " : "\n");
    }
    
    return 0;
}