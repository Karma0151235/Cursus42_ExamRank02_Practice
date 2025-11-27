#include "flood_fill.h"

void	dfs (t_point size, char **tab, int i, int j, char o, char n)
{
	if (i < 0 || i >= size.x || j < 0 || j >= size.y || tab[i][j] != o)
		return ;
	else
	{
		tab[i][j] = n;
		dfs(size, tab, i - 1, j, o, n);
		dfs(size, tab, i + 1, j, o, n);
		dfs(size, tab, i, j + 1, o, n);
		dfs(size, tab, i, j - 1, o, n);
	}
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	int n = size.x, m = size.y, start_x = begin.x, start_y = begin.y;
	char o = tab[start_x][start_y];
	char n = 'F';
	if (o == n)
		return ;
	dfs(size, **tab, start_x, start_y, o, n);
}