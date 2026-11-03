CC = cc 
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS) make_libft
	cp circle0/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C circle0

fclean: clean
	rm -f $(NAME)
	make fclean -C circle0

re: fclean all

make_libft:
	make -C circle0
.PHONY: clean make_libft
