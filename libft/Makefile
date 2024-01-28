#########################################
###		CONFIG		      ###
#########################################

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra
CC		= cc
RM		= rm -rf

SOURCES		= *.c
OBJ_FILES	= $(SOURCES:.c=.o)

###	FT_PRINTF	###

PRINTF_DIR	= ./ft_printf
PRINTF_SOURCES	= $(PRINTF_DIR)/*.c
PRINTF_OBJ	= $(PRINTF_DIR)/*.o

#########################################
###		RULES		      ###
#########################################

all: $(NAME)

$(NAME): $(PRINTF_SOURCES) $(SOURCES) libft.h
	@$(CC) $(CFLAGS) -c $(SOURCES) $(PRINTF_SOURCES) 
	@ar rcs $(NAME) $(OBJ_FILES) $(PRINTF_OBJ)

clean:
	@$(RM) $(OBJ_FILES) $(PRINTF_OBJ)

fclean: clean
	@$(RM) $(NAME) $(PRINTF)

re:
	@make fclean
	@make

.PHONY:			all clean fclean re 
