#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER 100	/*���������*/

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
	}while(choice == no1 && choice == no2);	/*no�̒l�ł͂Ȃ�������Ԃ�*/

	return choice;
}


int monty(int *first,int *second){
	int ans,choice1,choice2,hazure,i;

	for(i=0;i<NUMBER;i++){

		ans = ransu(3);	/*�i�i�̓������h�A*/
		choice1 = ransu(3);	/*���߂ɑI�񂾃h�A*/

		hazure = monty_choice(ans,choice1);	/*�����e�B���J����n�Y���̃h�A	ans,choice1�ł͂Ȃ��ǂ��炩*/
		choice2 = monty_choice(hazure,hazure);	/*���ڂɑI�ԃh�A�@hazure�ȊO�̃h�A*/

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
	
	printf("����������\n");
	printf("�I����ς��Ȃ������Ƃ��F%d\n",c1);
	printf("�I����ς����Ƃ��F%d\n",c2);

	return 0;
}