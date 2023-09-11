#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
   * main - Entry point
   *Return: Always (Success)
   *
   */

int main(void)
{

int d;
char low;

for (d = '0'; d <= '9'; d++)
putchar(d);

for (low = '0'; low <= '9'; low++)
putchar(low);
putchar('\n');


return (0);
}
