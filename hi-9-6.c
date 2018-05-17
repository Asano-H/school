#include<stdio.h>
int str_char(const char s[],int c){
	int i;
	for(i=0;s[i]>'\0';i++)
		if(s[i]==c)
			return i;
	return -1;
}

int main(void){
	char s[80],c;
	int n;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s",s);
	printf("’T‚µ‚½‚¢•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf(" %c",&c);

	n = str_char(s,c);

	if(n<0){
		printf("‚»‚Ì•¶š‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ");
	}else{
		printf("%s‚Ì’†‚É%c‚ªÅ‰‚ÉoŒ»‚·‚é“Yš‚Í%d‚Å‚·",s,c,n);
	}

	return 0;
}