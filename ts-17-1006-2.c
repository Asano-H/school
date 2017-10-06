#include<stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0)
int main(void){
	int a=2,b=3;
	if(a>b){
		printf("%d",diff(int,a,b));
	}else
		printf("aはbより大きいです");

	return 0;
}