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
		my_string/my_strcpy.c		\
\
		my_tools/my_convert.c		\
		my_tools/my_percent.c		\
		my_tools/my_openread.c		\
		my_tools/my_iterchar.c		\
		my_tools/my_strarray.c		\
		my_tools/my_lenintostr.c	\
		my_tools/my_fillstrarray.c	\
		my_tools/my_arraycopy.c		\
		my_tools/my_putarray.c

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
CFLAGS = -I include/

OUTPUT = lib_my_libc.a

all: head $(OUTPUT)

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

head:
	@echo "8b    d8 Yb  dP            88     88 88PPYb  dPPPb8        "
	@echo "88b  d88  YbdP             88     88 88__dP dP   'P        "
	@echo "88YbdP88   8P              88  .o 88 88PPYb Yb      .o. .o."
	@echo "88 YY 88  dP    oooooooooo 88ood8 88 88oodP  YboodP 'P' 'P'"

re: fclean all

.PHONY: all clean fclean head re