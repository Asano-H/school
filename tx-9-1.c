#include<stdio.h>
int main(void){
	char s[100];

	char str[]="ABC";
	printf("文字列strは\"%s\"です\n",str);

	s[0]='D';
	s[1]='E';
	s[2]='F';
	s[3]='\0';
	printf("文字列sは\"%s\"です\n",s);

	return 0;
}