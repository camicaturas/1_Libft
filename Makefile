NAME = libft.a
SOURCES = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

#BONUS_SOURCES = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
	
OBJECTS = $(SOURCES:.c=.o)
#BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $@ $?
#bonus: $(OBJECTS) $(BONUS_OBJECTS)
#	$(AR) -r $(NAME) $?
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
#	rm -f $(OBJECTS) $(BONUS_OBJECTS)
	rm -f $(OBJECTS)
	rm -f *.so


fclean: clean
	rm -f $(NAME)
re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
	cc -nostartfiles -shared -o libft.so $(OBJECTS)

#.PHONY: all bonus clean fclean re
.PHONY: all clean fclean re