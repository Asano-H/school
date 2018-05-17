#include<stdio.h>
int main(void){
	int no;
	int i=0;
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d",&no);
	for(i=0; i<no; i++)
		putchar('0'+i%3+1);

	return 0;
}