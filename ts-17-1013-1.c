#include<stdio.h>
int main(void){
	int a,b;
	printf("�Q�̐�������͂��Ă�������\n");
	printf("�����`�F"); scanf("%d",&a);
	printf("�����a�F"); scanf("%d",&b);
	if(a>b){
		int temp = b;
			   b = a;
			   a = temp;
		printf("����ւ��܂����B\n�`�F%d�a�F%d",a,b);
	}
	return 0;
}