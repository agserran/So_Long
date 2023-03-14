#include "so_long.h"

void    ichecker(t_map *map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while(y < map->height - 1)
	{
		while(x < map->wide)
		{
			if(map->matrix[y][x] == 'P')
				map->player++;
			if(map->matrix[y][x] == 'C')
                map->collect++;
			if(map->matrix[y][x] == 'E')
                map->exits++;
			x++;
		}
		y++;
	}
}
void	itemsmax(t_map *map)
{
	if((map->exits != '1')
		error_pack1("exit");
	if((map->player != '1'))
		error_pack1("player");
	if((map->collect < '1'))
		error_pack1("collectables");
}