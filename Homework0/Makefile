CC = g++
PROG = homework0
SRC = main.cpp
OBJ = main.o #Add other object files
CFLAGS = -c -O2
#DEPS = No current dependencies 

#All creates an executable
all: $(PROG)

#create object files
main.o: $(SRC)
	$(CC) $(CFLAGS) $(SRC)

#executable build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) -lm

.suffixes: .C

.C.o:
	$(CC) $(CFLAGS) -c $*.c

#remove everything
clean:
	rm -f *.o homework0

tar:
	tar cfv homework0.tar main.cpp
