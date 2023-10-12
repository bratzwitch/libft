CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

LIB_FILES = ft_atoi.c          ft_memset.c      ft_strlcpy.c \
			ft_bzero.c         ft_putchar_fd.c  ft_strlen.c \
			ft_calloc.c        ft_putendl_fd.c  ft_strmapi.c \
			ft_isalnum.c       ft_putnbr_fd.c   ft_strncmp.c \
			ft_isalpha.c       ft_putstr_fd.c   ft_strnstr.c \
			ft_isascii.c       ft_split.c       ft_strrchr.c \
			ft_isdigit.c       ft_strchr.c      ft_strtrim.c \
			ft_isprint.c       ft_memchr.c     ft_strdup.c      ft_substr.c \
			ft_itoa.c          ft_memcmp.c     ft_striteri.c    ft_tolower.c \
			ft_memcpy.c     ft_strjoin.c     ft_toupper.c \
			ft_memmove.c    ft_strlcat.c

LIB_OBJS = $(LIB_FILES:.c=.o)

BONUS_FILES = ft_lstadd_back.c   ft_lstclear.c   ft_lstiter.c  ft_lstmap.c  ft_lstsize.c \
		ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c  ft_lstnew.c

BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
		ar rc $(NAME) $(LIB_OBJS)

clean:
		$(RM) $(LIB_OBJS) $(BONUS_OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

bonus: $(BONUS_OBJS)
		ar rc $(NAME) $(BONUS_OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIB_FILES) $(BONUS_FILES)
	gcc -nostartfiles -shared -o libft.so $(LIB_OBJS) $(BONUS_OBJS)