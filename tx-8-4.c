/*�x��𔭂���*/
#include<stdio.h>
#define alert() (printf("\a"))/*�x��*/
#define puts_alert(str)  (alert(),puts(str))

int main(void){
	int num;
	printf("��������͂��Ă��������F");
	scanf("%d",&num);
	if (num)
		puts_alert("���̐��͂O�ł͂���܂���");
	else
		puts_alert("���̐��͂O�ł�");
	return 0;
}