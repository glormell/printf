SRC = ft_atoi.c \
		ft_bzero.c \
		ft_itoa_base.c \
		ft_uitoa_base.c \
		ft_printf.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_flags_and_shit.c \
		ft_is_.c \
		ft_float.c \
		ft_double_prep.c \
		ft_ldtoa.c \
		ft_isdigit.c \
		ft_memalloc.c \
		ft_numbers.c \
		ft_string.c \
		whoot_type.c

OBJ = $(SRC:.c=.o)

SRCDIR = src
OBJDIR = obj

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
INCLUDES = -I include

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@/bin/mkdir -p $(OBJDIR)
		@$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS)
		@ar rcs $@ $^
		@ranlib $@

clean:
		@/bin/rm -rf $(OBJDIR)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all
