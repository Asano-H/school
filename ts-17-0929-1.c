#include<stdio.h>
void fill(int a[], int n, int v){
	int i;
	for(i=0; i<n; i++){
		a[i]=v;	/*配列aにv(=0)を代入*/
	}
}

void fill0(int a[], int n){
	fill(a, n, 0);
}

int main(void){
	int a[8]={1,1,1,1, 1,1,1,1};	/*配列aを1で初期化*/
	int j;
	fill0(a,4);
	for(j=0; j<8; j++){
		printf("%d",a[j]);	/*配列の要素を出力*/
	}
	return 0;
}
