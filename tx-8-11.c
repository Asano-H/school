#include<stdio.h>
int main(void){
	int r;
	int count=0;
	while((r=getchar()) != EDF){
		if(r='\n')
			count++;
	}
	printf("%d",count);

	return 0;
}