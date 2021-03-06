/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	TestSuite test;
	int numPassed = test.runAllTest();
		std::cout << "The number of tests passed was: " <<numPassed <<" out of 82 test\n";

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
