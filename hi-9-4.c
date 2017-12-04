#include<stdio.h>
int main(void){
	char str[256];
	int i;
	printf("文字列を入力してください:");
	scanf("%s",str);

	for(i=0;str[i]>'\0';i++){
		printf("%d番目の文字：%c(文字コード：%x)\n",i,str[i],str[i]);
	}
	return 0;
}