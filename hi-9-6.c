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
	printf("文字列を入力してください：");
	scanf("%s",s);
	printf("探したい文字を入力してください：");
	scanf(" %c",&c);

	n = str_char(s,c);

	if(n<0){
		printf("その文字は含まれていません");
	}else{
		printf("%sの中に%cが最初に出現する添字は%dです",s,c,n);
	}

	return 0;
}