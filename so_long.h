#ifndef SO_LONG_H
# define SO_LONG_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
char	*ft_strjoin(char *stash, char *buffer);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**checker(char **str);
char    **ft_split(char const *s, char c);
#endif