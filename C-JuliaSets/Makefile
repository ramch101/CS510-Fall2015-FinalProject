# This is the Makefile to compile all the programs that are part of the juliset directory
CC=gcc
CFLAGS=-I.
DEPS = complex.h cplane.h
OBJ = julia.o complex.o cplane.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

julia: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

run: julia 
	./julia 0.0001 10 0.000002 2 2 20 0.000002 0.0000004
clean:
	rm -f cplane julia.o cplane.o complex.o
