#include "../include/cub3d.h"

int max(int a, int b)
{
	return (a > b ? a : b);
}

void get_map_size(char *fname, int *row, int *col)
{
	int fd;
	int cnt_row;
	int max_col;
	int ret;
	char *line;

	cnt_row = 0;
	max_col = 0;
	line = NULL;
	fd = open(fname, O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		cnt_row++;
		max_col = max(ft_strlen(line), max_col);
		free(line);
	}
	if (ret == 0)
	{
		cnt_row++;
		max_col = max(ft_strlen(line), max_col);
		free(line);
	}
	*row = cnt_row;
	*col = max_col;
	close(fd);
}

int free_all(char **ptr, int n, int ret)
{
	int i;

	if (!ptr)
		return (ret);
	i = 0;
	while (i < n)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (ret);
}

void make_row_edge(char *row, int max_col)
{
	int c;

	c = 0;
	while (c < max_col + 2)
		row[c++] = '#';
	row[c] = '\0';
}

int make_row(int fd, char *row, int max_col)
{
	char *line;
	int c;

	c = 0;
	if (get_next_line(fd, &line) < 0)
		return (0);
	while (c < max_col + 2)
	{
		if (c == 0 || c == max_col + 1)
			row[c] = '#';
		else if (c < (int)(ft_strlen(line) + 1))
			row[c] = line[c - 1];
		else
			row[c] = ' ';
		c++;
	}
	row[c] = '\0';
	free(line);
	return (1);
}

int make_map(char *fname, char ***m)
{
	int row;
	int col;
	int r;
	int fd;
	char **map;

	get_map_size(fname, &row, &col);
	fd = open(fname, O_RDONLY);
	if (!(map = malloc(sizeof(char *) * (row + 2 + 1))))
		return (0);
	r = 0;
	while (r < row + 2)
	{
		if (!(map[r] = malloc(col + 2 + 1)))
			return (free_all(map, r, 0));
		if (r == 0 || r == row + 1)
			make_row_edge(map[r], col);
		else if (!make_row(fd, map[r], col))
			return (free_all(map, r + 1, 0));
		r++;
	}
	map[r] = NULL;
	*m = map;
	close(fd);
	return (1);
}

int main(int argc, char **argv)
{
	char **map;
	if (argc < 2)
		return (0);

	make_map(argv[1], &map);
	int i = 0;
	while (map[i])
	{
		printf("%s\n", map[i]);
		free(map[i]);
		i++;
	}
	free(map);
	system("leaks a.out");
	return (0);
}