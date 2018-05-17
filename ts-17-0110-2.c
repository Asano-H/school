/*キーボードから'+'を入力したときに、変数aとbの足し算、
'-'を入力したときに引き算をするプログラムを、switch文を利用して作成しなさい。*/
#include<stdio.h>
int main(void){
	int a=2,b=3,ans;
	char op;
	scanf("%c",&op);
	switch(op){
		case '+':
			ans = a+b;
			printf("%d",ans);
			break;

		case '-':
			ans = a-b;
			printf("%d",ans);
			break;
	}
	return 0;
} 
