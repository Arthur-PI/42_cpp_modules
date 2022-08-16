CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
IFLAGS	= -I./
RM		= rm -rf

SRCS	= PhoneBook.cpp \
		  Contact.cpp \

HEADERS	= PhoneBook.h \
		  Contact.h

OBJS	= $(SRCS:.cpp=.o)

NAME	= megaphone

all:	$(NAME)

%.o:	%.cpp $(HEADERS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $<

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
