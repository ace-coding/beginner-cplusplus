#include <iostream>
int main()
{
	int num1;
	int num2; 
	int num3;
	int result;
	std::cout << "Enter any 3 numbers" << std::endl << "Number 1: ";
	std::cin >> num1;
	std::cout << "Number 2 ";
	std::cin >> num2;
	std::cout << "Number 3 ";
	std::cin >> num3;
	result = num1 + num2 + num3;
	std::cout << result; 
}