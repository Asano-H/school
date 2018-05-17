#include<stdio.h>
int main(void){
	int point;

	printf("“¾“_");
	scanf("%d",&point);

	if(point<=60)
		puts("•s‰Â");
	else if(point<=70)
		puts("‰Â");
	else if(point<=80)
		puts("—Ç");
	else
		puts("—D");

	return 0;
}