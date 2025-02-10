//Write a program to display the sequence 1, 4, 9, 16, 25, 36, 49, ....................

#include<stdio.h>

int main(){
	for(int i=1,j=1;i<50;j+=2,i+=j){
		printf("%d, ",i);
	}
	return 0;
}
