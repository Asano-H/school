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
	char hand[3][50]={"�O�[","�`���L","�p�["};
	int player,cont,te;
	do{
		puts("����񂯂�E�E�E\n\n");
		printf("�y0�z�O�[ �y1�z�`���L �y2�z�p�[ : ");
		scanf("%d",&player);
		te = ransu();
		if(player>=0 && player<3){
			puts("�|��!");
			printf("���Ȃ�:%s\n  PC  :%s\n",hand[player],hand[te]);
			
			if(player == te){
				printf("������!");
			}else if( 		(player == 0 && te == 1)
						||	(player == 1 && te == 2)
						||	(player == 2 && te == 0)){
				puts("���Ȃ��̏���!");
			}else{
				puts("���Ȃ��̕���!");
			}

			printf("�y9�z�������V�� �y0�z�������� : ");
			scanf("%d",&cont);
		}else{
			printf("������x���͂��Ă�������\n");
		}

	}while(cont);
}

int main(void){
	janken_hitori();
	return 0;

}