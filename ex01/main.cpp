#include "test.hpp"
#include <iostream>

int main()
{
	try {
	testEx01();
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << "\n";
	}
	return 0;

}
