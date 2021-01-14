#include "cub3d.h"

void game_init(t_game *game)
{
	int map[MAP_ROWS][MAP_COLS] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	for (int i = 0; i < MAP_ROWS; i++)
		for (int j = 0; j < MAP_COLS; j++)
			game->map[i][j] = map[i][j];
}

void window_init(t_game *game)
{
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "cub3D");
	game->data.img = mlx_new_image(game->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	game->data.addr = mlx_get_data_addr(game->data.img, &game->data.bits_per_pixel, &game->data.line_length, &game->data.endian);
}

void draw_pixel(t_game *game, int x, int y, int color)
{
	char	*dst;
	t_data	d;

	if (!(0 <= x && x < WINDOW_WIDTH && 0 <= y && y < WINDOW_HEIGHT))
		return ;
	d = game->data;
	dst = d.addr + (y * d.line_length + x * d.bits_per_pixel / 8);
	*(unsigned int *)dst = color;
}

void draw_line(t_game *game, int sx, int sy, int ex, int ey, int color)
{
	int x;
	int y;

	x = sx;
	if (sx == ex)
	{
		y = sy;
		while ((ey > sy) ? (y <= ey) : (y >= ey))
		{
			draw_pixel(game, x, y, color);
			y += (ey > sy ? 1 : -1);
		}
	}
	else
	{
		while ((ex > sx) ? (x <= ex) : (x >= ex))
		{
			y = sy + (x - sx) * (ey - sy) / (ex - sx);
			draw_pixel(game, x, y, color);
			x += (ex > sx ? 1 : -1);
		}
	}
}

int main(void)
{
	t_game game;

	game_init(&game);
	window_init(&game);

	for (int i = 0; i < MAP_ROWS; i++){
		for (int j = 0; j < MAP_COLS; j++){
			printf("%d ", game.map[i][j]);
		}
		printf("\n");
	}

	draw_line(&game, 100, 200, 100, 800, 0x00FF0000);
	mlx_put_image_to_window(game.mlx, game.win, game.data.img, 0, 0);
	mlx_loop(game.mlx);
}