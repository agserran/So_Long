#ifndef SO_LONG_H
# define SO_LONG_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# define ESC	53
# define W		13
# define A		0
# define S		1
# define D		2
# define UP			126
# define LEFT		123
# define DOWN		125
# define RIGHT		124
# define ESC 	17

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

# include "get_next_line.h"

typedef struct s_player
{
	int	x;
	int	y;
	int	moves;
}t_player;

typedef struct s_collectables
{
	int	x;
	int	y;
}t_collectables;

typedef struct s_exit
{
	int	x;
	int	y;
}t_exit;

typedef struct s_map
{
	int				height;
	int				wide;
	char			**matrix;
	char			**copy;
	int				exits;
	int				player;
	int				collect;
	t_player		p;
	t_exit			e;
	t_collectables	c;
}t_map;

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
char	*ft_strjoin(char *stash, char *buffer);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**checker(char **str);
char    **ft_split(char const *s, char c);
void	ft_putstr(char	*s);
void	side_checker(t_map *map);
void	mapa(int fd, t_map *map);
void	len_checker(t_map *map);
void	height(t_map *map, int fd);
void    ichecker(t_map *map);
void	error_pack1(char *type);
void    win();
void    moves(int key, t_map *map);
void    up(t_map *map);
void    down(t_map *map);
void    right(t_map *map);
void    left(t_map *map);

#endif