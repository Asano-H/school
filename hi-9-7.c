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
	printf("文字列を入力してください:");
	scanf("%s",s);
	printf("探したい文字を入力してください:");
	scanf(" %c",&c);

	printf("文字列%sの中には文字%cが%d個含まれています",s,c,str_chnum(s,c));

	return 0;
}