//C program to display the sequence ABA, BCB, CDC, DED, ...................

#include<stdio.h>
#include<stdlib.h>

int main(){
	for(int i=0;i<25;i++){
		printf("%c%c%c",'A'+i,'A'+i+1,'A'+i);
		printf(", ");
	}
	return 0;
}
