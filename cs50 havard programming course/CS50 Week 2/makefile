# CS50 Week 2 Makefile

CC = gcc
CFLAGS = -I../../include
LDFLAGS = -L../../lib -lcs50

# Pattern rule for any .c
%: %.c
	$(CC) $(CFLAGS) $< -o $@.exe $(LDFLAGS)

.PHONY: buggy hello scores length clean all

buggy: buggy.c
hello: hello.c
scores: scores.c
length: length.c

all: buggy hello scores length

clean:
	rm -f *.exe
