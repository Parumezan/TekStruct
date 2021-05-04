##
## EPITECH PROJECT, 2021
## TekStruct
## File description:
## Makefile
##

SRC =	\
		my_array/my_arraycopy.c			\
		my_array/my_arrintarray.c		\
		my_array/my_fillintarray.c		\
		my_array/my_fillstrarray.c		\
		my_array/my_strarray.c			\
\
		my_display/my_putchar.c			\
		my_display/my_puterror.c		\
		my_display/my_putnbr.c			\
		my_display/my_putstr.c			\
		my_display/my_putstrerror.c		\
		my_display/my_putarray.c		\
		my_display/my_putintarray.c		\
\
		my_files/my_openread.c			\
		my_files/my_openfolder.c		\
		my_files/my_closefolder.c		\
		my_files/my_filesarray.c		\
\
		my_maths/my_percent.c			\
		my_maths/my_randomnb.c			\
\
		my_memory/my_calloc.c			\
		my_memory/my_freearray.c		\
		my_memory/my_freeintarray.c		\
\
		my_string/my_iterchar.c			\
		my_string/my_lenintostr.c		\
		my_string/my_strcpy.c			\
		my_string/my_strlen.c			\
		my_string/my_concatstring.c		\
		my_string/my_comparestr.c		\
\
		my_tools/my_convert.c			\
		my_tools/my_inttostr.c

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
	cp include/my_libbox.h ../hlib

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