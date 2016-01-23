main: main.cpp mini-printf.o
	gcc -o main main.cpp mini-printf.o

mini-printf.o: mini-printf.c
	gcc -c mini-printf.c
