#include <iostream>
#include <iomanip>

void ispisiSeparator(int n) {
    for(int i = 0; i < n; i++) 
        std::cout << "+------";
    std::cout << "+" << std::endl;
}

void ispisiRed(int i, int n ) {
    for(int j = 1; j <=n; j++) 
        std::cout << "| " << std::right << std::setw(4) << i*j << " ";
    std::cout << "|" << std::endl;
}

int main() {
    int n;
    std::cout << "Unesi n: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        ispisiSeparator(n);
        ispisiRed(i, n);
    }
    ispisiSeparator(n);

    return 0;
}