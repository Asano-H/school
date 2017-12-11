#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER 100	/*実験する回数*/

int ransu(int num){
	int x;
	srand((unsigned)time(NULL));
		x=rand()%num;
	return x;
}

int monty_choice(int no1,int no2){
	int choice;
	
	do{
		choice = ransu(3);
	}while(choice == no1 && choice == no2);	/*noの値ではない乱数を返す*/

	return choice;
}


int monty(int *first,int *second){
	int ans,choice1,choice2,hazure,i;

	for(i=0;i<NUMBER;i++){

		ans = ransu(3);	/*景品の入ったドア*/
		choice1 = ransu(3);	/*初めに選んだドア*/

		hazure = monty_choice(ans,choice1);	/*モンティが開けるハズレのドア	ans,choice1ではないどちらか*/
		choice2 = monty_choice(hazure,hazure);	/*二回目に選ぶドア　hazure以外のドア*/

		if(ans == choice1 && choice1 == choice2){
			*first++;
		}else{
			*second++;
		}
	}	
}

int main(void){
	int c1,c2;
	monty(&c1,&c2);
	
	printf("正解した数\n");
	printf("選択を変えなかったとき：%d\n",c1);
	printf("選択を変えたとき：%d\n",c2);

	return 0;
}