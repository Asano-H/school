#include<stdio.h>
int main(void){
	for(int i=1;i<=100;i++){
		x=i;
		printf("%d",x);
		while(x!=1){
			if(x%2 == 0){
				x =x/2;
			}else{
				x = X*3+1;
			}
			printf("→%d",x);
		}
		printf("\n");
	}
	return 0;
}