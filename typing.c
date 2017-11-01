#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int ransu(void){
	int a;
	srand((unsigned)time(NULL));
	a = rand()%3+1;
	return a;
}

void typing_color(void){
	char word[4][50]={"red","blue","green","yellow"};
	int i;
	for(i=0;i<5;i++){
		printf("%s\n",word[ransu()]);

	}
}

int main(void){
	typing_color();
	return 0;
}