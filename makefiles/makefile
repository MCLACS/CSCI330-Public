PROGRAM = program_name
FILES = file1.cpp file2.cpp

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
	g++ $(FILES) -o $(PROGRAM).o

clean:
	rm -f *.zip
	rm -f *.o
