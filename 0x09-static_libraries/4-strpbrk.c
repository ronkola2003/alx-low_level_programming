#include "main.h"

/**
 * _strpbrk - program entry point
 * @s: input value
 * @accept: input value
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}

