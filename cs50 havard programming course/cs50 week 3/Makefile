# Compiler and flags
CC = gcc
CFLAGS = -g -std=c11 -Wall -Wextra -Werror -Wshadow -I$(INCLUDE_PATH)

# Path to the project's root include and lib directories
INCLUDE_PATH = ../../include
LIB_PATH = ../../lib

# Linker flags and libraries
LDFLAGS = -L$(LIB_PATH)
LDLIBS = -lcs50

# All C source files in the current directory
SOURCES = $(wildcard *.c)
# Executables to build (derived from source files)
TARGETS = $(SOURCES:.c=)

all: $(TARGETS)

clean:
	rm -f $(TARGETS)