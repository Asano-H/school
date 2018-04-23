/*0~104までの数当てゲーム*/

#include<stdio.h>
int main(void){
	int x,y,a,b,c;
	printf("０～104までの整数xを思い浮かべて！\n");
	printf("x÷３の余りは：");
	scanf("%d",&a);
	printf("x÷５の余りは：");
	scanf("%d",&b);
	printf("x÷７の余りは：");
	scanf("%d",&c);

	y=(70*a)+(21*b)+(15*c);
	x= y%105;
	printf("x=%d\n",x);

	return 0;
}