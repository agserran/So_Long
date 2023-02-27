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

int	height(int fd)
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
	return(i);
}
int	len_checker(int	fd, int fd2)
{
	int		i;
	char	**matrix;
	int		h;
	int		c;
	
	i = 0;
	h = height(fd);
	matrix = mapa(fd2);
	while(i < h)
	{
		if(ft_strlen(matrix[0]) != ft_strlen(matrix[i]))
		{
			ft_putstr("Invalid map, the map have to be rectangular.");
			return (1);
		}
		i++;
	}
	return (2);
}

char	**mapa(int fd)
{
	int		i;
	char	*file;
	char	*lane;
	char	**matrix;

	lane = get_next_line(fd);
	i = 0;
	file = ft_calloc(1,1);
	while (lane)
	{
		file = ft_strjoin(file, lane);
		lane = get_next_line(fd);
		i++;
	}
	matrix = ft_split(file, '\n');
	close(fd);
	return (matrix);
}

int	side_checker(int fd, int fd2)
{
	char	**copy;
	int		y;
	int		x;
	int		max_X;
	int		max_Y;

	max_Y = height(fd2);
	max_X = ft_strlen(copy[0]);
	copy = mapa(fd);
	printf("antes del bucle");
	while(copy[y])
	{
		while(copy[y][x])
		{
			if (copy[0][x] != 1 || copy[max_Y][x] != 1)
				return(0);
			x++;
		}
		while(y > 0 && y < max_Y)
		{
			
		}
	}
	return(1);
}

 int	main(void)
{
	int		fd;
	int		fd2;
	fd = open("C:/Users/agust/Desktop/progamacion/So_Long/map.ber", O_RDONLY);	
	fd2 = open("C:/Users/agust/Desktop/progamacion/So_Long/map.ber", O_RDONLY);	
	//mapa(fd);
	//len_checker(fd, fd2);
	//height(fd2);
	//int b = len_checker(fd, fd2);
	//printf("%d", b);
	side_checker(fd, fd2);
	return 0;
}
