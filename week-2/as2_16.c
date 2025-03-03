//C Program to make a simple calculator using switch...case.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,y;
	printf("Enter two nos.: ");
	scanf("%d%d",&x,&y);
	char opr;
	printf("Enter operation: ");
	scanf(" ");
	scanf("%c",&opr);
	switch(opr){
		case '+':
			printf("Result: %d",x+y);
			break;
		case '-':
			printf("Result: %d",x-y);
			break;
		case '*':
			printf("Result: %d",x*y);
			break;
		case '/':
			if(!y){
				printf("Error\n");exit(1);
			}
			printf("Result: %d",x/y);
			break;
		default:
			printf("Invalid");
			break;
	}
	return 0;
}
