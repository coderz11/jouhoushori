#include <stdio.h>

int main()
{
    int a;

    printf("Enter a Base-16 ASCII Code ->");
    scanf("%x", &a);
	printf("You entered %x. \n", a); 
	printf("The letter it represents is %c.\n", a); 
    return(0);
}
