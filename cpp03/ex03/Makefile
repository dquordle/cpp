SRCS =			main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp

OBJS =			$(SRCS:.cpp=.o)

GCC = 			clang++

FLAGS =			-Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME =			shine_bright

%.o:			%.cpp
				$(GCC) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				$(GCC) -o $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
