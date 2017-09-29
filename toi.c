/*配列ｂを初期化する*/
#include<stdio.h>
void fill(int a[],int n,int v){
	int i;
	for(i=0;i<n;i++)
		a[i]=v;	/*配列aにv(=0)を代入する*/
}
void fill0(int x[],int n){
	fill(x,n,0);	/*関数fillに配列x n 0をわたす*/
}
int main(void){
	int b[5],i;
	fill0(b,5);	/*関数fill0にbと５をわたす*/
	for(i=0;i<5;i++)
		printf("b[%d]=%d\n",i,b[i]);
	
	return 0;
}