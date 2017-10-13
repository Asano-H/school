#include<stdio.h>
int main(void){
	int a,b;
	printf("２つの整数を入力してください\n");
	printf("整数Ａ："); scanf("%d",&a);
	printf("整数Ｂ："); scanf("%d",&b);
	if(a>b){
		int temp = b;
			   b = a;
			   a = temp;
		printf("入れ替えました。\nＡ：%dＢ：%d"a,b);
	}
	return 0;
}