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
	char	**copy;
	int		i;
	
	copy = map(fd);
	i = height(fd2);
}

char	*map(int fd)
{
	int		i;
	char	*file;
	char	*lane;
	
	lane = get_next_line(fd);
	i = 0;
	file = ft_calloc(1,1);
	while (lane)
	{
		file = ft_strjoin(file, lane);
		lane = get_next_line(fd);
		i++;
	}
	return (file);
}

char	**map_splited(int fd)
{
	char	*map2 = map(fd);
	char	**def = ft_split(map2, '\n');
	return (def);
}

 int	main(void)
{
	int		fd;
	int		fd2;
	fd = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	fd2 = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	map(fd);
	height(fd2);
	
	//checker_map(map2, fd);
	return 0;
}
