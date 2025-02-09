//Write a program to display the sequence 1, 1, 5, 5, 9, 9, 13, 13, .............................

#include<stdio.h>

int main(){
	for(int i=1;i<=20;i+=4){
		printf("%d, %d, ",i,i);
	}
	return 0;
}
