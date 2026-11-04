CC = cc 
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
LIBFT = libft_project/libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(LIBFT) $(OBJS) 
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C libft_project

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C libft_project

fclean: clean
	rm -f $(NAME)
	make fclean -C libft_project

re: fclean all

.PHONY: clean
