#include<stdio.h>
int str_chnum(const char s[],int c){
	int i,count=0;
	for(i=0;s[i] > '0';i++){
		if(s[i]==c){
			count++;
		}		
	}
	return count;

}

int main(void){
	char s[80],c;
	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s",s);
	printf("’T‚µ‚½‚¢•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf(" %c",&c);

	printf("•¶Žš—ñ%s‚Ì’†‚É‚Í•¶Žš%c‚ª%dŒÂŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·",s,c,str_chnum(s,c));

	return 0;
}