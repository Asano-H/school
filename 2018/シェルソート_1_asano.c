#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUMBER 20000
#define N 4


int main(void){
	clock_t t_start,t_end;
	t_start = clock();

	srand((unsigned)time(NULL));
	int data[NUMBER]={0};

	int flag=N;

	//乱数生成
	for(int i=0;i<NUMBER;i++){
		data[i]=rand();
	}

	//シェルソート
	while(flag){
		for(int i=1;i<NUMBER;i++){
			int j=i;
			while(data[j-flag]>data[j] && (j>=flag)){
				int tmp = data[j];
				data[j] = data[j-flag];
				data[j-flag] = tmp;
				j=j-flag;
			}
		}
		if(flag/2 != 0){
			flag = flag/2;
		}else if(flag==1){
			flag = 0;
		}else{
			flag=1;
		}

	}

	for(int i=0;i<NUMBER;i++){
		printf("[%d]=%d\n",i,data[i]);
	}



	t_end=clock();
	printf("実行時間:%f\n",(double)(t_end-t_start)/CLOCKS_PER_SEC);

return 0;

}