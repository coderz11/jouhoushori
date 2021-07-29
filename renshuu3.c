#include <stdio.h>

int main()
{
    int a;

    printf("Enter a Base-10 number ->");
    scanf("%d", &a);
	printf("You entered %d. \n", a); 
	printf("In 8-Base it its %o.\n", a); //8 base
	printf("In 16-Base it is %x.\n", a); //Hexadecimal
    return(0);
}
