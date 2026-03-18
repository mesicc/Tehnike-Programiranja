#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;

bool DaLiJeProst(int n) {
    if(n < 2 || (n != 2 && n % 2 == 0)) return false;
    for(int i = 3; i <= n / i ; i++) 
        if(n % i == 0) return false;

    return true;
}

Vektor ProstiFaktor(int n) {
    Vektor v;
    for(int i = 2; i <= n; i++) 
        if(DaLiJeProst(i) && n % i == 0) v.push_back(i);
    return v;
}

Vektor ProstiFaktoriSPonavljanjem(int n) {
    Vektor v;
    int d = 2;
    while(n > 1) {
        while(n % d != 0) d++;
        v.push_back(d);
        n = n / d;
    }
    return v;
}


int main() {
    int n;
    std::cout << "Unesite broj: ";
    std::cin >> n;

    auto v = ProstiFaktor(n);

    if(v.size() == 0)   
        std::cout << "Broj nema prostih faktora.\n";
    else {
        std::cout << "Prosti faktori: ";
        for(int x : v) std::cout << x << " ";
        std::cout << "\nPorsti faktori sa ponavljanjem: ";
        for(int x : ProstiFaktoriSPonavljanjem(n)) std::cout << x << " ";
    }

    return 0;
}