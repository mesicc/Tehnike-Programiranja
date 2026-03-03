#include <iostream>

int main() {
    int visina;
    std::cout << "Unesite visinu trougla: ";
    std::cin >> visina;

    int broj_zvjezdica = 1; //Za početni red broj zvjezdica je uvijek 1
    int broj_razmaka = visina - 1; //dok je broj razmaka za 1 manji od visine trougla

    for(int red = 1; red <= visina; red++) {
        for(int i = 1; i <= broj_razmaka; i++) std::cout << " ";
        for(int i = 1; i <= broj_zvjezdica; i++) std::cout << "*";
        std::cout << std::endl;

        //akon iscrtavanja svakog reda, broj zvjezdica uvećava za 2, a broj razmaka umanjuje za 1
        broj_zvjezdica = broj_zvjezdica + 2;
        broj_razmaka--;
    }

    return 0;
}