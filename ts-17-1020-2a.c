#include<stdio.h>
int fact(int n){
	if(n>0)
		return n*fact(n-1);
	else
		return 1;
}

int main(void){
	int num;
	printf("整数を入力してください：");
	scanf("%d",&num);
	printf("%dの階乗は%dです",num,fact(n));

	return 0;
}