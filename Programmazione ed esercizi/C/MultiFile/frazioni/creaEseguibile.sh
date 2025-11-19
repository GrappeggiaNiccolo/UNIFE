gcc -c main.c
gcc -c frazioni.c
gcc frazioni.o main.o -o eseguibile
// soluzione non professionale...
// si usa makefile in modo che vengano ricompilati solo i file
// che vengono modificati --> si usano le risorse adeguate
