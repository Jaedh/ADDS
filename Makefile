all: main.cpp BubbleSort.cpp QuickSort.cpp RecursiveBinarySearch.cpp
	g++ -o main.out -std=c++11 -O2 -Wall *.cpp