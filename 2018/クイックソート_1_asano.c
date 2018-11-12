#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUMBER 20000

	//クイックソート
void Q_sort(int data[],int left ,int right){
	int i = left;	//左端
	int j = right;	//右端
	int pivot;
	
	pivot = data[(left+right)/2];	//中央値を軸に

	while(1){
		while(data[i]<pivot){i++;}	//軸より大きい値を探す
		while(data[j]>pivot){j--;}	//軸より小さい値を探す
		if(i>=j)break;	//iの方がjより大きかったらやめる

		int tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		i++;
		j--;
	}

	if(left<(i-1)){Q_sort(data,left,i-1);}
	if((j+1)<right){Q_sort(data,j+1,right);}

}



int main(void){
	clock_t t_start,t_end;
	t_start = clock();

	srand((unsigned)time(NULL));
	int data[NUMBER]={0};

	//乱数生成
	for(int i=0;i<NUMBER;i++){
		data[i]=rand();
	}


	Q_sort(data,0,NUMBER);

	for(int i=0;i<NUMBER;i++){
		printf("[%d]=%d\n",i,data[i]);
	}

	t_end=clock();
	printf("実行時間:%f\n",(double)(t_end-t_start)/CLOCKS_PER_SEC);

	return 0;
}