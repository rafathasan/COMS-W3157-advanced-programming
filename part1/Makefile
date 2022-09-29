CC = gcc
CFLAGS = -g -Wall -Wpedantic -std=c17
LDFLAGS = 
convert: convert.o convert.o
	$(CC) $(LDFLAGS) -o convert convert.o
convert.o: convert.c
	 $(CC) $(CFLAGS) -c -o convert.o convert.c

.PHONY: clean
clean:
	rm -rf *.o convert a.out
