CC = g++
PROG = hw0
SRC = main.cpp 
CLASS = CSVReader.cpp
OBJ = main.o #Add other object files
CFLAGS = -std=c++11 -c -O2 

#All creates an executable
all: $(PROG)

#create object files
main.o: $(SRC)
	$(CC) $(CFLAGS) $(SRC)

#executable build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) -lm

#remove everything
clean:
	rm -f *.o hw0

run:
	make	
	./hw0
