#include<stdio.h>
int main(void){
	char s[100];

	char str[]="ABC";
	printf("������str��\"%s\"�ł�\n",str);

	s[0]='D';
	s[1]='E';
	s[2]='F';
	s[3]='\0';
	printf("������s��\"%s\"�ł�\n",s);

	return 0;
}