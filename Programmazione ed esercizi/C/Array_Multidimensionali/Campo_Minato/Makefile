a.out: campo.o main.o
	gcc -g campo.o main.o -o a.out

campo.o: campo.c campo.h
	gcc -g -c campo.c

main.o: main.c campo.h
	gcc -g -c main.c
