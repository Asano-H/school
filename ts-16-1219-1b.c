#include<stdio.h>
int main(void){
	int sum,i;
	sum=100;
	i=0;

	while(i<=10){
		sum-=5;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}