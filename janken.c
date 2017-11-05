#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int ransu(void){
	int a;
	int i;

	srand((unsigned)time(NULL));
	for(i=0;i<NUMBER;i++)
		a=rand()%3+1;
	return a;
}

void janken_hitori(void){
	printf("【1】グー 【2】チョキ 【3】パー");

}

int main(void){
	printf("")
	janken();
	return 0;

}