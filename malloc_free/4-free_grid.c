#include"main.h"
#include<stdlib.h>
/**
 *free_grid - Function
 *@grid: Bidimensional array to free
 *@height: Height
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid == NULL)
		return;
	while (a < height)
		free((int *)grid[a++]);
	free(grid);
}
