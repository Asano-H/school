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
	char ans[256];
	int i,wordchange;

	for(i=0;i<5;i++){
		wordchange = ransu();
		while(*word != ans){
			printf("%s\n",word[wordchange]);
			gets(ans);
			if(strcmp(word[wordchange],ans)){
				puts("É‚µ‚¢!");
			}else{
				puts("³‰ð!");
				break;
			}
		}
	}
}

int main(void){

	typing_color();
	return 0;
}