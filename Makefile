##
## EPITECH PROJECT, 2020
## CerStruct
## File description:
## Makefile
##

SRC = 	lib/my_putchar.c	\
		lib/my_putstr.c		\
		lib/my_putnbr.c		\
		lib/my_strlen.c		\
		lib/my_convert.c	\
		src/main.c 			

OUTPUT = CerStruct #name of your binary

BUILD_DIR = build

CFLAGS = -I include/ -Wall -Wextra -g

OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)

PYTHON = python3 ./salade_de_fruits/banane.py

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

funnypush: fclean #funny commit
	git add -A
	$(PYTHON) > someshit
	git commit -F someshit
	rm someshit
	git push

re: fclean all

.PHONY: all clean fclean pushgit funnypush re