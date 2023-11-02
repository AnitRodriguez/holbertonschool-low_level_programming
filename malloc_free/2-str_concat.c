#include"main.h"
#include<stdlib.h>
/**
*char *str_concat - Function that concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: The returned pointer should point to a newly allocated space in
*memory which contains the contents of s1, followed by the contents of s2,
*and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	char *x, *y, *z;
	int a = 0, b = 0, c = 0;

	y = s1;
	z = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		b++;
		s1++;
	}
	s1 = y;
	if (s2 == NULL)
		s2++;
	while (*s2)
	{
		c++;
		s2++;
	}
s2 = z;
x = malloc(sizeof(char) * (b + c + 1));
y = x;
if (x == NULL)
	return (NULL);
for (; a < (b + c); a++)
{
	if (a < b)
	{
		x[a] = *s1;
		s1++;
	}
	else
	{
		x[a] = *s2;
		s2++;
	}
}
	x[a] = '\0';
	return (y);
}
