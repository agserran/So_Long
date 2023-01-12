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

#include "get_next_line.h"

static int height(int fd)
{
	int		i;
	int		len;
	char	*linea;

	i = 1;
	linea = get_next_line(fd);
	len = ft_strlen(linea);
	while (linea)
	{
		if(len != ft_strlen(linea))
			write(1, "INVALID MAP", 12);
		linea = get_next_line(fd);
		i++;
		free(linea);
	}
	return(i);
}

char	**map(int fd2, int fd)
{
	int		i;
	char	**matrix;
	int		pinga;

	pinga = height(fd);	
	i = 0;
	matrix = malloc(sizeof(char *) * pinga);
	printf("%d\n", pinga);
	while (i < pinga)
	{
		matrix[i] = get_next_line(fd2);
		printf("matriz  %s\n", matrix[i]);
		i++;
	}
	return (matrix);
}

int	main(void)
{
	int	fd;
	int	fd2;
	char	**map2;

	fd = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	fd2 = open("/Users/agserran/CURSUS/so_long/map.ber", O_RDONLY);	
	map(fd2, fd);
	//checker_map(map2, fd);
	return 0;
}
