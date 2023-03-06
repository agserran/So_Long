#include "so_long.h"

void	positions(t_map *map)
{
	int	y;
	int	x;

	while(map->matrix[y])
	{
		while(map->matrix[y][x])
		{
			if(map->matrix[y][x] == 'P')
				{
					map->p.x = x;
					map->p.y = y;
				}
			if(map->matrix[y][x] == 'E')
				{
					map->e.x = x;
					map->e.y = y;
				}
			if(map->matrix[y][x] == 'C')
				{
					map->c.x = x;
					map->c.y = y;
				}
			x++;
		}
		y++;
	}
}