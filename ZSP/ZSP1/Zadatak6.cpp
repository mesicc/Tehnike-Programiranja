#include <iostream>
int main() {
    int visina;
    std::cout << "Unesite visinu: ";
    std::cin >> visina;
    int broj_zvjezdica = 1, broj_razmaka = visina - 1;

    for(int red = 1; red <= visina; red++) {
        for(int i = 1; i <= broj_razmaka; i++) std::cout << " ";
        for(int i = 1; i <= broj_zvjezdica; i++) std::cout << "*";
        std::cout << std::endl;
        broj_zvjezdica += 2; broj_razmaka--;
    }
    return 0;
}

// verzija 2
#include <iostream>
int main() {
    int visina;
    std::cout << "Unesite visinu: ";
    std::cin >> visina;
    for(int red = 1; red <= visina; red++) {
    for(int i = 1; i <= visina - red; i++) std::cout << " ";
    for(int i = 1; i < 2 * red; i++) std::cout << "*";
    std::cout << std::endl;
    }
    return 0;
}

// verzija 3
#include <iostream>
#include <iomanip>
int main() {
    int visina;
    std::cout << "Unesite visinu: ";
    std::cin >> visina;
    for(int red = 1; red <= visina; red++) {
    std::cout << std::setw(visina - red) << "";
    for(int i = 1; i < 2 * red; i++) std::cout << "*";
    std::cout << std::endl;
    }
    return 0;
}


// verzija 4
#include <iostream>
#include <iomanip>
int main() {
    int visina;
    std::cout << "Unesite visinu: ";
    std::cin >> visina;
    for(int red = 1; red <= visina; red++)
    std::cout << std::setfill(' ') << std::setw(visina - red) << ""
    << std::setfill('*') << std::setw(2 * red - 1) << "" << std::endl;
    return 0;
}


// verzija 5
#include <iostream>
#include <iomanip>
void CrtajRed(int red, int visina) {
    std::cout << std::setfill(' ') << std::setw(visina - red) << ""
    << std::setfill('*') << std::setw(2 * red - 1) << "" << std::endl;
}
int main() {
    int visina;
    std::cout << "Unesite visinu: ";
    std::cin >> visina;
    for(int red = 1; red <= visina; red++) CrtajRed(red, visina);
    return 0;
}
