#include<stdio.h>
#define max(x,y) ((x > y) ? x : y)

int main(void){
	int a,b,c,d;
	int ma,ax;

	printf("�������S���͂��Ă��������F");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	ma = max(max(a,b),max(c,d));
	ax = max(max(max(a,b),c),d);
	
	printf("��ԑ傫���l��%d�ł�\n",ma);
	printf("��ԑ傫���l��%d�ł�\n",ax);
}