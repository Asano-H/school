#include<stdio.h>

void div(int a,int b,int *quot,int *rem){
	*quot = a/b;
	*rem  = a%b;
}

int main(void){
	int a,b;
	int *qu;
	int *re;

	printf("２つの整数を入力してください\n");
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);

	div(a,b,&qu,&re);
	printf("%d÷%d=%dあまり%d",a,b,qu,re);
}