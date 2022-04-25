##
## EPITECH PROJECT, 2020
## TekStruct
## File description:
## Makefile
##

SRC =	\
		helloworld.asm

BUILD_DIR = build
OBJ	= $(SRC:%.asm=$(BUILD_DIR)/%.o)
CC = nasm
LINKER = ld

## Binary Name
OUTPUT = helloworld

## Flags
FLAGS = -f elf64

## Rules

all: $(OUTPUT)

$(BUILD_DIR)/%.o: %.asm
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(FLAGS) $< -o $@

$(OUTPUT): $(OBJ)
	$(LINKER) -o $(OUTPUT) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)
	rm -fr ./build/

re: fclean all

.PHONY: all clean fclean re
