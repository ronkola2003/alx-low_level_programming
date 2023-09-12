#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *Return: 1 for alphabetic  character or 0 for anything else
 */

int _isalpha(int c)

{
while ((c >= 65 && c <= 122) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
