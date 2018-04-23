/*曜日を求める*/

#include<stdio.h>
int main(void){
	int y,m,d,h;
	printf("年(西暦)：");
	scanf("%d",&y);
	printf("月：");
	scanf("%d",&m);
	printf("日：");
	scanf("%d",&d);

	if(m==1){
		y=y-1;
		m=13;
	}else if(m==2){
		y = y-1;
		m = 14;
	}

	h = y+(y/4)-(y/100)+(y/400)+((13*m+8)/5)+d;

	switch(h%7){
		case 0: printf("Sunday");		break;
		case 1: printf("Monday");		break;
		case 2: printf("Tuesday");		break;
		case 3: printf("Wednesday");	break;
		case 4: printf("Thursday");		break;
		case 5: printf("Friday");		break;
		case 6: printf("Saturday");		break;
	}

	return 0;
}