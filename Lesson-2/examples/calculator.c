#include <stdio.h>
int main()
{
	int num1;
	int num2; 
	int num3;
	int result;
	printf("Enter any 3 numbers\r\nNumber 1: ");
	scanf("%i", &num1);
	printf("Number 2: ");
	scanf("%i", &num2);
	printf("Number 3: ");
	scanf("%i", &num3);
	result = num1 + num2 + num3;
	printf("%i",result); 
}