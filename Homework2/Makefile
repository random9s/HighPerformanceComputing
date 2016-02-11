#Make vars
CC = g++
PROG = hw2
SRC = main.cpp 
CLASS = CSVReader.cpp
OBJ = main.o CSVReader.o #Add other object files
DEPS = CSVReader.hpp
CFLAGS = -std=c++11 \
		 -c \
		 -O3 

#All creates an executable
all: $(PROG)

#executable build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) 

#create object files
main.o: $(SRC)
	$(CC) $(CFLAGS) -Werror -Wall -c $(SRC)

CSVReader.o: $(CLASS) $(DEPS)
	$(CC) $(CFLAGS) -Werror -Wall -c $(CLASS)

#remove everything
clean:
	rm -f *.o hw2

#Run project
run:
	make	
	./hw2 tenniscourt/tenniscourt59.tif data/2100_HPC.csv 5 1
