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
all: $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	$(CC) -o $(OUTPUT) $(OBJ) $(CFLAGS)

debug: CFLAGS += -g
debug: fclean all

clean:
	rm -fr $(BUILD_DIR)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean debug re