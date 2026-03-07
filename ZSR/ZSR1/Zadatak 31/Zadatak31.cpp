#include <iostream>

double stepen(int x, int n) {
    if(n == 0) return 1;

    double rezultat = 1;
    int apsN= n; //apsolutna vrijednost
    if(apsN < 0) apsN = -apsN; // uzmi apsolutnu vrijednost

    for(int i = 0; i < apsN; i++) {
        rezultat = rezultat * x;
    }

    if(n < 0) return 1.0 / rezultat; //negativni eskponent
    return rezultat;
}

int main() {
    int x, n;
    std::cout << "Unesi bazu x: ";
    std::cin >> x;
    std::cout << "Unesi eksponent n: ";
    std::cin >> n;

    std::cout << x << "^" << n << " = " << stepen(x,n) << std::endl << std::endl;
    
    std::cout << "Poziv iz postavke zadatka: " << std::endl;
    std::cout << " stepen(2, 5) " << stepen(2, 5) << std::endl;
    std::cout << " stepen(10,-3) " << stepen(10,-3) << std::endl;
    std::cout << " stepen(4, 2) " << stepen(4, 2) << std::endl;
   

    return 0;
}