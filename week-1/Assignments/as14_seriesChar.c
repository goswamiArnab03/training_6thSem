//Write a program to display the sequence A, Z, X, B, V, ........................

#include<stdio.h>
#include<stdlib.h>

int main(){
	int left=1,right=23;
	printf("%c, %c, ",'A'+0,'A'+25);
	while(left<=right){
		printf("%c, %c, ",'A'+right,'A'+left);
		left++;right-=2;
	}
	return 0;
}
