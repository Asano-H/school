#include<stdio.h>
int str_chnum(const char s[],int c){
	int i,count=0;
	for(i=0;s[i] > '0';i++){
		if(s[i]==c){
			count++;
		}		
	}
	return count;

}

int main(void){
	char s[80],c;
	printf("���������͂��Ă�������:");
	scanf("%s",s);
	printf("�T��������������͂��Ă�������:");
	scanf(" %c",&c);

	printf("������%s�̒��ɂ͕���%c��%d�܂܂�Ă��܂�",s,c,str_chnum(s,c));

	return 0;
}