/*Don't write Japanese!!!!!!! fuck !!!!!!*/
#include<stdio.h>
int main(void){
	char s[]= "ABCDEFGHIJK";	/*s[]={'A','B','C','\0'};*/@
	char str[100];

	printf("strF");
	scanf("%s",str);	/*&‚Í‚Â‚¯‚È‚¢*/

	printf("s‚ÍF%s\n",s);
	printf("str‚ÍF%s\n",str);

	s[3] = '\0';
	str[0] = '\0';
	printf("‹ó•¶Žš—ñ‚É‚µ‚Ü‚µ‚½\n");
	printf("s‚Í\"%s\"\n",s);
	printf("str‚Í\"%s\"\n",str);

	return 0;
}