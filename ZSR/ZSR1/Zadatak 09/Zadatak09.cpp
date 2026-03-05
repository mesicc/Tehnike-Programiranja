#include <iostream>

int main() {
    int n;
    std::cout << "Unesi broj: ";
    std::cin >> n;

    int f = 2; //počinjemo od najmanjeg prostog broja

    while(f * f <= n) {
        while(n % f == 0) {
            std::cout << f << " ";
            n = n / f;
        }
        f++;
    }
 
    if(n > 1) std::cout << n;

    return 0;
}
