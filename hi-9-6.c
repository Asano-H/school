#include<stdio.h>
int str_char(const char s[],int c){
	int i;
	for(i=0;s[i]>'\0';i++)
		if(s[i]==c)
			return i;
	return -1;
}

int main(void){
	char s[80],c;
	int n;
	printf("���������͂��Ă��������F");
	scanf("%s",s);
	printf("�T��������������͂��Ă��������F");
	scanf(" %c",&c);

	n = str_char(s,c);

	if(n<0){
		printf("���̕����͊܂܂�Ă��܂���");
	}else{
		printf("%s�̒���%c���ŏ��ɏo������Y����%d�ł�",s,c,n);
	}

	return 0;
}