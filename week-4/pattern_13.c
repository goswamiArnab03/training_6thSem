#include<stdio.h>

int main(){
	int a=1;
	for(int i=0;i<7;i++){
		for(int j=0;j<i*2;j++){
			printf("  ");
		}
		for(int k=0;k<7-i*2;k++){
			if(a<10)printf("%d   ",a);
			else printf("%d  ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}

