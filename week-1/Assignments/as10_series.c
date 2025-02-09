//Write a program to display the sequence 21, 9, 21, 11, 21, 13, 21, .................


#include<stdio.h>

int main(){
	for(int i=9;i<=30;i+=2){
		printf("%d, %d, ",21,i);
	}
	return 0;
}
