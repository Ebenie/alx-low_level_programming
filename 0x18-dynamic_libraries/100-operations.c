#include "main.h"

/**
 * add - adds two integer
 * Return: (a + b) always
 */
int add(int a, int b)
{
return a + b;
}

/**
 * sub - subtracts integer from the first
 * Return: (a - b) always
 */
int sub(int a, int b)
{
return a - b;
}



/**
 * mul - multiply two integer
 * Return: (a * b) always
 */
int mul(int a, int b)
{
return a * b;
}


/**
 * div - divides the first integer to second
 * Return: (a / b) always
 */
int div(int a, int b)
{
if (b != 0)
{
return a / b;
}
else
{

return 0;
}
}

/**
 * mod - finds the remainder
 * Return: (a % b) always
 */
int mod(int a, int b) {
if (b != 0)
{
return a % b;
}
else
{
return 0;
}
}
