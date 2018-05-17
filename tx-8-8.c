/*ŠKæ*/
#include<stdio.h>
int fact(int no){
	if(no>0)
		return no*fact(no-1);
	else
		return 1;
}

int main(void){
	int num;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d",&num);

	printf("%d‚ÌŠKæ‚Í%d‚Å‚·",num,fact(num));

	return 0;
}