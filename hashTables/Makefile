
CC=gcc
CFLAGS=-g -Wall

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

test: test.c hashTable.o
	$(CC) $(CFLAGS) -o $@ $^ -g

run: test
	./test

clean:
	del *.o *.gch *.exe