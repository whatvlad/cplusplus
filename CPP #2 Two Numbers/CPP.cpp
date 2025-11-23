#include <iostream>

int main()
{
	std::cout << "Enter 2 numbers:" << std::endl; 

	int a, b; 

	std::cout << "x = "; 
	std::cin >> a; 

	std::cout << "y = "; 
	std::cin >> b; 

	std::cout << "Sum = " << a + b << std::endl; 
	std::cout << "Difference = " << a - b << std::endl; 
	std::cout << "Product = " << a * b << std::endl; 
	std::cout << "Quotient = " << a / b << std::endl; 
	
	return 0;
}
