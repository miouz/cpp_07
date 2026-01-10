#include "test.hpp"
#include "iter.hpp"

void incrementChar(char c)
{
	std::cout <<" char is: "<< ++c <<"\n";
}

void testEx01()
{
	PRINT_HEADER("CONST AND NON CONST ARRAY WITH TEMPLATE");
	PRINT_SUBHEADER("template apply to const array");
	const int intConstArray[5] = {0, 4, -2435, 5, 10};
	iter(intConstArray,printElement<int>);

	PRINT_SUBHEADER("template apply to non const array");
	int intNonConstArray[5] = {0, 4, -2435, 5, 10};
	iter(intNonConstArray, printElement<int&>);


	PRINT_SUBHEADER("template apply to non const string array");
	std::string strNonConstArray[3] = {"lol", "wesh", "mdr"};
	iter(strNonConstArray, printElement<std::string&>);
	
	PRINT_SUBHEADER("template apply to const string array");
	std::string const strConstArray[3] = {"lol", "wesh", "mdr"};
	iter(strConstArray, printElement<std::string>);

	PRINT_HEADER("TEST FOR FUNCTION POINTER");
	PRINT_SUBHEADER("NULL ptr for function pointer(doesnt compile)");
	// iter(strConstArray, NULL);
	PRINT_SUBHEADER("increment function apply to char array");
	char charNonConstArray[3]={'l', 'o', 'l'};
	iter(charNonConstArray, &incrementChar);
}
