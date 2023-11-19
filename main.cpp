#include <iostream>
#include "String.h"


int main() {

	String s1("Hello, World!");
	std::cout << s1.c_str() << std::endl;

	return 0;
}