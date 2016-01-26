CC = g++
PROG = hw0
SRC = main.cpp 
CLASS = CSVReader.cpp
OBJ = main.o #Add other object files
CFLAGS = -c -O2 -Wno-deprecated 
DEPS = CSVReader.h 

#All creates an executable
all: $(PROG)

#create object files
main.o: $(SRC)
	$(CC) $(CFLAGS) $(SRC)

CSVReader.o: $(CLASS) $(DEPS)
	$(CC) $(CFLAGS) $(CLASS)

#executable build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) -lm

.suffixes: .C

.C.o:
	$(CC) $(CFLAGS) -c $*.c

#remove everything
clean:
	rm -f *.o hw0

run:
	make	
	./hw0
