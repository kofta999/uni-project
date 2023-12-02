build:
	g++ ./src/main.cpp ./src/models/doctors/*.cpp

run: build
	./a.out