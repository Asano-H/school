/*組み合わせの数*/
#include<stdio.h>
int comb(int n,int r){
	if( n==r || n ==0 )
		return 1;
	else if( r==1 )
		return n;
	return comb(n-1,r-1) + comb(n-1,r);
}
int main(void){
	int n,r;
	printf("異なるn個からr個を取り出す組み合わせの数を求める\n");
	printf("n：");	scanf("%d",&n);
	printf("r：");	scanf("%d",&r);
	printf("組み合わせの数：%d",comb(n,r));
}


/*nCr = n-1Cr-1 + n-1Cr 
  nC0 = nCn =1
  nC1 = n 	 			*/