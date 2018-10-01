#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

#define SOSU_MAX 100

int main(void){
	clock_t t_start,t_end;
	t_start = clock();

	char tansaku[SOSU_MAX]={0};
	for(int i=0;i<SOSU_MAX-1;i++){
		tansaku[i]=i+2;		//探索リストに2～Nまでの自然数を入れる
	}

	int max=sqrt(SOSU_MAX);		//Nの平方根
	char sosu[SOSU_MAX]={0};


	for(int i=0;i<max;i++){
		if(tansaku[i]){
			sosu[i]=tansaku[i];		//探索リストの先頭の数を素数リストへ移動

			for(int j=0;j<SOSU_MAX;j++){
				if((tansaku[j]%sosu[i])==0)		//その倍数を探索リストから削除
					tansaku[j]=0;
			}
		}
	}

	memmove(sosu+max,tansaku,SOSU_MAX);

	for(int i=0;i<SOSU_MAX+max;i++){
		if(sosu[i])
			printf("%d\n",sosu[i]);
	}


	
	t_end=clock();
	printf("実行時間:%f\n",(double)(t_end-t_start)/CLOCKS_PER_SEC);

	return 0;
}