#include "main.h"

/**
 * _isalphabet- Check for alpabetic character
 * @c: The character to checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalphabet(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}