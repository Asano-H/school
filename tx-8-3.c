#include<stdio.h>
#define swap(type,a,b) do{type t=a; a=b; b=t;}while(0)

int main(void){
	int a,b;

	printf("�Q�̐�������͂��Ă��������B\n");
	printf("A�F"); scanf("%d",&a);
	printf("B�F"); scanf("%d",&b);
	swap(int,a,b);
	printf("�l���������܂����B\nA�F%d\nB�F%d\n",a,b);

	return 0;
}