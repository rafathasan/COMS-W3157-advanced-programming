twecho: main.o twecho.o
	gcc main.o twecho.o -g -Wall -Wpedantic -std=c17 -o twecho

main.o: main.c
	gcc -g -Wall -Wpedantic -std=c17 -c main.c

twecho.o: twecho.c twecho.h
	gcc -g -Wall -Wpedantic -std=c17 -c twecho.c

clean:
	rm *.o twecho