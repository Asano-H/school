#include<stdio.h>
int getlen(const char s[]){
	int i;
	for(i=0;s[i]>'0';i++){}

	return i;
}

int main(void){
	printf("123‚Ì’·‚³%d\n",getlen("123"));
	printf("abcde‚Ì’·‚³F%d\n",getlen("abcde"));
	return 0;
}