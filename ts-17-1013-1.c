#include<stdio.h>
int main(void){
	int a,b;
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("®”‚`F"); scanf("%d",&a);
	printf("®”‚aF"); scanf("%d",&b);
	if(a>b){
		int temp = b;
			   b = a;
			   a = temp;
		printf("“ü‚ê‘Ö‚¦‚Ü‚µ‚½B\n‚`F%d‚aF%d",a,b);
	}
	return 0;
}