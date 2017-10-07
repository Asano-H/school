#include<stdio.h>
#define diff(a,b) (a*b)

int main(void){
	printf("%d\n",diff(10+20,1+2));
	return 0;
/*加算より乗算が優先されるので、(10+ 20*1 +2)となることに注意する。
加算を優先させたい場合には、diff( (10+20),(1+2) )とするか、
もしくは、diff(a,b) ( (a) * (b) )とする*/
