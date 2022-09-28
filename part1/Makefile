convert: convert.o
	gcc convert.o -g -Wall -Wpedantic -std=c17 -o convert

convert.o: convert.c
	gcc -g -Wall -Wpedantic -std=c17 -c convert.c

clean:
	rm *.o convert
