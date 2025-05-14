CC=gcc
CFLAGS=-Wall
OBJ=main.o gestion_animaux.o

chenil: $(OBJ)
	$(CC) -o chenil $(OBJ)

main.o: main.c gestion_animaux.h
	$(CC) $(CFLAGS) -c main.c

gestion_animaux.o: gestion_animaux.c gestion_animaux.h
	$(CC) $(CFLAGS) -c gestion_animaux.c

clean:
	rm -f *.o chenil
