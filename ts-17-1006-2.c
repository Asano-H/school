#include<stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0)
int main(void){
	int a=2,b=3;
	if(a>b){
		swap(int,a,b);
		printf("%d,%d",a,b);
	}else
		printf("aはbより大きいです\n");

	return 0;
}
/*
defineで行う式が複数行ある場合は、do while文を使う。
制御式が(0)なので一度しか実行されない。*/