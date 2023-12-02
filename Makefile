build:
	g++ ./src/main.cpp ./src/models/doctorList.cpp ./src/models/doctorNode.cpp ./src/models/doctor.cpp

run: build
	./a.out