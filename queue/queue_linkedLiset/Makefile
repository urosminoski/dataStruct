CC=gcc
CFLAGS= -g -Wall

EXE=test
SRC=test.c
OBJ=queue_linkedList.o

all: run clean

%.o: %.c %.h
	$(CC) $(CFLAG) -c $^ -s

$(EXE): $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -s

run: $(EXE)
	./$(EXE)

clean: 
	rm *.o *.gch $(EXE)
