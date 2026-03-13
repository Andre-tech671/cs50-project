# CS50 Root Makefile

CC = gcc
CFLAGS = -Iinclude
LDFLAGS = -Llib -lcs50

# Pattern rule for any .c file
%: %.c
	$(CC) $(CFLAGS) $< -o $@.exe $(LDFLAGS)

# Explicit targets for all files
.PHONY: agree calculator cat compare hello mario clean all

agree: agree.c

calculator: calculator.c

cat: cat.c

compare: compare.c

hello: hello.c

mario: mario.c

all: agree calculator cat compare hello mario

clean:
	rm -f *.exe

