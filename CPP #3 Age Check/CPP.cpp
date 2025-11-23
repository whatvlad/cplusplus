#include <iostream>

int main()
{
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	if (age < 0) { std::cout << "Invalid age entered." << std::endl; }
	else if (age <= 12) { std::cout << "Hello " << name << ", you are a child." << std::endl; }
	else if (age <= 17) { std::cout << "Hello " << name << ", you are a teenager. " << std::endl; }
	else if (age <= 64) { std::cout << "Hello " << name << ", you are an adult." << std::endl; }
	else { std::cout << "Hello " << name << ", you are a senior citizen." << std::endl; }
}