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

all: $(NAME)

$(NAME): make_dirs $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

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

.PHONY: all clean fclean re

