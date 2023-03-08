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
	if((map->exits != '1') || (map->player != '1'))
		printf("error adfkbafa");
	if((map->collect < '1'))
		printf("error dkjñsfahoidagfpdsihghsjidog");
}

/*void	inside(t_map *map)
{
	map->matrix[y][x] = 'P';
	int	y;
	y = 1;

	while(y < map->height - 1)
	{
		if (map->matrix[map])
		{
			
		}
		
	}
}*/
