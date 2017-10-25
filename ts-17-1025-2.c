#include<stdio.h>
#define diff(x,y) (((x)>(y)) ? ())((x)-(y) : ((y)-(x)))

int main(void){
	int x=15;
	int y=5;
	printf("%d",diff(x++,y));
	printf("%d\n",x);

	return 0;
}

/*x++‚ÍÅŒã‚Éx=x+1‚ªÀs‚³‚ê‚é*/