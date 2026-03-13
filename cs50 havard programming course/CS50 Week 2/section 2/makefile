# Compiler and flags
CC = gcc
CFLAGS = -g -Wall -std=c11

# Project root relative to this makefile
ROOT = ../../../

# Include and Lib paths, pointing to the root include/ and lib/ directories
INCS = -I$(ROOT)include
LDFLAGS = -L$(ROOT)lib
LDLIBS = -lcs50

# Automatically find all C source files in the current directory
SRCS = $(wildcard *.c)
# Create executable names from source files (e.g., hello.c -> hello)
PROGS = $(patsubst %.c,%,$(SRCS))

# Default target: build all programs in the directory
all: $(PROGS)

# A generic pattern rule to build any program from its .c file.
# It checks if cs50.h is included and links the CS50 library only if needed.
%: %.c
	@if grep -q '#include <cs50.h>' $<; then \
		echo "Compiling $< with libcs50..."; \
		$(CC) $(CFLAGS) $(INCS) -o $@ $< $(LDFLAGS) $(LDLIBS); \
	else \
		echo "Compiling $< without libcs50..."; \
		$(CC) $(CFLAGS) -o $@ $<; \
	fi

# Target to clean up built files
clean:
	rm -f $(PROGS) *.o