#include<stdio.h>
int main(void){
	int a,b;

	puts("二つの整数を入力");
	printf("A：\n");	scanf("%d",&a);
	printf("B：\n");	scanf("%d".&b);

	if(a%b){
		puts("BはAの約数ではない。");
	}else{
		puts("BはAの約数。");
	}
	return 0;
}