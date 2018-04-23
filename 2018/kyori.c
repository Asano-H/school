#include<stdio.h>
int main(void){
	double time;
	printf("通学時間(h)： ");
	scanf("%lf",&time);
	printf("徒歩：%8.2lfkm\n",time/4);
	printf("自転車：%8.2lfkm\n",time/10);

	return 0;
}