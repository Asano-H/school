#include<stdio.h>
int main(void){
	int i,j,r;
	int cnt[10]={0};

	while((r=getchar()) != EOF){
		if(r >= 48 && r <= 57)
			cnt[r- 48]++;
	}
	puts("数字文字の出現回数");
	for(i=0;i<10;i++){
		printf("%d：",i);

		for(j=0;j<cnt[i];j++)
			printf("＊");
		printf("\n");
	}
	return 0;
}