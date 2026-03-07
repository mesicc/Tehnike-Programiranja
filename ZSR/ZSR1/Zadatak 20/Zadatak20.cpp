#include <iostream>

void ispisiGornjiDio(int m, int n) {
    int sredina = n / 2;
    for(int i = sredina; i >= 1; i--) {
        for(int j = 0; j < i; j++) std::cout << " ";
        std::cout << "*";
        for(int j = 0; j < m - 2 * i - 1; j++) std::cout << " ";
        std::cout << "*" << std::endl;
    }
}
void ispisiSredinu(int m ){
    for(int j = 0; j < m; j++) std::cout << "*";
    std::cout <<std::endl;
}

void ispisiDonjiDio(int m, int n) {
    int sredina = n / 2;
    for(int i = 1; i <= sredina; i++) {
        for(int j = 0; j < i; j++) std::cout << " ";
        std::cout << "*";
        for(int j = 0; j < m - 2*i - 1; j++) std::cout << " ";
        std::cout << "*" << std::endl;
    }
}

void iscrtaj(int m, int n) {
    ispisiGornjiDio(m, n);
    ispisiSredinu(m);
    ispisiDonjiDio(m, n);
}


int main() {
    int m, n;
    std::cout << "Unesi dva prirodna broja: ";
    std::cin >> m >> n;

    iscrtaj(m, n);

    return 0;
}