NAME = lib.a

LIBFT = libft/libft.a
LIBEX = libex/libex.a

$(LIBFT):
			make -C libft
			mv $(LIBFT) .

$(LIBEX):	$(LIBFT)
			make -C libex
			mv $(LIBEX) .

$(NAME):	$(LIBEX)
			rm -rf $@
			ar cqT $@ @^
			echo "create $@\naddlib $@\nsave\nend" | ar -M

all:		$(NAME)