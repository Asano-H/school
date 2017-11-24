/*文字列の中から数字だけをとりだす*/
#include<stdio.h>

void del_non(char s[]){
	int i;
	int x;
	while(s[i]){
		if(s[i] >= '0' && s[i]<='9'){
			s[x++] = s[i];
		i++;
	}
}

int main(void){
	char str[];
	printf("文字を入力してください\n");
	scanf("%s",str);

	del_non(str);

}