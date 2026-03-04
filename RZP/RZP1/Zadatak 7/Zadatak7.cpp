#include <iostream>
#include <iomanip>

int main() {
	int visina;
	std::cout << "Unesite visinu: ";
	std::cin >> visina;

	for(int red = 1; red <= visina; red++) {
		for(int i = 1; i <= visina - red; i++) std::cout << " ";
		if(red != 1) {
			std::cout << "*";
			for(int i = 1; i <= 2 * red - 3; i++)
				if(red == visina) std::cout << "*";
				else std::cout << " ";
		}
		std::cout << "*\n";
 	}
	
	return 0;
}