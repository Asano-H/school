#include<stdio.h>
void greeting(void){
	int no;
	printf("朝(1) 昼(2) 夜(3)のどれかを選んでください：");
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