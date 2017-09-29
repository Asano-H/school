#include<stdio.h>
void fill(int a[], int n, int v){
	int i;
	for(i=0; i<n; i++){
		a[i]=v;
	}

void fill0(int a[], int n){
	fill(a, n, 0);
}

int main(void){
	int a[8]={1,1,1,1, 1,1,1,1};
	int j;
	fill0(a,4);
	for(j=0; j<8; j++){
		printf("%d",a[j]);
	}
	return 0;
}