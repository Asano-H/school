#include<stdio.h>
int main(void){
	char s[100],str[100];
	s == "ABC";
	printf("strは：");
	scanf("%s",&str);

	printf("sは：%s",s);
	printf("strは：%s",str);

	s[0] = '\0';
	str[0] = '\0';
	printf("sは%s",s);
	printf("strは%s",str);

	return 0;

}