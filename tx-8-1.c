#include<stdio.h>
#define diff(x,y) ((x > y) ? (x - y) : (y - x)) 

int main(void){
	int a,b;
	printf("��̐�������͂��Ă��������F");
	scanf("%d,%d",&a,&b);
	printf("��̐����̍���%d�ł�",diff(a,b));
	return 0;
}
