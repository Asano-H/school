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
	clock_t start,end;

	start = clock();
	for(i=0;i<5;i++){
		wordchange = ransu();
		while(*word != ans){
			printf("%s\n",word[wordchange]);
			gets(ans);
			if(strcmp(word[wordchange],ans)){
				puts("惜しい!");
			}else{
				puts("正解!");
				break;
			}
		}
	}
	end = clock();
	printf("%.2f秒",(double)(end - start)/CLOCKS_PER_SEC);
}

int main(void){

	typing_color();
	return 0;
}