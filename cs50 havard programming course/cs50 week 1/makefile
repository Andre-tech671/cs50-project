# CS50 Week 1 Makefile

CC = gcc
CFLAGS = -I../../include
LDFLAGS = -L../../lib -lcs50

calls: calls.c
	$(CC) $(CFLAGS) calls.c -o calls.exe $(LDFLAGS)

friends: friends.c
	$(CC) $(CFLAGS) friends.c -o friends.exe $(LDFLAGS)

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello.exe $(LDFLAGS)

.PHONY: clean
clean:
	rm -f *.exe

hello: hello.c
	gcc -I../../include -L../../lib hello.c -lcs50 -o hello


friends: friends.c cs50.c cs50.h
	gcc -I. friends.c cs50.c -o friends
