NAME			=  d06_ex01

FLAGS			= -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
OPT				= -O3 -flto -Ofast -ffast-math -march=native

OBJS_DIR		= objects
INCLUDES		= headers

SRCS			= \
main.cpp \

HEADERS			= \

FILES			= sources
FOLDERS			= objects
OBJS			= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all:				$(NAME)

$(NAME):			$(OBJS)
						@clang++ $(FLAGS) $^ -o $@
						@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUE): $(GREEN)Compiled [√]$(RESET)$(NO_COLOR)\n"

$(OBJS_DIR)/%.o:	$(FILES)/%.cpp $(addprefix $(INCLUDES)/, $(HEADERS))
						@mkdir -p $(OBJS_DIR)
# @mkdir -p $(addprefix $(OBJS_DIR)/, $(FOLDERS))
						@clang++ $(FLAGS) -I $(INCLUDES) -c $< -o $@
						@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUE): $(PURPLE)$<$(RESET)$(NO_COLOR)"

clean:
						@rm -f $(OBJS)
						@rm -rf $(OBJS_DIR)
# @rm -rf $(addprefix ./, $(FOLDERS))

fclean:				clean
						@rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m
