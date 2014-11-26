SRC = src
BIN = bin
EXECUTABLES = $(BIN)\pro1.exe $(BIN)\pro2.exe
all: $(EXECUTABLES)

$(BIN)\pro1.exe: src\problem1\pro1.cpp
	gcc -o bin\pro1.exe src\problem1\pro1.cpp

$(BIN)\pro2.exe: src\problem2\pro2.cpp
	gcc -o bin\pro2.exe src\problem2\pro2.cpp

clean:
	rm -f $(EXECUTABLES)