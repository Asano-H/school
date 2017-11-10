/*文字列"0123456789"を逆順に表示するプログラム*/
#include<stdio.h>
int main(void){
	char str[]="0123456789";
	char ch;
	int i;

	for(i=0;i<=9/2;i++){
		ch = str[i];
		str[i] = str[9-i];
		str[9-i] = ch;		
	}
	str[10]='\0';
	printf("%s",str);
	return 0;
}