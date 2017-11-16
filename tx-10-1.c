#include<stdio.h>

void poin(int *no){
	if(*no < 0)
		*no = 0;
	if(*no >100)
		*no = 100;
}

int main(void){
	int poi;
	puts("値を入力：");
	scanf("%d",&poi);

	poin(poi);
	printf("%d",poi);

	return 0;
}