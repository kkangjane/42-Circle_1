SRCS= ft_func.c ft_printf.c ft_putnbr_base.c ft_strlen.c ft_type1.c ft_type2.c
OBJS= ft_func.o ft_printf.o ft_putnbr_base.o ft_strlen.o ft_type1.o ft_type2.o
NAME= libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all
