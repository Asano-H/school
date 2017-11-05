#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int ransu(void){
	int a;
	srand((unsigned)time(NULL));
		a=rand()%3;
	return a;
}

void janken_hitori(void){
	char hand[]={"グー","チョキ","パー"};
	int player;
	puts("じゃんけん・・・\n\n")

	printf("【0】グー 【1】チョキ 【2】パー:");
	scanf("%d",&player);

	puts("ポン!");
	printf("%s",hand[ransu()]);


}

int main(void){
	janken_hitori();
	return 0;

}