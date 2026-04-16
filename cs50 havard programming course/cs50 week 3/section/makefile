# Compiler to use
CC = gcc
# Compiler flags: enable all warnings, C11 standard, pedantic warnings, and include path for CS50 header
CFLAGS = -Wall -Wextra -std=c11 -pedantic -I../../libcs50/src
# Linker flags: specify library path for CS50 library and link with it
LDFLAGS = -L../../libcs50/src -lcs50

# Rule to build the structs executable
structs: structs.c
	$(CC) $(CFLAGS) structs.c -o structs $(LDFLAGS)