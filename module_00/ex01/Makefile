CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
IFLAGS	= -I./
RM		= rm -rf
OBJ_DIR	= bin

SRCS	= PhoneBook.cpp \
		  Contact.cpp \

HEADERS	= PhoneBook.h \
		  Contact.h

OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

NAME	= megaphone

all:	$(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:	%.cpp $(HEADERS) $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
