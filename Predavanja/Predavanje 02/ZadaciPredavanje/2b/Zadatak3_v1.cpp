/* Poređenje nizova u cpp*/

#include <iostream>

int main() {
    int niz1[] = {1, 2, 3, 4, 5};
    int niz2[] = {1, 2, 3, 4, 5};
    
    bool isti_su = true;
    for(int i = 0; i < 5; i++)
        if(niz1[i] != niz2[i]) {
        isti_su = false; break;
     }
    if(isti_su) std::cout << "Nizovi su isti!";
    else std::cout << "Nizovi su razliciti!";

    return 0;
}

