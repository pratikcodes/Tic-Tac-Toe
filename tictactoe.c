#include <stdio.h>
int main(){
	int px,py,i,j,k=0;
	char xo[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			xo[i][j]=' ';
		}
	}
	printf("Tic-Tac-Toe\n");
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(j!=2)
					printf(" %c |", xo[i][j]);
				else
					printf(" %c ", xo[i][j]);
			}
			printf("\n");
			if(i!=2)
				printf("-----------");
			printf("\n");
	}
	while(k<9){
		if(k%2==0){
			while(1){		
				printf("Player1, select row:\n");
				scanf("%d", &px);
				printf("Player1, select column:\n");
				scanf("%d", &py);
				if(xo[px-1][py-1]==' '){
					xo[px-1][py-1]='X';
					break;
				}
				else
					printf("Position already occupied\n");
				}
		}
		else{
			while(1){
				printf("Player 2, select row:\n");
				scanf("%d", &px);
				printf("Player 2, select column:\n");
				scanf("%d", &py);
				if(xo[px-1][py-1]==' '){
					xo[px-1][py-1]='0';
					break;
				}
				else
					printf("Position already occupied\n");
				}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(j!=2)
					printf(" %c |", xo[i][j]);
				else
					printf(" %c ", xo[i][j]);
			}
			printf("\n");
			if(i!=2)
				printf("-----------");
			printf("\n");
		}
		if(xo[0][0]==xo[1][0] && xo[1][0]==xo[2][0] && xo[0][0]!=' '|| xo[0][1]==xo[1][1] && xo[1][1]==xo[2][1] && xo[0][1]!=' ' || xo[0][2]==xo[1][2] && xo[1][2]==xo[2][2] && xo[0][2]!=' ' || xo[0][0]==xo[0][1] && xo[0][1]==xo[0][2] && xo[0][0]!=' ' || xo[1][0]==xo[1][1] && xo[1][1]==xo[1][2] && xo[1][0]!=' ' || xo[2][0]==xo[2][1] && xo[2][1]==xo[2][2] && xo[2][0]!=' ' || xo[0][0]==xo[1][1] && xo[1][1]==xo[2][2] && xo[0][0]!=' '|| xo[0][2]==xo[1][1] && xo[1][1]==xo[2][0] && xo[0][2]!=' '){
			if(k%2==0){
				printf("Player 1 wins!\n");
				break;
			}
			else{
				printf("Player 2 wins!\n");
				break;
			}
		}
		else if(k==8)
			printf("It's a tie!");
		k++;
	}
	return 0;
}
