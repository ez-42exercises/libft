NAMES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
		ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat \
		ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
		ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa #ft_strmapi \
		#ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

SRCS = $(addsuffix .c, $(NAMES))
OBJS = $(addsuffix .o, $(NAMES))

CC = gcc
INC_DIR = .
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I$(INC_DIR)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# This is necesary to generate the .o if there's any...
# $< means the dependency (.c) and $@ the target (.o) that was given
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

bonus:
	$(CC) $(CFLAGS) -c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
	ar rcs $(NAME) ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
		ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

main:
	$(CC) $(CFLAGS) -o libft_main

re: fclean all

# Because this names aren't files, you need to specify it like this:
.PHONY: all clean fclean re bonus 
