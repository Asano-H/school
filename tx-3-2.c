#include<stdio.h>
int main(void){
	int a,b;

	puts("2つの整数を入力してださい。");
	printf("A：");	scanf("%d",&a);
	printf("B：");	scanf("%d",&b);

	if(a%b){
		puts("BはAの約数ではない。");
	}else{
		puts("BはAの約数。");
	}
	return 0;
}