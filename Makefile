CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: snake

snake: main.c snakeAPI.c clientAPI.c99
	$(CC) $(CFLAGS) -o snake main.c

clean:
	rm -f snake
