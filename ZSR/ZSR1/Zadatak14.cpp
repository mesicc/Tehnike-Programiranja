/* Za neki broj kažemo da je palindroman ukoliko je jednak broju koji se dobije čitanjem njegovih
cifara u obrnutom poretku. Na primjer, broj 6574756 je palindroman broj. Napisati program koji
traži da se sa tastature unese cijeli broj 𝑛, a zatim na ekran ispisuje da li je broj 𝑛 palindroman ili
nije. Za realizaciju programa ne koristiti nizove niti vektore. */
#include <iostream>
#include <cmath>

int main() {
    int n, originalni, obrnuti = 0;
    
    std::cout << "Unesite cijeli broj: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Broj nije palindroman." << std::endl;
        return 0;
    }
    
    originalni = n;
    
    while(n != 0) {
        int cifra = n % 10;             // uzmi zadnju cifru
        obrnuti = obrnuti * 10 + cifra; // dodaj cifru na kraj obrnutog broja
        n /= 10;                        // izbaci zadnju cifru iz n
    } 
    
    if(originalni == obrnuti)
        std::cout << "Broj je palindroman." << std::endl;
    else
        std::cout << "Broj nije palindroman." << std::endl;
    
    return 0;
}
