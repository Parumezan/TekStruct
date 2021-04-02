##
## EPITECH PROJECT, 2021
## TekStruct
## File description:
## Makefile
##

SRC =	src/main.c			

BUILD_DIR = build
OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)

## Binary Name
OUTPUT = TekStruct

## Flags
CFLAGS = -Wall -Wextra -I ./include/ -I ./lib/hlib 
LDFLAGS = -L./lib/exec	\
-l _my_libc

## Rules

all: lib $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	gcc -o $(OUTPUT) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C ./lib

fclean:
	rm -f $(OBJ)
	rm -f $(OUTPUT)
	rm -f trace
	make fclean -C ./lib

lib:
	make -C ./lib

## Debug
debug: CFLAGS += -g
debug: fclean $(OBJ)
	gcc -o $(OUTPUT) $(OBJ)
	valgrind --leak-check=full --track-origins=yes -s ./$(OUTPUT) $(filter-out $@, $(MAKECMDGOALS)) 2> trace

## Git Push
pushgit: fclean
	git add -A
	git commit -m "$(filter-out $@, $(MAKECMDGOALS))"
	git push

re: fclean all

.PHONY: all clean fclean lib debug pushgit re
