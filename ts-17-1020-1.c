#include<stdio.h>

int gcd(int x,int y,)

int main(void){
	int x,y;
	x=256;
	y=512;
	printf("%d‚Æ%d‚ÌÅ‘åŒö–ñ”‚Í%d‚Å‚·"x,y,gcd(x,y));

	return 0;
}

int gcd(int x,int y){
	if(y==0)
		return x;
	else
		gcd(y,x%y);
}