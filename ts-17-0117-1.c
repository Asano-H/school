/*１～１０の和を計算するプログラム*/
#include<stdio.h>
int main(void){
	int i=0,sum=0;

	check1:
		sum+=i;
		i++;
		if(i<=10){
			goto check1;	/*iが１０以下のとき、check1へ戻る*/
		}
	printf("%d\n",sum);
	return 0;
}