CC=g++
CFLAGS=-c -Wall

all:mandelbrot 

run: all
	./mandelbrot 1 10 1 20 2 2

mandelbrot: cplane.o julia.o  mandelbrot.o
	$(CC) cplane.o julia.o mandelbrot.o -o mandelbrot

cplane.o: cplane.cpp
	$(CC) $(CFLAGS) cplane.cpp

julia.o: julia.cpp
	$(CC) $(CFLAGS) julia.cpp

mandelbrot.o: mandelbrot.cpp
	$(CC) $(CFLAGS) mandelbrot.cpp

clean:
	rm *o mandelbrot

