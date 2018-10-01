#include<stdio.h>
#include<time.h>

#define SOSU_MAX 100		//Maxを100にする

int main(void){
	clock_t t_start,t_end;
	t_start = clock();

	int prime[SOSU_MAX]={0};		//prime から削除
	int a=2;					//i1を２にする。


	for(int i=0;i<SOSU_MAX-1;i++){	//Max-1回くりかえす
		int b=2;	//i2を２にする

		int flg=1;		//flgを１にする
		for(int j=0;j<a-2;j++){		//i1-2回繰り返す
			if((a%b)==0)		//もしi1/i2の余り=０のとき
				flg=0;	//flgを0
			b++;	//割る数を１増やす
		}
		if(flg)
			prime[i]=a;
		a++;
	}

	printf("SOSU_list");
	for(int i=0;i<SOSU_MAX;i++){
		if(prime[i])
			printf("%d\n",prime[i]);
	}


	t_end=clock();
	printf("実行時間:%f\n",(double)(t_end-t_start)/CLOCKS_PER_SEC);

	return 0;
}