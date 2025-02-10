//Write a program to display the series 0, 0, 2, 1, 4, 2, 6, 3, 8, 4,............................

#include<stdio.h>

int main(){
	for(int i=0;i<50;i+=2){
		printf("%d, %d, ",i,i/2);
	}
	return 0;
}
