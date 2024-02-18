
CC=gcc
CFLAGS=-g -Wall

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

test: test.c linkedList.o
	$(CC) $(CFLAGS) -o $@ $^

run: test
	./test

clean:
	del *.o *.gch *.exe
