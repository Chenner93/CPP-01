##########################################################
##	ARGUMENTS
NAME	= Unnecessary_violence
CC		= c++
RM		= rm -f
FLAGS	= -g -Wall -Wextra -Werror -std=c++98

##########################################################
##	SRC && OBJ

SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp HumanB.cpp \

OBJ		= $(SRC:.cpp=.o)

##########################################################
##	RULES

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^
	@echo Mandatory compiled

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) -f $(NAME)
	@echo "fclean done"

re : fclean all

.PHONY: all clean bonus fclean re
