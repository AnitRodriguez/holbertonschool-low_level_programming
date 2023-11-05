#include"main.h"
#include<stdlib.h>
/**
 *string_nconcat - Function
 *@s1: string
 *@s2: other string
 *@n: bytes to s1 concatenate s2
 *Return: concatened string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *astr;
	unsigned int x = 0, y = 0, z = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[y])
		y++;
	if (s2 == NULL)
		s2 = "";
	while (s2[z])
		z++;
	if (n >= z)
		n = z;
	astr = malloc(y + n + 1);
	if (astr == NULL)
		return (NULL);
	for (; x < (y + n); x++)
	{
		if (x < y)
			astr[x] = *s1, *s1++;
		else
			astr[x] = *s2, *s2++;
	}
	astr[x] = '\0';
	return (astr);
}
