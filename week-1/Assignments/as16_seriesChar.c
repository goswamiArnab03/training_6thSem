//C program to display the sequence AMM, COO, EQQ, ..........

#include<stdio.h>
#include<stdlib.h>

int main(){
	for(int i=0;i+12<26;i+=2){
		printf("%c%c%c, ",'A'+i,'A'+i+12,'A'+i+12);
	}
	return 0;
}
