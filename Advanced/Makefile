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

all: head lib $(OUTPUT)

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
debug: fclean head lib $(OUTPUT)
	valgrind --leak-check=full --track-origins=yes -s ./$(OUTPUT) $(filter-out $@, $(MAKECMDGOALS)) 2> trace

## Git Push
pushgit: fclean
	git add -A
	git commit -m "$(filter-out $@, $(MAKECMDGOALS))"
	git push

head:
	@echo " dPPPb8  dPPYb  8b    d8 88PPYb 88 88     88 88b 88  dPPPb8        "
	@echo "dP   'P dP   Yb 88b  d88 88__dP 88 88     88 88Yb88 dP   'P        "
	@echo "Yb      Yb   dP 88YbdP88 88PPP  88 88  .o 88 88 Y88 Yb  P88 .o. .o."
	@echo " YboodP  YbodP  88 YY 88 88     88 88ood8 88 88  Y8  YboodP 'P' 'P'"

re: fclean all

.PHONY: all clean fclean lib debug pushgit head re
