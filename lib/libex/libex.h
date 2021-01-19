#ifndef LIBEX_H
# define LIBEX_H

# define BUFFER_SIZE 100
# define READ_ERROR -1
# define READ_EOF 0
# define READ 1

int		ft_strchri(char *str, char c);
char	*ft_strndup(char const *src, size_t len);
int		get_next_line(int fd, char **line);

#endif