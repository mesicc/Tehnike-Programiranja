#include <iostream>

int main() {
	int visina;
	std::cout << "Unesite visinu: ";
	std::cin >> visina;

	for(int i = 1; i < visina; i++) std::cout << " ";
	std::cout << "*\n";

	int broj_razmaka1 = visina - 2;
	int broj_razmaka2 = 1;

	for(int red = 2; red < visina; red++) {
		for(int i = 1; i <= broj_razmaka1; i++) std::cout << " ";
		std::cout << "*";
		for(int i = 1; i <= broj_razmaka2; i++) std::cout << " ";
		std::cout << "*\n";

		broj_razmaka1--; 
		broj_razmaka2 += 2;
	}

	for(int i = 1; i <= broj_razmaka2 + 2; i++) std::cout << "*";
 	std::cout << std::endl;
	
	return 0;
}