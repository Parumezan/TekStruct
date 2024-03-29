##
## EPITECH PROJECT, 2021
## TekStruct
## File description:
## Makefile
##

SRC =	\
		src/main.c

BUILD_DIR = build
OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)
CC = gcc

## Binary Name
OUTPUT = TekStruct

## Flags
CFLAGS = -Wall -Wextra -I ./include/ -I ./lib/hlib 
LDFLAGS = -L./lib/exec #-l_my_libbox

## Rules

all: lib h_normal $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	$(CC) -o $(OUTPUT) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C ./lib

fclean:
	rm -fr $(BUILD_DIR)
	rm -f $(OUTPUT)
	rm -f trace
	make fclean -C ./lib

lib:
	make -C ./lib

## Debug
debug: CFLAGS += -g
debug: fclean lib h_debug $(OUTPUT)
	@echo -n "PROGRAM ARGUMENTS(Enter for None): "; \
	read PROGRAM_ARGUMENTS; \
	valgrind --track-origins=yes --leak-check=full ./$(OUTPUT) $${PROGRAM_ARGUMENTS} 2> trace


h_normal:
	@echo " dPPPb8  dPPYb  8b    d8 88PPYb 88 88     88 88b 88  dPPPb8        "
	@echo "dP   'P dP   Yb 88b  d88 88__dP 88 88     88 88Yb88 dP   'P        "
	@echo "Yb      Yb   dP 88YbdP88 88PPP  88 88  .o 88 88 Y88 Yb  P88 .o. .o."
	@echo " YboodP  YbodP  88 YY 88 88     88 88ood8 88 88  Y8  YboodP 'P' 'P'"

h_debug:
	@echo "8888b.  888888 88PPYb 88   88  dPPPb8        "
	@echo " 8I  Yb 88__   88__dP 88   88 dP   'P        "
	@echo " 8I  dY 88PP   88PPYb Y8   8P Yb  P88 .o. .o."
	@echo "8888YP  888888 88oodP 'YbodP'  YboodP 'P' 'P'"

re: fclean all

.PHONY: all clean fclean lib debug h_normal h_debug re
