#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[]){
	if(argc!=2){
		printf("ERROR\n");
		exit(0);
	}
	char alpha[26]={0};
	int j=0;
	char res[100];
	for(int i=0;i<strlen(argv[1]);i++){
		if(argv[1][i]>='0' && argv[1][i]<='9'){
			printf("ERROR\n");
			exit(0);
		}
		if(alpha[argv[1][i]-'a']==0){
			res[j]=argv[1][i];j++;
			alpha[argv[1][i]-'a']++;
		}
		else{
			alpha[argv[1][i]-'a']++;
		}
	}
	printf("Result: %s\n",res);
	return 0;
}
			
