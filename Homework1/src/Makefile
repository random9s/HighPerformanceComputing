# set this to what I want
ENV_HPC_OPTS = -march=native \
			   -O3 \
			   -m64 \
			   -DNDEBUG \
			   -mfpmath=sse \
			   -msse4.2 \
			   -flto \
			   -ffast-math \
			   -fmerge-all-constants \
			   -fno-unsafe-math-optimizations \
			   -funroll-loops \
			   -ftree-vectorize \
			   -fstrict-aliasing 
OTHER_FLAGS=$(ENV_HPC_OPTS)

# Standard all target
all: hw1
	@echo "After build, type make valgrind, to run valgrind analysis"

# HW 1
hw1: hw1.o MatrixMultiply.o
	g++ -o hw1 hw1.o MatrixMultiply.o

hw1.o:	hw1.cpp 
	g++ ${OTHER_FLAGS} -Werror -Wall -c hw1.cpp

MatrixMultiply.o : MatrixMultiply.hpp MatrixMultiply.cpp
	g++ ${OTHER_FLAGS} -Werror -Wall -c MatrixMultiply.cpp

clean:
	rm -f *.o hw1

valgrind:
	valgrind --track-origins=yes ./hw1
