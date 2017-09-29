/*フィボナッチ数列*/
#include<stdio.h>
int main(void){
	int a=0,b=1,c;
	int i;
	
	for(i=0;i<7;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d",a);
	}
	return 0;
}