##
## EPITECH PROJECT, 2020
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
OUTPUT = Tekstruct

## Flags
CFLAGS = -I include/ -Wall -Wextra

## Rules
all: header $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	$(CC) -o $(OUTPUT) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)
	rm -f trace

re: fclean all

header:
	@echo " dPPPb8  dPPYb  8b    d8 88PPYb 88 88     88 88b 88  dPPPb8        "
	@echo "dP   'P dP   Yb 88b  d88 88__dP 88 88     88 88Yb88 dP   'P        "
	@echo "Yb      Yb   dP 88YbdP88 88PPP  88 88  .o 88 88 Y88 Yb  P88 .o. .o."
	@echo " YboodP  YbodP  88 YY 88 88     88 88ood8 88 88  Y8  YboodP 'P' 'P'"

.PHONY: all clean fclean debug re header