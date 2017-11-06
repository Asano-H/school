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
		puts("\n##############################\n");
		puts("‚¶‚á‚ñ‚¯‚ñEEE\n\n");
		printf("y0zƒO[ y1zƒ`ƒ‡ƒL y2zƒp[ : ");
		scanf("%d",&player);
		te = ransu();

		if(player>=0 && player<3){
			puts("\n\nƒ|ƒ“!\n");
			printf("‚ ‚È‚½:%s\n  PC  :%s\n\n",hand[player],hand[te]);
			
			if(player == te){
				puts("‚ ‚¢‚±!\n\n");
			}else if( (player%2) == (te+1)){
				puts("‚ ‚È‚½‚ÌŸ‚¿!\n\n");
			}else if((player-1) == (te%2)){
				puts("‚ ‚È‚½‚Ì•‰‚¯!\n\n");
			}

			printf("y9z‚à‚¤ˆê‰ñ—V‚Ô y0z‚à‚¤‚¢‚¢ : ");
			scanf("%d",&cont);
		}else{
			printf("\n‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		}
		puts("\n\n#############################\n\n");

	}while(cont);
}

void janken_ippai(void){
	char hand[3][50] = {"ƒO[","ƒ`ƒ‡ƒL","ƒp["};
	int player1,player2;
	puts("‚¶‚á‚ñ‚¯‚ñEEE")

}

int main(void){
	int ninzu;

	puts("\n\n––––––‚¶‚á‚ñ‚¯‚ñƒQ[ƒ€––––––\n\n");
	printf("y1z1l‚Å—V‚Ô y2z2l‚Å—V‚Ô : ");
	scanf("%d",&ninzu);

	if(ninzu == 1){
		janken_hitori();
	}else{
		janken_hutari();
	}

	puts("––––––––––––––––––");
	return 0;

}