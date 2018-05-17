#include<stdio.h>

void swap(int *a1, int *a2){
	int temp;
	temp = *a2;
	*a2 = *a1;
	*a1 = temp;
}

void sort3(int *n1, int *n2, int *n3){
	if(*n1>*n2)	swap(n1,n2);
	if(*n2>*n3)	swap(n2,n3);
	if(*n1>*n2)	swap(n1,n2);
}

int main(void){
	int no1,no2,no3;

	printf("三つの整数を入力してください\n");
	printf("整数1:");
	scanf("%d",&no1);
	printf("整数2:");
	scanf("%d",&no2);
	printf("整数3:");
	scanf("%d",&no3);

	sort3(&no1,&no2,&no3);

	puts("昇順にソートしました");
	printf("整数1:%d\n",no1);
	printf("整数2:%d\n",no2);
	printf("整数3:%d\n",no3);
}