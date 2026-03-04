#include <iostream>
#include <iomanip>

int main() {
	int visina;
	std::cout << "Unesite visinu: ";
	std::cin >> visina;

	std::cout << std::setw(visina) << "*" << std::endl;

	for(int red = 2; red < visina; red++) 
		std::cout << std::setw(visina - red + 1) << "*"
 				   << std::setw(2 * red - 2) << "*" << std::endl;
 	
	std::cout << std::setfill('*') << std::setw(2 * visina - 1) << "" << std::endl;
	
	return 0;
}