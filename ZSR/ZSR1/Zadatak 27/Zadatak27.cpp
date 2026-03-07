#include <iostream>

bool DaLiJeProst(int m) {
    if(m < 2) return false;
    for(int i = 2; i * i <= m; i++) {
        if(m % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Napomena: Prosti broj je prirodan broj koji je djeljiv samo sa 1 i samim sobom!" << std::endl;
    int m, n;
    std::cout << "Unesi dva prosta broja: ";
    std::cin >> m >> n;
    
    if(m > n) 
        std::cout << n << " ne moze biti veci od " << m << ". Moras obrnuti." << std::endl;

    else {
        
        std::cout << std::endl << "Prosti brojevi izmedju " << m << " i " << n << " su: " << std::endl;
        for(int i = m; i <= n; i++) {
            if(DaLiJeProst(i)) std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}