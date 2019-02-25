#include <iostream>
#include <ctime>
int main() {
	srand(time(NULL));
	int n, m, j = 0;
	m = rand() % 100;
	std::cout << "Enter a number that i guessed= ";
	std::cin >> n;
	while (n != m) {
		if (n > m) {
			std::cout << "Number too high!! Please try again= ";
			std::cin >> n;
		}
		else if (n < m) {
			std::cout << "Number too low!! Please try again= ";
			std::cin >> n;
		}
		j++;
	}
	std::cout << "Great!! You guessed it right. The number is= " << n;
	std::cout << " You took " << j << " tries.";
	std::cin.ignore();
	std::cin.get();
}
