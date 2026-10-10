CC=gcc
FLAGS= -Wall -Wextra -fsanitize=address -O0

.PHONY: clean

all: test_arbre.exe test_binheap.exe

test_arbre.exe: arbre.o test_arbre.c
	$(CC) $(FLAGS) $^ -o $@

test_binheap.exe: arbre.o binheap.o test_binheap.c
	$(CC) $(FLAGS) $^ -o $@

arbre.o: arbre.c arbre.h
	$(CC) $(FLAGS) -c $<

binheap.o: binheap.c binheap.h arbre.h
	$(CC) $(FLAGS) -c $<

clean:
	rm -f *.o *.exe
