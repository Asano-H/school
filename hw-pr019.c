/*無限ループ*/
#include<stdio.h>
int main(void){
	int i,sum=0;
	for(i=1;1;i++){
		printf("Ctrl+Cを押してください");
		sum+=i;
	}
	printf("sum=%d\n",sum);
	return 0;
}