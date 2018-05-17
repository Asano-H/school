#include<stdio.h>
int main(void){
	int line;
	int count=0;
	while((line=getchar()) != EOF){
		if(line=='\n')
			count++;
	}
	printf("s”F%d\n",count);

	return 0;
}