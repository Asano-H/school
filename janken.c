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
	char hand[3][50]={"グー","チョキ","パー"};
	int player;
	do{
		puts("じゃんけん・・・\n\n");
		printf("【0】グー 【1】チョキ 【2】パー:");
		scanf("%d",&player);
		
		if(player=>0 && player<3){
			puts("ポン!");
			printf("あなた:%s\n  PC  :%s\n",hand[player],hand[ransu()]);
		}else{
			printf("もう一度入力してください\n");

		}

	}while(cont)
}

int main(void){
	janken_hitori();
	return 0;

}