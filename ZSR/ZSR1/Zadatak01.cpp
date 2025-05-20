/* Napišite program koji traži da sa tastature unesemo podatke o dva vremenska trenutka, u satima,
minutama i sekundama, a koji računa i ispisuje vrijeme koje je proteklo između ta dva vremenska
trenutka, također u satima, minutama i sekundama. Pretpostaviti da je drugi vremenski trenutak
uvijek nakon prvog. Na primjer, dijalog nakon pokretanja programa može da izgleda poput sljedećeg:
Unesi prvo vrijeme (h min s): 14 15 7
Unesi drugo vrijeme (h min s): 16 9 34
Između ova dva trenutka proteklo je 1h 54min 27s.
Uputa: Jedan način rješavanja mogao bi biti sljedeći: pretvorite oba unesena vremena u broj
sekundi. Na primer, imamo 14h 15min 7s = 51307s i 16h 9min 34s = 58174s. Oduzmite broj
sekundi da dobijete broj sekundi između ovih trenutaka (6867s u zadanom primjeru). Konačno,
razložite dobijeni broj sekundi ponovo na sate, minute i sekunde (6867s = 1h 54min 27s) */
#include <iostream>

int main() {
    int h,min,sek;
    int h1,min1,sek1;

    std::cout << "Unesite prvo vrijeme (h min s): ";
    std::cin >> h >> min >> sek;
    std::cout << "Unesite drugo vrijeme (h min s): ";
    std::cin >> h1 >> min1 >> sek1;

    int prvo_vrijeme = (h * 3600) + (min * 60) + sek;
    int drugo_vrijeme = (h1 * 3600) + (min1 * 60) + sek1;

    int trenutno_vrijeme = prvo_vrijeme - drugo_vrijeme;
    int sati = trenutno_vrijeme / 3600;
    int minute = (trenutno_vrijeme % 3600) / 60;
    int sekunde = trenutno_vrijeme % 60;

    std::cout << "Izmedju ova dva trenutka proteklo je " 
          << abs(sati)<< " h " 
          << abs(minute) << " min " 
          << abs(sekunde) << " s.\n";

    return 0;
}