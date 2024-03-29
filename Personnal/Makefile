##
## File: Makefile
## Project: Personnal
## File Created: Tuesday, 13th July 2021 10:10:32 pm
## Author: Jean-Baptiste Brocherie
## -----
## Last Modified: Tuesday, 13th July 2021 10:11:15 pm
## Modified By: Jean-Baptiste Brocherie
## -----
## Copyright JB 2021
##

SRC =	\
		src/main.c

BUILD_DIR = build
OBJ	= $(SRC:%.c=$(BUILD_DIR)/%.o)

## Binary Name
OUTPUT = TekStruct

## Flags
CFLAGS = -Wall -Wextra -I ./include/ -I ./lib/hlib 
LDFLAGS = -L./lib/exec	\
#-l _my_libc

## Rules

all: lib h_normal $(OUTPUT)

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