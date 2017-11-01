#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void typing_color(void){
	char word[4][50]={"red","blue","green","yellow"};
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++)
		printf("%d",rand()%4+1);

	return 0;
}

int main(void){
	typing_color();
	return 0;
}