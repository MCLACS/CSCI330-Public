#include "MathManager.h"
#include <iostream>

int main(int argc, char * argv[])
{
	MathManager mgr(5);
	mgr.readNumbers();
	std::cout << mgr;
	std::cout << "Sum : " << mgr.sum() << std::endl;
	std::cout << "average : " << mgr.average() << std::endl;
	std::cout << "Max : " << mgr.max() << std::endl;

}