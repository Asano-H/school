/*�o�u���\�[�g*/
#include<stdio.h>
#define NUMBER 5

void sort(int a[],int n){
	int i,j;
	for(i=n; i>0; i--){
		if(a[j-1]>a[j]){
			int temp = a[j];
			a[j]     = a[j-1];
			a[j-1]   = temp;
		}
	}
}

int main(void){
	int weight[NUMBER];
	int i;

	printf("%d�̏d����͂��Ă�������\n",NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%d��\n",i+1);
		scanf("%d",weight[i]);
	}

	sort(weight,NUMBER);
	printf("�\\�[�g���܂���");

	for(i=0; i<NUMBER; i++){
		printf("%d�ԁF%d\n",i+1,weight[i]);
	}
	return 0;
}