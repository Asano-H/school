/*�g�ݍ��킹�̐�*/
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
	printf("�قȂ�n����r�����o���g�ݍ��킹�̐������߂�\n");
	printf("n�F");	scanf("%d",&n);
	printf("r�F");	scanf("%d",&r);
	printf("�g�ݍ��킹�̐��F%d",comb(n,r));
}


/*nCr = n-1Cr-1 + n-1Cr 
  nC0 = nCn =1
  nC1 = n 	 			*/