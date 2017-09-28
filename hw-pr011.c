#include<stdio.h>
int main(void){
	int point;

	printf("得点：");
	scanf("%d",&point);

	if(point<=60)
		puts("不可");
	else if(point<=70)
		puts("可");
	else if(point<=80)
		puts("良");
	else
		puts("優");

	return 0;
}