#include<stdio.h>
#include<string.h>


#define STR_MAX 256

int mystrlen(char *s){
	for(int i=0;s,STR_MAX;i++){
		if(s[i]=='\0')
			return i;
	}
}

int main(void){
	char str[STR_MAX];

	strcpy(str,"I wanna go home.");
	printf("strlen(str) = %d\n",strlen(str));
	printf("mystrlen(str)  = %d\n",mystrlen(str));

	return 0;
}