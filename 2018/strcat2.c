#include<stdio.h>
#include<string.h>
int main(void){
	char s[256]="RINGO";
	char t[256]="MIKAN";

	strcpy(s,strcat(s,t));
	printf("%s",s);
	return 0;
}