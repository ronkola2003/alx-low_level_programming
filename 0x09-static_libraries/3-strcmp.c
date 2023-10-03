#include "main.h"

/**
 * _strmp - program compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[r] - s2[r]
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
