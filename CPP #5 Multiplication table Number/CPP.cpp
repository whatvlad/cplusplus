#include <iostream>

int main()
{
	std::cout << "n = ";
	int n;
	std::cin >> n;
	
	for (int i = 1; i <= 10; i++) {
		std::cout << n << " * " << i << " = ";
		std::cout << i * n << std::endl;
	}
}
