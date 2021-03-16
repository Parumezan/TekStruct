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
\
		src/main.c 			

BUILD_DIR = build
OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)
PYTHON = python3 ./ananas/banane.py

## Binary Name
OUTPUT = CerStruct

## Flags
CFLAGS = -I include/ -Wall -Wextra
DFLAGS = -g

## Rules

all: $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	gcc -o $(OUTPUT) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)
	rm -f trace

## Debug
debug: CFLAGS += -g
debug: fclean $(OBJ)
	gcc -o $(OUTPUT) $(OBJ) $(DFLAGS)
	valgrind --leak-check=full --track-origins=yes -s ./$(OUTPUT) $(filter-out $@, $(MAKECMDGOALS)) 2> trace

## Git Push
pushgit: fclean
	git add -A
	git commit -m "$(filter-out $@, $(MAKECMDGOALS))"
	git push

## Funny random commit
funnypush: fclean
	git add -A
	$(PYTHON) > someshit
	git commit -F someshit
	rm someshit
	git push

re: fclean all

.PHONY: all clean fclean debug pushgit funnypush re