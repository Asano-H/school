#include<stdio.h>
int main(void){
	int i,sum=0;
	for(i=1;;i++){
		sum+=i;
		printf("sum=%d\n",sum);
		if(i==10) break;
	}
	return 0;
}