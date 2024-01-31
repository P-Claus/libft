#########################################
###		CONFIG		      ###
#########################################

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra
CC		= cc
RM		= rm -rf
MKDIR		= mkdir -p

SOURCES_DIR	= src
SOURCES		= $(wildcard $(SOURCES_DIR)/*.c)
OBJ		= $(addprefix $(OBJ_DIR)/, $(notdir $(SOURCES:.c=.o)))
OBJ_DIR		= obj

INCLUDES	= includes/*.h




#########################################
###		RULES		      ###
#########################################

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SOURCES_DIR)/%.c
	@$(MKDIR) $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	



clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re:
	@make fclean
	@make

.PHONY:			all clean fclean re 
