/* Prosti brojevi su oni prirodni brojevi koji imaju tačno dva različita djelioca u skupu ℕ: jedinicu i
sâmog sebe. */

#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;

bool DaLiJeProst(int n) {
    //Iz definicije je očigledno da nijedan cijeli broj manji od 2 nije prost, tako da iz funkcije odmah možemo vratiti logičku vrijednost “netačno” ukoliko je 𝑛 < 2. 
    //svi parni brojevi osim 2 sigurno nisu prosti, tako da ako je 𝑛 paran broj različit od 2, možemo odmah reći da broj nije prost
    if(n < 2 || n != 2 && n % 2 == 0) return false;
    for(int i = 3; i <= n / i ; i++) 
        if(n % i == 0) return false;
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