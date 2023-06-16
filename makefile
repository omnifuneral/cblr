CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: tumblr-client

tumblr-client: src/main.c
	$(CC) $(CFLAGS) -o tumblr-client src/main.c -lncurses

clean:
	rm -f tumblr-client