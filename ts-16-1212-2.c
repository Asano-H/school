#include<stdio.h>
int main(void){
	int i,sum=0;

	for(i=1;1;i++){
		sum+=i;
	}	/*反復条件が真なので無限ループ*/

	printf("sum=%d\n",sum);
	return 0;
}