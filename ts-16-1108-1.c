#include<stdio.h>
int main(void){
	double x,y;

	scanf("%lf,%lf",&x,&y);
	printf("%f÷%fの余りは%dです\n",x,y,(int)x%(int)y);
	return 0;

}