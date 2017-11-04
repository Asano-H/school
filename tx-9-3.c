#include<stdio.h>
int main(void){
	char s[]= "ABCDEFGHIJK";	/*s[]={'A','B','C','\0'};*/
	char str[100];

	printf("strF");
	scanf("%s",str);	/*&はつけない*/

	printf("s:%s\n",s);
	printf("str:%s\n",str);

	s[3] = '\0';
	str[0] = '\0';
	printf("空文字列にしました\n");
	printf("s:\"%s\"\n",s);
	printf("str:\"%s\"\n",str);

	return 0;
}