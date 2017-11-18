#include<stdio.h>

void swap(int *a1, *a2){
	int *temp;
	temp = *a2;
	*a2 = *a1;
	*a1 = temp;
}

void sort3(int *n1, int *n2, int *n3){
	if(*n1<*n2)	swap(n2,n1);
	if(*n2<*n3)	swap(n3,n2);
	if(*n3<*n1)	swap(n1,n3); 
}

int main(void){
	int no1,no2,no3;

	printf("三つの整数を入力してください");
	printf("整数1：");
	scanf("%d",&no1);
	printf("整数2：");
	scanf("%d",&no2);
	printf("整数3：");
	scanf("%d",&no3);

	sort3(&no1,&no2,&no3);

	puts("昇順に入れ替えました");
	printf("整数1は%d",no1);
	printf("整数2は%d",no2);
	printf("整数3は%d",no3);
}