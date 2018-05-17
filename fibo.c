#include<stdio.h>

int main(void){
	int a=0,b=1,c;
	int n;
	
	for(n=0;n<=45;n++){
		c=a+b;
		printf("%16.13f\n",(double)c/(double)b);
		a=b;
		b=c;
	}
	return 0;
}

