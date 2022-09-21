main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o

main.o: main.cpp shapes.h
	g++ -c main.cpp

test:

clean:
	rm -f *o