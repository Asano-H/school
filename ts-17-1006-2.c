#include<stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0)
int main(void){
	int a=2,b=3;
	if(a>b){
		swap(int,a,b);
		printf("%d,%d",a,b);
	}else
		printf("a��b���傫���ł�\n");

	return 0;
}
/*
define�ōs�����������s����ꍇ�́Ado while�����g���B
���䎮��(0)�Ȃ̂ň�x�������s����Ȃ��B*/