CC=gcc
CFLAGS=-Wall -O2

all: spongecase

spongecase: main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f spongecase