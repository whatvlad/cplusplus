#include <iostream>

int main()
{
	std::cout << "n = ";
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			std::cout << i << " ";
		}
	}
}
