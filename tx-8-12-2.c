#include<stdio.h>
int main(void){
	int i,j,r;
	int cnt[10]={0};

	while((r=getchar()) != EOF){
		if(r >= 48 && r <= 57)
			cnt[r- 48]++;
	}
	puts("”Žš•¶Žš‚ÌoŒ»‰ñ”");
	for(i=0;i<10;i++){
		printf("%dF",i);

		for(j=0;j<cnt[i];j++)
			printf("–");
		printf("\n");
	}
	return 0;
}