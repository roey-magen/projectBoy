# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
CC = g++
CFLAGS  = -g -Wall -Weffc++
LFLAGS  = -L/usr/lib

# All Targets
all: hello

# Tool invocations
# Executable "hello" depends on the files hello.o and run.o.
hello: bin/Main.o bin/Boy.o bin/Dog.o
	@echo 'Building target: hello'
	@echo 'Invoking: C++ Linker'
	$(CC) -o bin/hello bin/Main.o bin/Dog.o bin/Boy.o $(LFLAGS)
	@echo 'Finished building target: hello'
	@echo ' '

# Depends on the source and header files
bin/Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c -Linclude -o bin/Main.o src/Main.cpp

# Depends on the source and header files 
bin/Boy.o: src/Boy.cpp
	$(CC) $(CFLAGS) -c -Linclude -o bin/Boy.o src/Boy.cpp

# Depends on the source and header files 
bin/Dog.o: src/Dog.cpp
	$(CC) $(CFLAGS) -c -Linclude -o bin/Dog.o src/Dog.cpp


#Clean the build directory
clean: 
	rm -f bin/*
