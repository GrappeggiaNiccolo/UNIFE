figure: figura.o main.o
	gcc -g main.o figura.o -o figure -lm

main.o: main.c figura.h
	gcc -g -c main.c

figura.o: figura.c figura.h
	gcc -g -c figura.c