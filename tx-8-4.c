/*Œx•ñ‚ğ”­‚·‚é*/
#include<stdio.h>
#define alert() (printf("\a"))/*Œx•ñ*/
#define puts_alert(str)  (alert(),puts(str))

int main(void){
	int num;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d",&num);
	if (num)
		puts_alert("‚»‚Ì”‚Í‚O‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	else
		puts_alert("‚»‚Ì”‚Í‚O‚Å‚·");
	return 0;
}