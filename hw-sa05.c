#include<stdio.h>
int main(void){
	int a,b,c;
	double x,y,z;

	a=5;
	b=2;
	c=4;
	printf("(int)a   =%d\n",(int)a);
	printf("(float)b =%f\n",(float)b);
	printf("(double)c=%f\n",(double)c);

	x=(double)(5/2);
	y=(double)5/2;
	z=5/(double)2;

	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("z=%f\n",z);
	return 0;
}