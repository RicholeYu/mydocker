test.o: test.c
	g++ -c test.c

clean: start
	rm main.o test.o

start: main.o test.o
	g++ main.o test.o -o start

main.o: main.c
	g++ -c main.c



