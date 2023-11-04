#include"main.h"
#include<stdlib.h>
/**
 *alloc_grid - Function
 *@width: width
 *@height: height
 *Return: Pointer in arrays, error or null
 */
int **alloc_grid(int width, int height)
{
	int **proyect, a = 0, b = 0;

		if (width <= 0 || height <= 0)
			return (NULL);
		proyect = (int **)malloc(sizeof(int *) * height);
		if (proyect == NULL)
			return (NULL);
	for (a = 0; a < height; a++)
	{
		proyect[a] = (int *)malloc(sizeof(int) * width);
		if (proyect[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(proyect[b]);
			}
			free(proyect);
		}
	}
	for (a = 0; a < height; a++)
	{
		proyect[a][b] = 0;
	}
	return (proyect);
}
