#include "main.h"
/**
* rev_string -Checker
*@s: Parameter to check
*/
void rev_string(char *s)
{
	int len = 0, o = 0;
	char x;

	while (s[len] != '\0')
		len++;
	while (o < len--)
	{
		x = s[o];
		s[o++] = s[len];
		s[len] = x;
	}
}
