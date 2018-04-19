/*キーボードから入力された面積に対して、坪数と東京ドーム何個分か返す*/

#include<stdio.h>
int main(void){
	double r;
	printf("面積：");
	scanf("%lf",&r);
	printf("%f坪\n",r/3.3);
	printf("東京ドーム%f個分",r/46755.0);

	return 0;
}