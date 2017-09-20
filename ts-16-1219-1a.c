#include<stdio.h>
#include<math.h>
int main(void){
	double x,y,z;

	x=(y=1)+1;
	z=pow(x,y);
	
	printf("%f\n",z);
	return 0;
}