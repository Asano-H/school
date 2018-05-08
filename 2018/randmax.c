#include<stdio.h>
#include<stdlib.h>

int main(void){
	int dec,i;
	int bin[256];
	printf("RAND_MAX = %d\n",RAND_MAX);
	
	dec = RAND_MAX;
	for(i=0;dec>0;i++){
		bin[i]= dec%2;
		dec = dec/2;
	}

	printf("2進数 = ");
	while(i>0){
		printf("%d",bin[--i]);
	}

	return 0;

}