#include<stdio.h>
#define diff(x,y) ((x > y) ? (x - y) : (y - x)) 

int main(void){
	int a,b;
	printf("二つの整数を入力してください：");
	scanf("%d,%d",&a,&b);
	printf("二つの整数の差は%dです",diff(a,b));
	return 0;
}
