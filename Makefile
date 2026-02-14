CC=gcc
CFLAGS=-Wall -Wextra

all:
	$(CC) main.c memory/allocator.c -o kernel

clean:
	rm -f kernel