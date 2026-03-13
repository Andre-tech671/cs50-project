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
