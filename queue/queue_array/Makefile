CC=gcc
CFLAGS= -g -Wall

EXE=test
SRC=test.c
OBJ=queue_array.o

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^ -s

$(EXE): $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -s

run: $(EXE)
	./$(EXE)

clean: 
	rm *.o *.gch $(EXE)
