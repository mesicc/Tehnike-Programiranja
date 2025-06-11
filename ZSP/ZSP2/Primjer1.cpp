#include <iostream>
#include <complex>

typedef std::complex<double> Kompleksni; // jednostavno alternativno ime tzv. alias

int main() {
    double a, b, c;
    std::cout << "Unesi koeficijente: \n";
    std::cin >> a >> b >> c;
    
    double d = b * b - 4 * a * c;
    
    if(d >= 0) {
        double x1 = (-b - std::sqrt(d)) / (2 * a);
        double x2 = (-b + std::sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1 << "\nx2 = " << x2 << std::endl;
    }
    else {
        Kompleksni x1 = (-b - std::sqrt(Kompleksni(d))) / (2 * a);
        Kompleksni x2 = (-b + std::sqrt(Kompleksni(d))) / (2 * a);
        std::cout << "x1 = " << x1 << "\nx2 = " << x2 << std::endl;
    }
    return 0;
}