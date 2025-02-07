//Write a program to display the sequence A1, B2, C4, D8, E16, F32, .................

#include<stdio.h>
#include<stdlib.h>

int main(){
	int j=1;
	for(int i=0;i<26;i++,j*=2){
		printf("%c%d, ",'A'+i,j);
	}
	return 0;
}
