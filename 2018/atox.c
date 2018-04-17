#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a;
	long b;
	double c;
	float d;

	a = atoi("123");
	b = atol("123");
	// c = atoff("1.23");
	d = atof("1.234567");

	printf("a= %d\n",a);
	printf("b= %ld\n",b);
	// printf("c= %f\n",c);
	printf("d= %lf\n",d);
	printf("\n");

	a = atoi("1X23");
	b = atol("12X3");
	// c = atoff("1.2X3");
	d = atof("1X.23456");

	printf("a= %d\n",a);
	printf("b= %ld\n",b);
	// printf("c= %f\n",c);
	printf("d= %lf\n",d);
	printf("\n");

	a = atoi("X12");
	b = atol("X12");
	// c = atoff("X1.2");
	d = atof("X1.23456")

	printf("a= %d\n",a);
	printf("b= %ld\n",b);
	// printf("c= %f\n",c);
	printf("d= %lf\n",d);
	printf("\n");


	return 0;
}