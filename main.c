#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "bingoBoard.h"

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int i, j;

	
	
	printf("#############################��~�� ~ ����#############################");
	printf("\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!��� ���� ������ ����������?!!!!!!!!!!!!!!!!!!") ;
	printf("\n\n\n");
	printf("=======================================================================\n");
	printf("=======================================================================");
	printf("\n");
	
	
	bingo_init();
	bingo_print();
	bingo_input(15);

	
	printf("=======================================================================\n");
	printf("=======================================================================");
	printf("\n");
	printf("YOU WIN - YOU WIN - YOU WIN - YOU WIN - YOU WIN - YOU WIN - YOU WIN - YOU WIN - YOU");
	printf("\n");
	printf("CONGRATULATION - CONGRATULATION - CONGRATULATION -  CONGRATULATION - CONGRATULATION");

 
	return 0;
}
