#include<stdio.h>

void set(int *a, int no){
	int i;
	for(i=0;i<n;i++){
		v[i]=i;
	}
}
int main(void){
	int i;
	int a[10];
	set(a,5);

	for(i=0;i<10;i++){
		printf("a[%d]=%d",i,a[i]);
	}
	return 0;
}