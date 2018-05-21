#include<stdio.h>

double bmi(double height,double weight){
	double bm;
	height = height/100;
	bm = weight / (height*height);
	return bm;
}


int main(void){
	double height,weight;

	printf("height(cm): ");
	scanf("%lf",&height);
	printf("weight(kg): ");
	scanf("%lf",&weight);

	printf("BMI = %5.1lf\n",bmi(height,weight));
	return 0;
}