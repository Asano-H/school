#include<stdio.h>
int main(void){
	enum singou{red,yellow,blue};
	int sign;

	printf("数値を入力してください(0~2)");
	scanf("%d",sign);

	swith(sign){
		case red:	printf("とまれ");		break;
		case yellow:	printf("ちゅうい");	break;
		case blue:	printf("すすめ");		break;
	}
	return 0;
}