CC = gcc
CFLAGS = -g -Wall -Wpedantic -std=c17
LDFLAGS = 
twecho: main.o twecho.o
	$(CC) $(LDFLAGS) -o twecho main.o twecho.o

main.o: main.c
	 $(CC) $(CFLAGS) -c -o main.o main.c

twecho.o: twecho.c twecho.h
	$(CC) $(CFLAGS) -c -o twecho.o twecho.c

.PHONY: clean
clean:
	rm -rf *.o twecho a.out
