#include<stdio.h>
int main(void){
	char s[100];

	char str[]="ABC";
	printf("•¶Žš—ñstr‚Í\"%s\"‚Å‚·\n",str);

	s[0]='D';
	s[1]='E';
	s[2]='F';
	s[3]='\0';
	printf("•¶Žš—ñs‚Í\"%s\"‚Å‚·\n",s);

	return 0;
}