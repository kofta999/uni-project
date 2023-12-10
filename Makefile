build:
	g++ ./src/main.cpp ./src/models/doctors/*.cpp ./src/models/patients/*.cpp

run: build
	./a.out