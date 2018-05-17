#include<stdio.h>
int main(void){
	int i;
	char a[]="abc";
	char b[100]={'a','b','c','\0'};
	for(i=0;a[i]!='\0';i++){
		printf("%d文字です\n",i+1);
	}
	return 0;
}