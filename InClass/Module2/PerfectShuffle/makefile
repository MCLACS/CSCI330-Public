PROGRAM = Shuffle
FILES = main.cpp ../utilities/FileReader.cpp ../utilities/FileWriter.cpp

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
	g++ $(FILES) -o $(PROGRAM).o

clean:
	rm -f *.zip
	rm -f *.o
