/*�z��Ɋi�[���ꂽ��������󕶎���ɂ���*/
#include<stdio.h>
int main(void){
	char s[]= "ABCDEFGHIJK";	/*s[]={'A','B','C','\0'};*/�@
	char str[100];

	printf("str�F");
	scanf("%s",str);	/*&�͂��Ȃ�*/

	printf("s�́F%s\n",s);
	printf("str�́F%s\n",str);

	s[3] = '\0';
	str[0] = '\0';
	printf("�󕶎���ɂ��܂���\n");
	printf("s��\"%s\"\n",s);
	printf("str��\"%s\"\n",str);

	return 0;
}