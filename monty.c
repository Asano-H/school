#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER 10	/*実験する回数*/

int ransu(int num){
	int x;
	srand((unsigned)time(NULL));
		x=rand()%num;
	return x;
}

int nitaku(int no1,no2){
	int choice;
	
	do{
		choice = ransu(2);
	}while(choice == no1 && choice == no2);	/*noの値ではない乱数を返す*/

	return choice;
}


int monty(int *first,int *second){
	int ans,choice1,choice2,hazure,i;

	for(i=0;i<NUMBER;i++){

		ans = ransu(2);	/*景品の入ったドア*/
		choice1 = ransu(2);	/*初めに選んだドア*/

		if(ans == choice1){
			hazure = nitaku(ans,ans);	/*モンティが開けるハズレのドア	ansではないどちらか*/
		}else{
			switch()
		}
		choice2 = nitaku(hazure,ans);	/*二回目に選ぶドア　hazureとans以外のドア*/

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