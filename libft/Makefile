#########################################
###		CONFIG		      ###
#########################################

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra
CC		= cc
RM		= rm -rf

SOURCES		= *.c
OBJ_FILES	= $(SOURCES:.c=.o)

#########################################
###		RULES		      ###
#########################################

all: $(NAME)

$(NAME): $(SOURCES) libft.h ft_printf.h
	@$(CC) $(CFLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJ_FILES)

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@$(RM) $(NAME)

re:
	@make fclean
	@make

.PHONY:			all clean fclean re 
