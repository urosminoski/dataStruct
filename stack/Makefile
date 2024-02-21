CC=gcc
CFLAGS=-g -Wall

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^ -s

test: test.c stack_array.o stack_linkedList.o
	$(CC) $(CFLAGS) -o $@ $^ -s

run: test
	./test

clean:
	rm *.o *.gch test
