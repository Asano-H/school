#include<stdio.h>
int main(void){
	double r;
	printf("面積：");
	scanf("%lf",&r);
	printf("%f坪\n",r/3.3);
	printf("東京ドーム%f個分",r/46755.0);

	return 0;
}