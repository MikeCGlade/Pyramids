#Make files use <target>: dependencies
#					command

all: main

main: main.o
	g++ main.o -o application

main.o: main.cpp
	g++ -c main.cpp	

clean:
	rm -f application; 
	rm -f *.o; 