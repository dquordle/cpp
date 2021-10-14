SRCS =			main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS =			$(SRCS:.cpp=.o)

GCC = 			clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			brainz

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