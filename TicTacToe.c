/*
	CO222-2016 Lab05
	Author: E13277

	TicTacToe game
*/
#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
void scanBoard(int a[SIZE][SIZE]);
void printBoard(int b[SIZE][SIZE]);
int getWinner(int b[SIZE][SIZE]);
int main(){

	int inBoard[SIZE][SIZE];	//declaring an array

	printf("Please enter the board:\n");
	scanBoard(inBoard);	//scanBoard
	printf("Here is the board:\n");
	printBoard(inBoard);	//printBoard

	//printing the result
	if(getWinner(inBoard)==0){
		printf("Noughts win\n");
	}else if(getWinner(inBoard)==1){
		printf("Crosses win\n");
	}else{
		printf("There are no winners\n");}
	return 0;
	exit(0);
    }



//scan function
void scanBoard(int board[SIZE][SIZE]){
	int i,j;						// input the board
	for(i=0;i<SIZE;i++){
	    scanf("%d %d %d",&board[i][0],&board[i][1],&board[i][2]);
       }
       for(i=0;i<SIZE;i++){
       for(j=0;j<SIZE;j++){
            if(board[i][j]==1 || board[i][j]==2 || board[i][j]==0){	//check the inputs are valid or invalid
            }else{
                printf("Enter valid input.");
                exit(1);
            }
       }
	}

}


//print function
void printBoard(int board[SIZE][SIZE]){

    int i,j;
	for(i=0;i<SIZE;i++){
       for(j=0;j<SIZE;j++){
            if(board[i][j]==0){
                printf("O ");		// print O for 0
            }if( board[i][j]==1){
                printf("X ");		//print X for 1
            }if(board[i][j]==2){	
                printf(". ");		//print . for 
            }
        }
        printf("\n");
	}

}


//find the winner of the game
//assume both two players can't win the game at the same time. It can't happen in a real game
int getWinner(int board[SIZE][SIZE]){

	int winner = 2;
	int i,j,count=0;
	for(i=0;i<SIZE;i++){
		count =0;
		for(j=0;j<SIZE;j++){	
			if(board[i][j]==0){
			count++;
			}			
			
		}
		if(count==SIZE){
			winner=0;
		}		
	}
	
		
	for(i=0;i<SIZE;i++){
		count =0;
		for(j=0;j<SIZE;j++){	
			if(board[j][i]==0){
			count++;
			}			
			
		}
		if(count==SIZE){
			winner=0;
		}		
	}


	count =0;
	for(i=0;i<SIZE;i++){	
		if(board[i][i]==0){
		count++;			
		}
		if(count==SIZE){
			winner=0;
		}		
	}
	count=0;
	for(i=0;i<SIZE;i++){	
		if(board[i][SIZE-i-1]==0){
		count++;			
		}
		if(count==SIZE){
			winner=0;
		}		
	}


	for(i=0;i<SIZE;i++){
		count =0;
		for(j=0;j<SIZE;j++){	
			if(board[i][j]==1){
			count++;
			}			
			
		}
		if(count==SIZE){
			winner=1;
		}		
	}
	
		
	for(i=0;i<SIZE;i++){
		count =0;
		for(j=0;j<SIZE;j++){	
			if(board[j][i]==1){
			count++;
			}			
			
		}
		if(count==SIZE){
			winner=1;
		}		
	}


	count =0;
	for(i=0;i<SIZE;i++){	
		if(board[i][i]==1){
		count++;			
		}
		if(count==SIZE){
			winner=1;
		}		
	}

	for(i=0;i<SIZE;i++){	
		if(board[i][SIZE-i-1]==1){
		count++;			
		}
		if(count==SIZE){
			winner=1;
		}
		
	}


	/*if(winner!=0 ||winner !=1){
	winner=2;	
	}*/
	//if winner is Noughts, winner = 0
	//if winner is Crosses, winner = 1
	//if there is no winner, winner = 2

	return  winner;
}
