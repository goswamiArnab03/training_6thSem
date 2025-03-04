#include<stdio.h>

int main(){
	int k=6;
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d ",k);
		}
		k--;
		printf("\n");
	}
	return 0;
}
