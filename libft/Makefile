NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

INCDIR	=	./
HNAME	=	libft.h
SRCDIR	=	./

SRCNAME	=
SRCNAME += ft_atoi.c
SRCNAME += ft_bzero.c
SRCNAME += ft_calloc.c
SRCNAME += ft_isalnum.c
SRCNAME += ft_isalpha.c
SRCNAME += ft_isascii.c
SRCNAME += ft_isdigit.c
SRCNAME += ft_isprint.c
SRCNAME += ft_itoa.c
SRCNAME += ft_memccpy.c
SRCNAME += ft_memchr.c
SRCNAME += ft_memcmp.c
SRCNAME += ft_memcpy.c
SRCNAME += ft_memmove.c
SRCNAME += ft_memset.c
SRCNAME += ft_putchar_fd.c
SRCNAME += ft_putendl_fd.c
SRCNAME += ft_putnbr_fd.c
SRCNAME += ft_putstr_fd.c
SRCNAME += ft_split.c
SRCNAME += ft_strchr.c
SRCNAME += ft_strdup.c
SRCNAME += ft_strjoin.c
SRCNAME += ft_strlcat.c
SRCNAME += ft_strlcpy.c
SRCNAME += ft_strlen.c
SRCNAME += ft_strmapi.c
SRCNAME += ft_strncmp.c
SRCNAME += ft_strnstr.c
SRCNAME += ft_strrchr.c
SRCNAME += ft_strtrim.c
SRCNAME += ft_substr.c
SRCNAME += ft_tolower.c
SRCNAME += ft_toupper.c
			
BONUSNAME =	
BONUSNAME += ft_lstadd_back.c
BONUSNAME += ft_lstadd_front.c
BONUSNAME += ft_lstclear.c
BONUSNAME += ft_lstdelone.c
BONUSNAME += ft_lstiter.c
BONUSNAME += ft_lstlast.c
BONUSNAME += ft_lstmap.c
BONUSNAME += ft_lstnew.c
BONUSNAME += ft_lstsize.c

SRCS	=	$(addprefix $(SRCDIR),$(SRCNAME))
HEADERS	=	$(addprefix $(INCDIR),$(HNAME))
OBJS	=	$(SRCS:.c=.o)
BONUSOBJ =	$(BONUSNAME:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(HEADERS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJS) $(BONUSOBJ) $(HEADERS)
			ar rc $(NAME) $(OBJS) $(BONUSOBJ)

clean:
			rm -f $(OBJS) $(BONUSOBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
