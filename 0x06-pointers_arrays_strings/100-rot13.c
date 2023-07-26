#include "main.h"
#include <stdio.h>

/**
 * rot13 - to encode rot13
 * @s: The pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char index[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char indexrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzsbcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == index1[b])
			{
				s[a] = indexrot[b];
				break;
			}
		}
	}
	return (s);
}	
