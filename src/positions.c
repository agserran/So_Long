#include "so_long.h"

void	positions(t_map *map)
{
	int	y;
	int	x;

	x = 0;
	y = 0;
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

void	error_pack1(char *type)
{
	if(s == "len")
	{
		ft_putstr("Irregular map len, it have to be rectangular.");
		exit(1);
	}
	if(s == "closed")
	{
		ft_putstr("The map is not closed correctly.");
		exit(1);
	}
	if(s == "player")
	{
		ft_putstr("There has to be only one player.");
		exit(1);
	}
	if(s == "exit")
	{
		ft_putstr("There has to be only one exit.");
		exit(1);
	}
}