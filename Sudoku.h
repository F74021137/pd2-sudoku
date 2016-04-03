#include<iostream>
using namespace std;
class sudoku{
public:

	void readIn();
	void printOut();
	void changeNum(int x,int y);
	void rotate(int n);
	void changeRow(int x,int y);
	void changeCol(int x,int y);
	void flip(int x);
	
	void giveQuestion();
private:
	int a[9][9];



};