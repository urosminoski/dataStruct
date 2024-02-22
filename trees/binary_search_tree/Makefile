
CC=gcc
CFLAGS= -g -Wall

EXE=test
SRC=test.c
OBJ=binary_search_tree.o

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^ -s

$(EXE): $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -s

run: $(EXE)
	./$(EXE)

clean:
	rm *.o *.gch $(EXE)
