/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:29:41 by agserran          #+#    #+#             */
/*   Updated: 2023/01/12 15:53:54 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	height(t_map *map, int fd)
{
	char	*lane;
	int		i;

	i = 1;
	lane = get_next_line(fd);
	while (lane)
	{
		lane = get_next_line(fd);
		i++;
	}
	map->height = i;
	close(fd);
}

void	len_checker(t_map *map)
{
	int		i;
	
	i = 0;
	map->wide = ft_strlen(map->matrix[0]);
	while(i < map->height)
	{
		if (map->wide != (int)ft_strlen(map->matrix[i]))
		{
			ft_putstr("Invalid map, the map have to be rectangular.");
		}
		i++;
	}
}

void	mapa(int fd, t_map *map)
{
	int		i;
	char	*file;
	char	*line;

	line = get_next_line(fd);
	i = 0;
	file = ft_calloc(1,1);
	while (line)
	{
		file = ft_strjoin(file, line);
		line = get_next_line(fd);
		i++;
	}
	map->matrix = ft_split(file, '\n');
	close(fd);
}

void	side_checker(t_map *map)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	while(y < map->height)
	{
		while(x < map->wide)
		{
			if(map->matrix[0][x] != '1' || map->matrix[map->height - 1][x] != '1' )
			{
				printf("invalid map\n");
			}
			if(map->matrix[y][map->wide - 1] != '1' || map->matrix[y][0] != '1')
			{
				printf("invalid map");
			}
			x++;
		}
		y++;
	}
}

 int	main(void)
{
	t_map map;
	int		fd;
	int		fd2;
	fd = open("C:/Users/agust/Desktop/progamacion/So_Long/map.ber", O_RDONLY);	
	fd2 = open("C:/Users/agust/Desktop/progamacion/So_Long/map.ber", O_RDONLY);
	memset(&map, 0, sizeof(t_map));
	//mapa(fd);
	//len_checker(fd, fd2);
	//height(fd2);
	//int b = len_checker(fd, fd2);
	//printf("%d", b);
	return 0;
}
