CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftTester

OTHER_SRCS = main.c utils.c
TEST_SRCS = $(wildcard tests/*.c)
SRCS = $(OTHER_SRCS) $(TEST_SRCS)

OBJ_DIR = obj/
TEST_DIR = $(OBJ_DIR)tests/
OBJS = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS))

HEADERS = libftTester.h

LIBFT_DIR = ../
LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME) run

run:
	./libftTester > test_log && cat test_log

$(NAME): $(LIBFT) make_dirs $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR) re

make_dirs:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(TEST_DIR)

$(OBJ_DIR)%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all make_dirs clean fclean re

