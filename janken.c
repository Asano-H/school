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
	char hand[3][50]={"ƒO[","ƒ`ƒ‡ƒL","ƒp["};
	int player,cont,te;
	do{
		puts("‚¶‚á‚ñ‚¯‚ñEEE\n\n");
		printf("y0zƒO[ y1zƒ`ƒ‡ƒL y2zƒp[ : ");
		scanf("%d",&player);
		te = ransu();
		if(player>=0 && player<3){
			puts("ƒ|ƒ“!");
			printf("‚ ‚È‚½:%s\n  PC  :%s\n",hand[player],hand[te]);
			
			if(player == te){
				printf("‚ ‚¢‚±!");
			}else if( 		(player == 0 && te == 1)
						||	(player == 1 && te == 2)
						||	(player == 2 && te == 0)){
				puts("‚ ‚È‚½‚ÌŸ‚¿!");
			}else{
				puts("‚ ‚È‚½‚Ì•‰‚¯!");
			}

			printf("y9z‚à‚¤ˆê‰ñ—V‚Ô y0z‚à‚¤‚¢‚¢ : ");
			scanf("%d",&cont);
		}else{
			printf("‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		}

	}while(cont);
}

int main(void){
	janken_hitori();
	return 0;

}