#include"Sudoku.h"
#include<fstream>
#include<iostream>
void sudoku::readIn(){
	int q,b;		
	for(q=0;q<9;q++)
		for(b=0;b<9;b++)
			cin>>a[q][b];
}
void sudoku::printOut(){
	int q,b;
	for(q=0;q<9;q++){
		for(b=0;b<9;b++){
			cout<<a[q][b] << " ";
		}
	cout<<endl;
	}
}
void sudoku::changeNum(int x,int y){
	int q,b;
	for(q=0;q<9;q++){
		for(b=0;b<9;b++){
			if(a[q][b]==x){
				a[q][b]=y;
			}
			else if(a[q][b]==y){
				a[q][b]=x;
			}

		}

	}
}
void sudoku::rotate(int n){
	int q,b;
	int temp[9][9];
	for(n=n%4;n>=0;n--){
		for(q=0;q<9;q++){
			for(b=0;b<9;b++){
				temp[b][8-q]=a[q][b];
			}



		}

	}

}
void sudoku::changeRow(int x,int y){
		int q,b,ttt;
		for(q=0;q<3;q++){
			for(b=0;b<9;b++){
				ttt=a[y*3+q][b];
				a[y*3+q][b]=a[x*3+q][b];
				a[x*3+q][b]=ttt;
			}
		}
}

void sudoku::changeCol(int x,int y){
		int q, b,ttt;
		for(q=0;q<9;q++){
			for(b=0;b<3;b++){
				ttt=a[q][y*3+b];
				a[q][y*3+b]=a[q][x*3+b];
				a[q][x*3+b]=ttt;


			}


		}

}
void sudoku::flip(int x){
	int q,b;
	int temp[9][9];
	if(x==0){
		for(q=0;q<9;q++){	
			for(b=0;b<9;b++){
				temp[q][b]=a[8-q][b];
			

			}
		}
	}
	else if(x==1){
		for(q=0;q<9;q++){
			for(b=0;b<9;b++){
				temp[q][b]=a[q][8-b];

			}
		}

	}

}

	


	void sudoku::giveQuestion(){
		int q,b;
		int quesiton[9][9]={
			{0,0,5,3,0,0,0,0,0},
			{8,0,0,0,0,0,0,2,0},
			{0,7,0,0,1,0,5,0,0},
			{4,0,0,0,0,5,3,0,0},
			{0,1,0,0,7,0,0,0,6},
			{0,0,3,2,0,0,0,8,0},
			{0,6,0,5,0,0,0,0,9},
			{0,0,4,0,0,0,0,3,0},
			{0,0,0,0,0,9,7,0,0},
			};
		for(q=0;q<9;q++){
			for(b=0;b<9;b++){
				quesiton[q][b];
				cout<<quesiton[q][b] << " ";


			}
			cout<<endl;
		}

	}
