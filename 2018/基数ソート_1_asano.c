#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUMBER 20000



int main(void){
	clock_t t_start,t_end;
	t_start = clock();

	srand((unsigned)time(NULL));
	int data[NUMBER]={0};

	//乱数生成
	for(int i=0;i<NUMBER;i++){
		data[i]=rand();
	}

	//基数ソート
	int flag=1;

	for(int keta=1;keta<5;keta++){
		for(int i=0;i<NUMBER;i++){
			int j=i;
			while(((data[j-1]/keta)>(data[j]/keta)) && (j>0)){
				int tmp = data[j];
				data[j] = data[j-1];
				data[j-1] = tmp;
				j--;
			}
		}
	}








	//表示
	for(int i=0;i<NUMBER;i++){
		printf("[%d]=%d\n",i,data[i]);
	}

	t_end=clock();
	printf("実行時間:%f\n",(double)(t_end-t_start)/CLOCKS_PER_SEC);

return 0;

}