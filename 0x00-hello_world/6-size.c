#include <stdio.h>

/**
* main - prints the size of various types 
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
printf("Size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
return (0);
}
