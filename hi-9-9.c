#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char str[256];
	printf("文字列を入力してください:");
	scanf("%s",str);

	printf("%d",strlen(str));

	return 0;
}