//Write a program to display the sequence BCA1, BCB2, BCC3, BCD4, .....................

#include<stdio.h>
#include<stdlib.h>

int main(){
	for(int i=0;i<26;i++){
		printf("%c%c%c%d, ",'B','C','A'+i,i+1);
	}
	return 0;
}
