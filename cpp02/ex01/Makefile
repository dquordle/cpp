SRCS =			main.cpp \
				Fixed.cpp

OBJS =			$(SRCS:.cpp=.o)

GCC = 			clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			ex01

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