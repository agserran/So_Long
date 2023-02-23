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
	h = height(fd2);
	matrix = mapa(fd);
	printf("hola");
	while(i < h)
	{
		if(ft_strlen(matrix[0]) != ft_strlen(matrix[i]))
		{
			ft_putstr("Invalid map, the map have to be rectangular.");
			c++;
			return (c);
		}
		i++;
	}
	printf("%d\n", c);
	return (c);
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
		printf("LINEA %s\n", file);
	}
	matrix = ft_split(file, '\n');
	return (matrix);
}

 int	main(void)
{
	int		fd;
	int		fd2;
	fd = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	fd2 = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	mapa(fd);
	//height(fd2);
	//int b = len_checker(fd, fd2);
	//printf("%d", b);
	return 0;
}
