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
	int player,cont,te;
	do{
		puts("じゃんけん・・・\n\n");
		printf("【0】グー 【1】チョキ 【2】パー : ");
		scanf("%d",&player);
		te = ransu();
		if(player>=0 && player<3){
			puts("ポン!");
			printf("あなた:%s\n  PC  :%s\n",hand[player],hand[te]);
			
			if(player==hand[te]){
				printf("あいこ!");
			}else if( 		(player == 0 && hand[te]==1)
						||	(player == 1 && hand[te]==2)
						||	(player == 2 && hand[te]==0)){
				printf("あなたの勝ち!");
			}else{
				printf("あなたの負け!");
			}

			printf("【9】もう一回遊ぶ 【0】もういい : ");
			scanf("%d",&cont);
		}else{
			printf("もう一度入力してください\n");
		}

	}while(cont);
}

int main(void){
	janken_hitori();
	return 0;

}