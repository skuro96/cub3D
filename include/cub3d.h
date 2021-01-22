#include <fcntl.h> // open
#include <unistd.h> // close, read, write
#include <stdlib.h> // malloc, free, exit
#include <stdio.h> // perror, strerror
#include <math.h>
#include <mlx.h>

#include "libft.h"
#include "utils.h"

#define TILE_SIZE 32
#define MAP_ROWS 11
#define MAP_COLS 15

#define WINDOW_WIDTH MAP_COLS * TILE_SIZE
#define WINDOW_HEIGHT MAP_ROWS * TILE_SIZE

#define EVENT_KEY_PRESS 2

#define KEY_ESC 53

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_game
{
	void	*mlx;
	void	*win;
	t_data	data;

	int		map[MAP_ROWS][MAP_COLS];
}				t_game;
