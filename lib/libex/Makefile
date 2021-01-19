NAME = libex.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

INCLUDE = -I../libft/
SRCDIR = ./

SRCNAME = 
SRCNAME += ft_strchri.c
SRCNAME += ft_strndup.c
SRCNAME += get_next_line.c

SRCS = $(addprefix $(SRCDIR),$(SRCNAME))
OBJS = $(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re run