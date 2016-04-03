all:main

main: main.cpp Sudoku.o
	g++ -o main Sudoku.o main.cpp
Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp -o Sudoku.o
clean:
	rm *.o main
