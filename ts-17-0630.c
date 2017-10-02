#include<stdio.h>
void suretu_keisan(int n){
	int i,j;
	int a[101]={1,1};
	for(i=2;i<=n;i++)
		a[i]=a[i-2] + a[i-1];
	for(j=0;j<=n-1;j++)
		printf("%d\n",a[j]);	
}
int main(void){
	int x;
	printf("何項まで表示しますか(1～100)：");
	scanf("%d",&x);
	suretu_keisan(x);

	return 0;
}