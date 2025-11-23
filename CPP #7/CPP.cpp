#include <iostream>

void printAdd(int a, int b) {
	std::cout << "Add: " << (a + b) << std::endl;
};

void printSub(int a, int b) {
	std::cout << "Sub: " << (a - b) << std::endl;
}

void printMultiplicate(int a, int b) {
	std::cout << "Multiplicate: " << (a * b) << std::endl;
}

void printDivision(int a, int b) {
	if (a == 0 || b == 0) {
		std::cout << "Cannot divide by zero!" << std::endl;
		return;
	}
	std::cout << "Divide: " << (a / b) << std::endl;
}


int main()
{
	int a, b;
	std::cout << "Enter first integer: ";
	std::cin >> a;

	std::cout << "Enter second integer: ";
	std::cin >> b;

	printAdd(a, b);

	printSub(a, b);

	printMultiplicate(a, b);

	printDivision(a, b);
}


