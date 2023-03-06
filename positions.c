#include "so_long.h"

int	player_x(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while(map[y])
	{
		while(map[y][x])
		{
			if(map[y][x] == 'P')
				return(x);
			x++;
		}
		y++;
	}
	return(0);
}

int	player_y(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while(map[y])
	{
		while(map[y][x])
		{
			if(map[y][x] == 'P')
				return(y);
			x++;
		}
		y++;
	}
	return(0);
}