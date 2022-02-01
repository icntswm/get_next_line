#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//max size buffer size ~> 2billion
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *str, int a);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t number, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
