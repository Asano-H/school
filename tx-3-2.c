#include<stdio.h>
int main(void){
	int a,b;

	puts("2�̐�������͂��Ă������B");
	printf("A�F");	scanf("%d",&a);
	printf("B�F");	scanf("%d",&b);

	if(a%b){
		puts("B��A�̖񐔂ł͂Ȃ��B");
	}else{
		puts("B��A�̖񐔁B");
	}
	return 0;
}