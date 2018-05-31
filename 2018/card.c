#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MARKMAX 4
#define NUMMAX 13

int ransu(int no){
	int ran;
	ran= rand()%no;
	return ran;
}


int main(void){
	int mark[MARKMAX] = {0,1,2,3};	/*マーク４種*/
	int num[NUMMAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13};	/*ジョーカーを除いた数*/

	srand(time(NULL));
	for(int i=0;i<MARKMAX;i++){
		for(int j=0;j<NUMMAX;j++){
			printf("%d-%d  ",mark[i],num[j]);	/*一覧を表示*/
		}
		printf("\n");
	}


	printf("\nshuffle!!\n");


	for(int i=0;i<100;i++){
		int a,b,c,d;
		a = ransu(MARKMAX);
		b = ransu(MARKMAX);
		c = ransu(NUMMAX);
		d = ransu(NUMMAX);

		int temp_mark = mark[a];
		mark[a] = mark[b];
		mark[b] =temp_mark;

		int temp_num = num[c];
		num[c] = num[d];
		num[d] = temp_num;
	}

	for(int i=0;i<MARKMAX;i++){
		for(int j=0;j<NUMMAX;j++){
			printf("%d-%d  ",mark[i],num[j]);	/*一覧を表示*/
		}
		printf("\n");
	}

	return 0;

}