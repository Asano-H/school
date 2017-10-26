#include<stdio.h>
void greeting(void){
	int no;
	printf("’©(1) ’‹(2) –é(3)‚Ì‚Ç‚ê‚©‚ğ‘I‚ñ‚Å‚­‚¾‚³‚¢F");
	scanf("%d",&no);

	if(no==1)
		printf("Good morning.");
	else if(no==2)
		printf("Good afternoon.");
	else if(no==3)
		printf("Good evening.");
	else
		printf("Hi.");
}

int main(void){
	greeting();
	return 0;
}