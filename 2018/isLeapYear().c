#include<stdio.h>

int isLeapYear(int year){
	int sign=0;
	if((year%4==0) && ((year%100!=0) || (year%400==0))){
		sign =1;
	}

	return sign;
};


int main(void){
	int year;
	printf("year: ");
	scanf("%d",&year);

	if(isLeapYear(year)){
		printf("閏年です");
	}else{
		printf("閏年ではありません");
	}

	return 0;
}