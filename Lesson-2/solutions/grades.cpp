#include <iostream>
int main()
{
	float grade;
    std::cout << "What is your grade percentage?";
    std::cin >> grade;
    if(grade >= 90)
	{
	    std::cout << "You got an A";
	}
	else if(grade >= 80)
	{
	    std::cout << "You got a B";
	}
	else if(grade >= 70)
	{
		std::cout << "You got a C";
	}
	else if(grade >= 60)
	{
	    std::cout << "You got a D";
	}
	else
	{
		std::cout << "You got an F";
	}
}