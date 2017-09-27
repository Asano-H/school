#include<stdio.h>
void fill(int a[],int n,int v){
	int i;
	for(i=0;i<n;i++)
		a[i]=v;
}
void fill0(int x[],int n){
	fill(x,n,0);
}
int main(void){
	int b[5],i;
	fill0(b,5);
	for(i=0;i<5;i++)
		printf("b[%d]=%d\n",i,b[i]);
	return 0;
}