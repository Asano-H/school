/*�K��*/
#include<stdio.h>
int fact(int no){
	if(no>0)
		return no*fact(no-1);
	else
		return 1;
}

int main(void){
	int num;
	printf("��������͂��Ă�������");
	scanf("%d",&num);

	printf("%d�̊K���%d�ł�",num,fact(num));

	return 0;
}