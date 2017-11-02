#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#define NUMBER 6
int ransu(void){
	int a;
	int i;

	srand((unsigned)time(NULL));
	for(i=0;i<NUMBER;i++)
		a=rand()%NUMBER+1;
	return a;
}

void typing_color(void){
	char word[NUMBER][50]={"red","yellow","orange","green","blue","purple"};
	char ans;
	int i,wordchange;

	for(i=0;i<NUMBER;i++){

		wordchange = ransu();
		printf("%s\n",word[wordchange]);
		scanf("%s",ans);
		if(strcmp(word[wordchange],ans)){
			puts("³‰ð!");
			break;
		}else{
			puts("É‚µ‚¢!");
		}
	}
}

int main(void){

	typing_color();
	return 0;
}