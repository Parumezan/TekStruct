##
## EPITECH PROJECT, 2021
## TekStruct
## File description:
## Makefile
##

SRC =	

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
CFLAGS = -I include/

OUTPUT = lib_my_libbox.a

all: head $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	ar rc $(OUTPUT) $(OBJ)
	cp $(OUTPUT) ../exec
	cp include/my_libbox ../hlib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)
	rm -f ../exec/$(OUTPUT)
	rm -f ../hlib/my_libbox.h

head:
	@echo "8b    d8 Yb  dP            88     88 88PPYb 88PPYb  dPPYb  Yb  dP        "
	@echo "88b  d88  YbdP             88     88 88__dP 88__dP dP   Yb  YbdP         "
	@echo "88YbdP88   8P              88  .o 88 88PPYb 88PPYb Yb   dP  dPYb  .o. .o."
	@echo "88 YY 88  dP    oooooooooo 88ood8 88 88oodP 88oodP  YbodP  dP  Yb 'p' 'p'"

re: fclean all

.PHONY: all clean fclean head re