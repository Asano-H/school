#include<stdio.h>
int main(void){
	int point;

	printf("���_");
	scanf("%d",&point);

	if(point<=60)
		puts("�s��");
	else if(point<=70)
		puts("��");
	else if(point<=80)
		puts("��");
	else
		puts("�D");

	return 0;
}