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
		puts("\n##############################\n");
		puts("じゃんけん・・・\n\n");
		printf("【0】グー 【1】チョキ 【2】パー : ");
		scanf("%d",&player);
		te = ransu();

		if(player>=0 && player<3){
			puts("\n\nポン!\n");
			printf("あなた:%s\n  PC  :%s\n\n",hand[player],hand[te]);
			
			if(player == te){
				puts("あいこ!\n\n");
			}else if( (player%2) == (te+1)){
				puts("あなたの勝ち!\n\n");
			}else if((player-1) == (te%2)){
				puts("あなたの負け!\n\n");
			}

			printf("【9】もう一回遊ぶ 【0】もういい : ");
			scanf("%d",&cont);
		}else{
			printf("\nもう一度入力してください\n");
		}
		puts("\n\n#############################\n\n");

	}while(cont);
}

void janken_hutari(void){
	char hand[3][50] = {"グー","チョキ","パー"};
	int player1,player2;
	puts("じゃんけん・・・");

}

int main(void){
	int ninzu;

	puts("\n\n＊＊＊＊＊＊じゃんけんゲーム＊＊＊＊＊＊\n\n");
	printf("【1】1人で遊ぶ 【2】2人で遊ぶ : ");
	scanf("%d",&ninzu);

	if(ninzu == 1){
		janken_hitori();
	}else{
		janken_hutari();
	}

	puts("＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊");
	return 0;

}