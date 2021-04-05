##
## EPITECH PROJECT, 2021
## TekStruct
## File description:
## Makefile
##

SRC =	my_stdio/my_putchar.c		\
		my_stdio/my_putstr.c		\
		my_stdio/my_putnbr.c		\
		my_stdio/my_strlen.c		\
\
		my_stdlib/my_calloc.c		\
\
		my_tools/my_convert.c		\
		my_tools/my_openread.c		\
		my_tools/my_iterchar.c		\
		my_tools/my_strarray.c		\
		my_tools/my_putarray.c

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
CFLAGS = -I include/

OUTPUT = lib_my_libc.a

all: $(OUTPUT)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "  CC       $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(OBJ)
	ar rc $(OUTPUT) $(OBJ)
	cp $(OUTPUT) ../exec
	cp include/my_libc.h ../hlib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)
	rm -f ../exec/$(OUTPUT)
	rm -f ../hlib/my_libc.h

re: fclean all

.PHONY: all clean fclean re