PROGRAM = SimPack
FILES = SimApp.cpp ParticlePlayground.cpp SimpleParticle.cpp Main.cpp SimMainWindow.cpp ZoomWindow.cpp MovingParticle.cpp
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
	g++ -std=c++11 $(FILES) -o $(PROGRAM).o `pkg-config gtkmm-3.0 --cflags --libs`
    
clean:
	rm -f *.zip
	rm -f *.o
