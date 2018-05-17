/*カウントダウンのループ*/

#include<stdio.h>
int main(void){

	for(int i=10;i>=0;i--){
		printf("%d, ",i);
	}

	printf("\n");
	int i=10;

	while(i>=0){
		printf("%d, ",i);
		i--;
	}
	printf("\n");

	return 0;
}