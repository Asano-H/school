#include<stdio.h>
int main(void){
	
	printf("EOF�̒l��\"%d\"�ł��B\n",EOF);
	printf("EOF�̒l��%d�ł��B",EOF);
	putchar('"');	/*�u�h�v�ƕ\��*/
	putchar('\"');	/*�u�h�v�ƕ\��*/
	putchar('\'');	/*�u'�v�ƕ\��*/
	puts("'");		/*�u'�v�ƕ\��*/

	return 0;
}