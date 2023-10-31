.PHONY:clean

CC=gcc
CFLAGS=-g -Wall

programa: principal.o sumar.o restar.o multiplicar.o dividir.o
	$(CC) $(CFLAGS) principal.o sumar.o restar.o multiplicar.o dividir.o -o programa

programa.o: principal.c sumar.h restar.h multiplicar.h dividir.h
	$(CC) $(CFLAGS) -c principal.c -o principal.o

sumar.o: sumar.c sumar.h
	$(CC) $(CFLAGS) -c sumar.c -o sumar.o
restar.o: restar.c restar.h
	$(CC) $(CFLAGS) -c restar.c -o restar.o
multiplicar.o: multiplicar.c multiplicar.h
	$(CC) $(CFLAGS) -c multiplicar.c -o multiplicar.o
dividir.o: dividir.c dividir.h
	$(CC) $(CFLAGS) -c dividir.c -o dividir.o

clean:
	rm -rf *.o programa
