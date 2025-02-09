//Write a program to display the sequence 14, 28, 20, 40, 32, 64, ......................


#include<stdio.h>

int main(){
	for(int i=14,j=1;i<100;i+=6*j,j++){
		printf("%d, %d, ",i,i*2);
	}
	return 0;
}
