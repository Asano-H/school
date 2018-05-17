#include<stdio.h>
#include<math.h>

int sosu(int x){
	int i;
	if(x<=0) return 1;
	if(x==2) return 0;
	if(x%2==0) return 1;

	for(i=3;i<=(int)(sqrt(x));i+=2){
		if(x%i==0) return 1;
	}

	return 0;
}


int main(void){
	for(int i=4;i<=100;i++){
		printf("%d",i);
		for(int j=2;j<=i/2;j++){
			if((sosu(j)==0) && (sosu(i-j)==0)){
				printf(" = %d+%d",j,i-j);
			}
		}
		printf("\n");
	}
	return 0;
}