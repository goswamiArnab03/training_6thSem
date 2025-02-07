//Write a program to display the sequence 1, 2, 2, 4, 8, 32, 256, ....................

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter range(n) :");
	scanf("%d",&n);
	
	int a=1,b=2;
	if(n<1){
		printf("Invalid\n");
		exit(0);
	}
	printf("The sequence is: \n");
	if(n>=1){
		printf("%d ",a);
		if(n>1){
			printf("%d ",b);
			for(int i=3;i<=n;i++){
				int c=a*b;
				printf("%d ",c);
				a=b;b=c;
			}
		}
	}
	return 0;
}
