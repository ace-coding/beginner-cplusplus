#include <stdio.h>
int main()
{
	char input[20];
    printf("What is your name?");
    fgets(input,20,stdin);
    printf("Hello, %s", input);
}
