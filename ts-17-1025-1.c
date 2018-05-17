#include<stdio.h>
int main(void){
	int ch;
	ch = getchar();
	printf("%d",ch);	/*文字コードの数値を出力*/
	printf("%d",ch-'0');	/*数字文字から得た数値を出力*/

	return 0;
}

/*数字文字から'0'を引くと、数値が得られる['10' - '0' =  10 ]
　数値から'0'を足すと、数字文字が得られる[ 10  + '0' = '10']*/