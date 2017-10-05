#include<stdio.h>
#define max(x,y) ((x > y) ? x : y)

int main(void){
	int a,b,c,d;
	int ma,ax;

	printf("®”‚ğ‚S‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	ma = max(max(a,b),max(c,d));
	ax = max(max(max(a,b),c),d);
	
	printf("ˆê”Ô‘å‚«‚¢’l‚Í%d‚Å‚·\n",ma);
	printf("ˆê”Ô‘å‚«‚¢’l‚Í%d‚Å‚·\n",ax);
}