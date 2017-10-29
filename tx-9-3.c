/*配列に格納された文字列を空文字列にする*/
#include<stdio.h>
int main(void){
	char s[]= "ABCDEFGHIJK";	/*s[]={'A','B','C','\0'};*/　
	char str[100];

	printf("str：");
	scanf("%s",str);	/*&はつけない*/

	printf("sは：%s\n",s);
	printf("strは：%s\n",str);

	s[3] = '\0';
	str[0] = '\0';
	printf("空文字列にしました\n");
	printf("sは\"%s\"\n",s);
	printf("strは\"%s\"\n",str);

	return 0;
}