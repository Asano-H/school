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
		puts("\n##############################\n");
		puts("����񂯂�E�E�E\n\n");
		printf("�y0�z�O�[ �y1�z�`���L �y2�z�p�[ : ");
		scanf("%d",&player);
		te = ransu();

		if(player>=0 && player<3){
			puts("\n\n�|��!\n");
			printf("���Ȃ�:%s\n  PC  :%s\n\n",hand[player],hand[te]);
			
			if(player == te){
				puts("������!\n\n");
			}else if( (player%2) == (te+1)){
				puts("���Ȃ��̏���!\n\n");
			}else if((player-1) == (te%2)){
				puts("���Ȃ��̕���!\n\n");
			}

			printf("�y9�z�������V�� �y0�z�������� : ");
			scanf("%d",&cont);
		}else{
			printf("\n������x���͂��Ă�������\n");
		}
		puts("\n\n#############################\n\n");

	}while(cont);
}

void janken_ippai(void){
	char hand[3][50] = {"�O�[","�`���L","�p�["};
	int player1,player2;
	puts("����񂯂�E�E�E")

}

int main(void){
	int ninzu;

	puts("\n\n����������������񂯂�Q�[��������������\n\n");
	printf("�y1�z1�l�ŗV�� �y2�z2�l�ŗV�� : ");
	scanf("%d",&ninzu);

	if(ninzu == 1){
		janken_hitori();
	}else{
		janken_hutari();
	}

	puts("������������������������������������");
	return 0;

}