#include<stdio.h>
void re(int n){
	if(n>0){
		re(n-1);
		printf("%d",n);
		re(n-2);
	}
}
int main(void){
	int no;
	printf("整数を入力してください");
	scanf("%d",&no);
	re(no);
}