/*1up判定*/

#include<stdio.h>

int oneup(int n,int g){
	int up=0;

	if((n<10000)&& (n+g>=10000)){
		g -= 10000-n;
		n = 0;
		up = 1;

	}else{
		n =10000; 
	}

	up += ((n+g)/30000)-(n/30000);

	return up;
}


int main(void){
	int now_p,gets_p;

	printf("現在のポイント: ");
	scanf("%d",&now_p);
	printf("何ポイントの敵？: ");
	scanf("%d",&gets_p);

	printf("%dup",oneup(now_p,gets_p));

	return 0;

}