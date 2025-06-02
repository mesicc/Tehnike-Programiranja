/* Iz matematičke analize je poznato da je za dovoljno veliko 𝑛 vrijednost sume
S ∑
približno jednaka vrijednosti funkcije F = e^x, s obzirom da za 𝑛 → ∞ vrijednost sume S konvergira
ka F (s obzirom da je S Taylorov razvoj funkcije F, koji konvergira za svaku vrijednost ). Napišite
program koji za zadanu vrijednost određuje minimalnu vrijednost 𝑛 takvu da se S i F poklapaju na
barem prvih 5 decimala (tj. da je | S − F | < 10). Program treba da ispiše nađenu vrijednost 𝑛, kao i
odgovarajuće vrijednosti S i F (da bi se uvjerili da se one zaista poklapaju barem na prvih 5 decimala).
Pri računanju sume S nije dozvoljeno posebno računati faktorijel niti koristiti funkciju “pow” za
računanje stepena, već treba iskoristiti ovisnost koja postoji između -tog i +1-vog člana sume
(tako da u dijelu programa za računanje sume treba biti samo jedna petlja). */
#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Unesite vrijednost x: ";
    std::cin >> x;
    
    double F = exp(x); // prava vrijednost e^x
    double S = 1.0;    // prvi član sume (x^0 / 0! = 1)
    double a = 1.0;    // trenutni član sume
    int n = 0;
    
    while(fabs(S - F) >= 1e-5) {
        n++;
        a = a * x / n; // računa se novi član koristeći prethodni
        S += a;
    }
    
    std::cout << "Minimalna vrijednost n: " << n << std::endl;
    std::cout << "Vrijednost sume S: " << S << std::endl;
    std::cout << "Vrijednost funkcije F: " << F << std::endl;
    
    return 0;
}
