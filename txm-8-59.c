#include<stdio.h>
int main(void){
	enum singou{red,yellow,blue}
	int sign;

	printf("数値を入力してください(0~2)");
	scanf("%d",sign);

	case(sign){
		red:	printf("とまれ");		break;
		yellow:	printf("ちゅうい");	break;
		blue:	printf("すすめ");		break;
	}
	return 0;

}