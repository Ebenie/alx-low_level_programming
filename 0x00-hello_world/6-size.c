#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>




/**
   * main - A program that prints the size of various computer types
   *Return: Always (Success)
   *
   */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned short)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned short)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned short)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned short)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned short)sizeof(f));

return (0);

}
