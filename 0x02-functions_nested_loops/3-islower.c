#include "main.h"

/**
 * _isalpha - Check for alpabetic character
 * @c: The character to checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _islower(int c)
{

if ((c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
