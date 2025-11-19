esempio_contatore: main.o contatore.o
	gcc -g main.o contatore.o -o esempio_contatore

main.o: main.c contatore.h
	gcc -g -c main.c

contatore.o: contatore.c contatore.h
	gcc -g -c contatore.c