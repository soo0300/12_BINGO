#include<stdio.h>
#include "bingoBoard.h"
#define HOLE -1

static int bingoBoard[N_SIZE][N_SIZE];
static int bingoStatus[N_SIZE*N_SIZE];

void bingo_init(void){
	int i,j;
	int cnt=1;
	for(i=0; i<N_SIZE; i++){
		for(j=0; j<N_SIZE; j++){
			if(cnt==15){
				bingoBoard[i][j]=HOLE;
				cnt++;
			}
			else
			{
				bingoStatus[cnt-1]=i*N_SIZE + j;
				bingoBoard[i][j]= cnt++;
			}
		}
	}
}


void bingo_print(void){
	int i, j;
	for(i=0; i<N_SIZE; i++){
		for(j=0; j<N_SIZE; j++){
			if(bingoBoard[i][j]==HOLE){
				printf("X\t\t");
			}else{	
				printf("%d\t\t",bingoBoard[i][j]);
			}
		}
		printf("\n");
	
	}
}


void bingo_input(int sel){

	
}


int bingo_line_count(void){
	
}



