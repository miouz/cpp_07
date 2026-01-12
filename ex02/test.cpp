#include "test.hpp"

void testEx02()
{
	PRINT_HEADER("TEST FOR CONSTRUCTORS");
	PRINT_SUBHEADER("test for defaut constructor");
	try{
	Array<int>emptyArray;
	std::cout << emptyArray[0] << "\n";
	}catch(std::exception& e){
		std::cout << e.what()<<std::endl;
	}


	PRINT_SUBHEADER("test for constructor with unsigned int and size function");
	try {
	Array<int>intArray(5);
	std::cout << "size expected 5: "<< intArray.size()<<std::endl;
	std::cout << "try to print not initialized array: ";
	intArray.printArray();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	PRINT_SUBHEADER("test for operator = overload");
	try {
	Array<int> intArrayOringinal(5);
	for (unsigned int i = 0; i < 5; i++)
			intArrayOringinal[i] = i;
	Array<int>intArray(5);
	intArray = intArrayOringinal;
	intArray.printArray();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	PRINT_SUBHEADER("test for copy constructor");
	try {
	Array<int> intArrayOringinal(5);
	for (unsigned int i = 0; i < 5; i++)
			intArrayOringinal[i] = i;
	Array<int>intArray(intArrayOringinal);
	intArray.printArray();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
