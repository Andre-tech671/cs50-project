# CS50 Week 2 Makefile

CC = gcc
CFLAGS = -I../../include
LDFLAGS = -L../../lib -lcs50

buggy: buggy.c
	$(CC) $(CFLAGS) buggy.c -o buggy.exe $(LDFLAGS)

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello.exe $(LDFLAGS)

.PHONY: clean
clean:
	rm -f *.exe
