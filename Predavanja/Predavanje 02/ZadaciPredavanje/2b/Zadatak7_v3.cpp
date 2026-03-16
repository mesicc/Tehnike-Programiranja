#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;

Vektor operator +(Vektor a, Vektor b) {
    Vektor c;
    for(int i = 0; i < a.size(); i++) c.push_back(a[i] + b[i]);
    return c;
}

int main() {
    Vektor v1 = {1, 2, 3, 4, 5};
    Vektor v2 = {5, 4, 3, 2, 1};

    auto v3 = operator +(v1, v2); 
    
    std::cout << "Zbir elemenata vektora je: ";
    for(int x : v3) std::cout << x << " "; 

    return 0;
}