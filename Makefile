CC		= gcc
INCLUDE = -I./minilibx -I./include

CFLAGS	= -Wall -Wextra -Werror $(INCLUDE)
MLXFLAGS = -L./minilibx -lmlx -framework OpenGL -framework AppKit

SRCS = 
SRCS += $(wildcard libft/*.c)
SRCS += $(wildcard utils/*.c)

OBJS = $(SRCS:.c=.o)

all:
	$(CC) $(CFLAGS) $(INCLUDE) $(MLXFLAGS) src/main.c
	./a.out

map:	$(OBJS)
		$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) src/read_map.c