PROGRAM = Lottery
FILES = main.cpp ../../../StudentFiles/CSCI330-Public/utilities/FileReader.cpp ../../../StudentFiles/CSCI330-Public/utilities/UserInput.cpp ../../../StudentFiles/CSCI330-Public/utilities/helper.cpp

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
