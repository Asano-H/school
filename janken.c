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
	int player;
	do{
		puts("����񂯂�E�E�E\n\n");
		printf("�y0�z�O�[ �y1�z�`���L �y2�z�p�[:");
		scanf("%d",&player);
		
		if(player=>0 && player<3){
			puts("�|��!");
			printf("���Ȃ�:%s\n  PC  :%s\n",hand[player],hand[ransu()]);
		}else{
			printf("������x���͂��Ă�������\n");

		}

	}while(cont)
}

int main(void){
	janken_hitori();
	return 0;

}