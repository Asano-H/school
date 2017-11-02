#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUMBER 5
int ransu(void){
	int a[NUMBER];
	int i;

	srand((unsigned)time(NULL));
	for(i=0;i<NUMBER;i++)
		a=rand()%NUMBER+1;
	return a;
}

void typing_color(void){
	char word[4][50]={"red","yellow","orange","green","blue","purple"};
	int i;
	char ans;

	ransu();
	for(i=0;i<NUMBER;i++){

		printf("%s",word[ransu()]);
		scanf("%s",ans);
		printf("%s",ans);
	}
}

int main(void){

	typing_color();
	return 0;
}