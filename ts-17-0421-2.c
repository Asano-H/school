/*整数値を読み込んで、逆順に表示するプログラム*/
#include<stdio.h>
int main(void){

	int x;
	scanf("%d",&x);

	while(x>0){
		printf("%d",x%10);	/*最下位の桁の値を表示する*/
		x/=10;	/*⇒に１桁ずらす*/
	}
	return 0;
}