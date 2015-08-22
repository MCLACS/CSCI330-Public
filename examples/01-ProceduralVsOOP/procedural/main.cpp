#include "procedural.h"
#include <iostream>

const int SIZE(5);

int main(int argc, char * argv[])
{
	int numbers[SIZE];
	readNumbers(numbers, SIZE);
	printNumbers(numbers, SIZE);
	std::cout << "Sum: " << sum(numbers, SIZE) << std::endl;
	std::cout << "Average: " << average(numbers, SIZE) << std::endl;
	std::cout << "Max: " << max(numbers, SIZE) << std::endl;
}