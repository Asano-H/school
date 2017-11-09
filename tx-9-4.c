#include<stdio.h>
#define NUM 5

int main(void){
	int i,n;
	char str[NUM][256];

	n=NUM;
	for(i=0;i<NUM;i++){
		printf("str[%d] : ",i);
		scanf("%s",str[i]);
		if(	str[i][0]='$' && str[i][1]='$' && str[i][2]='$'
			str[i][3]='$' && str[i][4]='$'){
			n=i;
			break;
		}
	}

	for(i=0;i<n;i++){
		printf("str[%d] : \"%s\"\n",i,str[i]);
	}
}