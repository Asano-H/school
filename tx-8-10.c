/*�ő���񐔂����߂�*/
#include<stdio.h>
int gcd(int x,int y){
	if(x==y)
		return x;
	else 
		return gcd(y,x%y);
}

int main(void){
	int x,y;
	printf("\n");
	printf("�w�F");	scanf("%d",&x);
	printf("�x�F");	scanf("%d",&y);

	printf("�ő���񐔂�%d�ł�",gcd(x,y));
	return 0;
}
/*���[�N���b�h�̌ݏ��@
�Q�̐������Q�ӂƂ��������`�����B
�Z���ق��̕ӂ��P�ӂƂ��������`������Ă����B
�]���������`���A����ɒZ���ӂŐ����`�����B
�]�肪�o���Y��ɐ����Ŗ��ߐs�����ꂽ�Ƃ��A
�ł������������`�̂P�ӂ��ő���񐔂ƂȂ�B*/