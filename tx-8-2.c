#include<stdio.h>
#define max(x,y) ((x > y) ? x : y)

int main(void){
	int a,b,c,d;
	int ma,ax;

	printf("整数を４つ入力してください：");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	ma = max(max(a,b),max(c,d));
	ax = max(max(max(a,b),c),d);
	
	printf("一番大きい値は%dです\n",ma);
	printf("一番大きい値は%dです\n",ax);
}