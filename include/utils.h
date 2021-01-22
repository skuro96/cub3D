#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define READ 1
# define READ_EOF 0
# define READ_ERROR -1

# define BUFFER_SIZE 10

int		ft_strchri(char *str, char c);
char	*ft_strndup(char const *src, size_t len);
int		get_next_line(int fd, char **line);

#endif
