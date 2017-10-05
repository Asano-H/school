#include<stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t}while(0)

int main(void){
	int a,b;
	
	printf("整数を２つ入力してください。：");
	printf("A："); scanf("%d",&a);
	printf("B："); scanf("%d",&b);
	swap(int,a,b);
	printf("値を交換しました。\nA：%dB：%d",a,b);

	return 0;
}