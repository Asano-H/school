#include<stdio.h>
int fact(int n){
	if(n>0)
		return n*fact(n-1);
	else
		return 1;
}

int main(void){
	int num;
	printf("��������͂��Ă�������");
	scanf("%d",&num);
	printf("%d�̊K���%d�ł�",num,fact(n));

	return 0;
}