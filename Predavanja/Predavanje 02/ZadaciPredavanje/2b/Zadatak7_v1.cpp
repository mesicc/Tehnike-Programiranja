/* Razmotrimo, na primjer, sljedeću funkciju, koja sabira dva cjelobrojna vektora koja su joj prenesena
kao parametri, i vraća kao rezultat zbir ta dva vektora računat element po element. Radi jednostavnosti,
pretpostavimo da vektori koji se prenose kao parametri u ovu funkciju imaju jednak broj elemenata (da
izbjegnemo nedoumice šta tačno treba raditi ukoliko to nije ispunjeno): - Predavanje 2b -- stranica 7 */
#include <iostream>
#include <vector>

std::vector<int> ZbirVektora(std::vector<int> a, std::vector<int> b) {
    std::vector<int> c(a.size());
    for(int i = 0; i < c.size(); i++) c[i] = a[i] + b[i];
    return c;
}
 
int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {5, 4, 3, 2, 1};
    
    std::vector<int> v3;
    v3 = ZbirVektora(v1, v2);
    
    for(int x : v3) std::cout << x << " "; 
    
    return 0;
}
