/*底の変換公式を使って、log(2)Xを計算する*/

#include<stdio.h>
#include<math.h>
int main(void){
	double no;
	printf("no: ");
	scanf("%lf",&no);
	printf("log(2)%lf = %lf",no,log(no)/log(2.0));
	return 0;
}