
CC=gcc
CFLAGS=-g -Wall

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^ -g

test: test.c hashTable.o
	$(CC) $(CFLAGS) -o $@ $^ -g

run: test
	./test

clean:
	rm *.o *.gch test
