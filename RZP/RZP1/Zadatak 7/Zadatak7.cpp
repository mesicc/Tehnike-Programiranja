#include <iostream>

int main() {
	int visina;
	std::cout << "Unesite visinu: ";
	std::cin >> visina;

	for(int i = 1; i < visina; i++) std::cout << " ";
	std::cout << "*\n";


	for(int red = 2; red < visina; red++) {
		for(int i = 1; i <= visina - red; i++) std::cout << " ";
		std::cout << "*";
		for(int i = 1; i <= 2 * red - 3; i++) std::cout << " ";
		std::cout << "*\n";
	}

	for(int i = 1; i < 2 * visina; i++) std::cout << "*";
 	std::cout << std::endl;
	
	return 0;
}