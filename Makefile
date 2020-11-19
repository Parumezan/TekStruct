##
## EPITECH PROJECT
## CerStruct
## File description:
## Makefile
##

SRC = 	lib/my_putchar.c	\
		lib/my_putstr.c		\
		lib/my_putnbr.c		\
		src/main.c 			

OUTPUT = CerStruct #name of your binary

BUILD_DIR = build

CFLAGS = -I include/ -Wall -Wextra

OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)

all: $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	gcc -o $(OUTPUT) $(OBJ)
	#ar rc $(OUTPUT) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)

pushgit: fclean #with git repo
	git add -A
	git commit -m "$(filter-out $@, $(MAKECMDGOALS))"
	git push

re: fclean all

.PHONY: all clean fclean pushgit re