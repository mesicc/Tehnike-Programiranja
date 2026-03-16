/* ------------------------------------------move-semantika-----------------------------------------------------
O čemu se radi? Uzmimo na primjer da su “v1” i “v2” dva vektora s istim tipom
elemenata. Izvršimo li dodjelu poput “v1 = v2”, svi elementi vektora “v2” će se kopirati u elemente
vektora “v1” (nakon prilagođavanja njegove veličine), odnosno nakon ove dodjele, vektori “v1” i “v2” će
imati identičan sadržaj (bez obzira što su to dva različita objekta, tj. nalaze se na različitim mjestima u
memoriji). Problem je što ovo kopiranje elemenata može dugo trajati (ukoliko vektor “v2” ima 1000000
elemenata, potrebno je iskopirati upravo toliko elemenata). S druge strane, nekada nam je samo potrebno
da se sadržaj vektora “v2” prosto pojavi u vektoru “v1”, a da nas pri tome nije briga šta će se poslije
desiti s vektorom “v2”. Stoga, ukoliko umjesto dodjele “v1 = v2” izvršimo nešto poput
    v1 = std::move(v2); // Semantika pomjeranja...
elementi vektora “v2” će se prosto “preseliti” u vektor “v1”, dok će vektor “v2” ostati prazan (tj. bez
elemenata). Šta se ovim postiže? Poenta je što se ova “selidba” može tehnički izvesti bez ikakvog
kopiranja elemenata (intuitivno, vektor “v1” se prosto “useli” u onaj dio memorije gdje se prije nalazio
vektor “v2”, dok se sami elementi ne pomjeraju u memoriji), tako da je ova konstrukcija neuporedivo
efikasnija od dodjele “v1 = v2” (štaviše, njeno trajanje uopće ne ovisi od broja elemenata u vektoru
“v2”). Kroz jedan primjer ćemo ilustrirati kada ovo može biti jako korisno. Pretpostavimo da želimo
razmijeniti sadržaj dva vektora “v1” i “v2” (tj. želimo da se elementi vektora “v1” pojave unutar vektora
“v2”, a elementi vektora “v2” unutar vektora “v1”)
------------------------------------------move-semantika----------------------------------------------------- */
#include <iostream>
#include <vector>

typedef std::vector<int> Vektor;


int main() {
    Vektor v1 = {1, 2, 3, 4, 5};
    Vektor v2 = {6, 7, 8, 9, 10};
    Vektor pomocni;
    
    std::cout << "Vektor 1: ";
    for(int x : v1) std::cout << x << " ";
    std::cout << "\nVektor 2: ";
    for(int x : v2) std::cout << x << " ";
      
    //pomocni = v1; //Ova konstrukcija radi, ali je problem što se u njoj javljaju tri kopiranja vektora. Ako vektori “v1” i
    //v1 = v2;      //“v2” imaju po 1000000 elemenata, to je ukupno 3000000 kopiranja individualnih elemenata! Da li su
    //v2 = pomocni; //ovolika kopiranja zaista neophodna da bismo razmijenili dva vektora?
    
                                        
    pomocni = std::move(v1);   //Ovdje se prvo vektor “pomocni” “useljava” u onaj dio memorije gdje se nalazio vektor “v1” (koji pri tome
    v1 = std::move(v2);       //biva uništen). Zatim se vektor “v1” “useljava” u onaj dio memorije gdje se nalazio vektor “v2” i na kraju
    v2 = std::move(pomocni); //se vektor “v2” “useljava” u onaj dio memorije gdje se nalazio vektor “pomocni”, odnosno gdje se na početku nalazio vektor “v1”. 
                            //Ovim je izvršena razmjena dva vektora, a da pri tome niti jedan element nije premještan u memoriji, što je neuporedivo efikasnije!
    
                            
    std::cout << "\nVektor 1 nakon move semantike: ";
    for(int x : v1) std::cout << x << " ";
    std::cout << "\nVektor 2 nakon move semantike: ";
    for(int x : v2) std::cout << x << " ";
    

    return 0;
}