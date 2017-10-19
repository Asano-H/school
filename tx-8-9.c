/*組み合わせの数を求める*/
#include<stdio.h>
int comb(int n,int r){
	if( n==r || n ==0 )
		return 1;
	else if( r==1 )
		return n;
	
	

}


/*nCr = n-1Cr-1 + n-1Cr 
  nC0 = nCn =1
  nC1 = n 	 			*/