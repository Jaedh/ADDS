all: main.cpp Node.cpp LinkedList.cpp
	g++ -std=c++11 -o main.out -O2 -Wall *.cpp

test: mainA-1.cpp Node.cpp LinkedList.cpp
	g++ -std=c++11 -o main.out -O2 -Wall *.cpp