#include<stdio.h>
int main(void){
	int s[],str[];
	s[] = "ABC";
	printf("strは：");
	scanf("%s",&str);

	printf("sは：%s",s);
	printf("strは：%s",str);

	s = '\0';
	str = '\0';
	printf("sは%s",s);
	printf("strは%s",str);

	return 0;

}