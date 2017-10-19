/*階乗*/
#include<stdio.h>
int fact(int no){
	if(no>0)
		return no*fact(no-1);
	else
		return 1;
}

int main(void){
	int num;
	printf("整数を入力してください");
	scanf("%d",&num);

	printf("%dの階乗は%dです",num,fact(num));

	return 0;
}