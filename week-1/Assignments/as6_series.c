//Write a program to display the sequence 1, 2, 4, 8, 16, 32, 64, ....................

#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter n: ");scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("%d, ",(int)pow(2,i));
	}
	return 0;
}
