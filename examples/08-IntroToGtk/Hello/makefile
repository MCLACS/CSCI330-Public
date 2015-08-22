PROGRAM = HelloWorld
FILES = helloworld.cpp

all: run
run: zip
zip: build
build: clean

run:
	./$(PROGRAM)

zip:
	rm -f $(PROGRAM).zip
	zip $(PROGRAM).zip *.cpp *.h makefile

build:
	g++ -std=c++11 $(FILES) -o $(PROGRAM) `pkg-config gtkmm-3.0 --cflags --libs`
    
clean:
	rm -f *.zip
	rm -f *.o
