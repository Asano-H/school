#include<stdio.h>
#include<stdlib.h>

#define N 100	//ファイル内のデータ数

int main(void){
	FILE *fp;
	fp=fopen("./max_min_ave.txt","r");	//ファイルを読み込む

	int ave=0, max=0, min=RAND_MAX,sort[N];

//ファイル読み込み
	for(int i=0;i<N;i++){
		fscanf(fp,"%d\n",&sort[i]);	//ファイルから一行ずつ読み込み
	}
	fclose(fp);

//最大値を求める
	for(int i=0; i<N; i++){
		if(max<sort[i]){
			max=sort[i];
		}
	}

//最小値を求める
	for(int i=0; i<N; i++){
		if(min>sort[i]){
			min=sort[i];
		}
	}

//平均値を求める
	for(int i=0; i<N; i++){
		ave+=sort[i];
	}

	printf("max: %d\n",max);
	printf("min: %d\n",min);
	printf("ave: %d\n",ave/N);

}