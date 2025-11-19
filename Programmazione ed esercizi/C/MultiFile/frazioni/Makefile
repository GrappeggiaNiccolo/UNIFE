eseguibile: frazioni.o main.o
	gcc frazioni.o main.o -o eseguibile

frazioni.o: frazioni.c frazioni.h
	gcc -g -c frazioni.c

main.o: main.c frazioni.h
	gcc -g -c main.c