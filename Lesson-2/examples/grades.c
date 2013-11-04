#include <stdio.h>
int main()
{
	float grade;
    printf("What is your grade percentage?");
    scanf("%f",&grade);
    if(grade >= 90)
	{
	    printf("You got an A");
	}
	if(grade >= 80)
	{
	    printf("You got a B");
	}
	if(grade >= 70)
	{
		printf("You got a C");
	}
	if(grade >= 60)
	{
	    printf("You got a D");
	}
	if(grade < 60)
	{
		printf("You got an F");
	}
}