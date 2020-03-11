CC=g++

all: test

test: main.o  
    $(CC) -o test main.o 

main.o: main.cpp allocator.h
    $(CC) -c main.cpp

allocator.o: allocator.cpp allocator.h
    $(CC) -c square.cpp

clean:
    rm -rf *.o test
