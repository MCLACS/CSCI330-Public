PROGRAM = program_name
FILES = main.cpp

all: run
run: zip
zip: build
build: clean

run:
	./$(PROGRAM).o

zip:
	rm -f $(PROGRAM).zip
	zip $(PROGRAM).zip *.cpp *.h makefile

build:
	clear
	clear
	clear
	clear
	g++ -std=c++11 $(FILES) -o $(PROGRAM).o
    
clean:
	rm -f *.zip
	rm -f *.o
