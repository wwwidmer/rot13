CFLAGS=-g -Wall

main: main.c rot13.c
rot13: rot13.c

clean:
	rm *~ main
