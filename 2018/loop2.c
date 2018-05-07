#include<stdio.h>
int main(void){

	for(int i=0;i<100;i=i+3){
		printf("%d, ",i);
	}
	printf("\n");

	int i=0;
	while(i<100){
		printf("%d, ",i);
		i=i+3;
	}
	printf("\n");

	return 0;
}