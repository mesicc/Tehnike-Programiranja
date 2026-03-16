/*
Moderni nizovi, slično kao i klasični nizovi, imaju fiksan broj elemenata, i kod njih je broj elemenata
svojstvo samog tipa, a ne svojstvo individualne promjenljive. Samim tim, broj elemenata modernih
nizova ne može se mijenjati tokom njihovog života. Tip “array” je bibliotečki definirani tip, i za njegovu
upotrebu potrebno je uključiti istoimenu biblioteku (tj. biblioteku “array”), kao i koristiti prefiks
“std::”, osim ukoliko upotrebu tog prefiksa zaobiđemo pomoću naredbe “using”. Promjenljive ovog
tipa deklariraju se pomoću konstrukcije

    std::array<tip_elemenata, broj_elemenata> ime_promjenljive

pri čemu “broj_elemenata” mora biti prava konstanta (ne smije biti neprava konstanta, promjenljiva ili
proizvoljan izraz). 
*/

#include <iostream>
#include <array>

int main() {
    std::array<int, 5> a;
    std::array<int, 5> b{2, 3, 7, 5};
    std::array<double, 4> c = {2.15, 3.4};
    
    for(int i = 0; i < b.size(); i++) std::cout << b[i] << " "; //2 3 7 5 0
    std::cout << std::endl;
    for(double x : c) std::cout << x << " "; //2.15 3.4 0 0
    std::cout << std::endl;
    a = b;
    a.at(4) = 1;
    for(int x : a) std::cout << x << " "; // 2, 3, 7, 5, 1
    std::cout << std::endl;
    b = {1, 3, 2};
    for(int x : b) std::cout << x << " "; //1, 3, 2
    
    return 0;
}