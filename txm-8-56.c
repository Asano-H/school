#include<stdio.h>
int main(void){
	int no;
	int i=0;
	printf("��������͂��Ă�������");
	scanf("%d",&no);

	for(i=0; i<no; i++)
		putchar('0'+no%3+1);
}