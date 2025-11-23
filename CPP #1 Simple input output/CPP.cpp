#include <iostream>

int main()
{
	std::string name; 
	int age; 
	float height;

	std::cout << "Enter your name: "; 
	std::cin >> name; 

	std::cout << "Enter your age: "; 
	std::cin >> age; 

	std::cout << "Enter your height: ";
	std::cin >> height; 

	std::cout << "Name: " << name << std::endl; 
	std::cout << "Age: " << age << std::endl; 
	std::cout << "Height: " << height << std::endl; \
	
	return 0;
}
