/*以下のプログラムの実行結果を答えなさい。*/
#include<stdio.h>
int main(void){
	int i=2;
	switch(i){
		case 1:
			printf("a");
		case 3:
			printf("b");
		case 5:
			printf("c");
	}
	return 0;
}

/*i=2で定義されている。
switch文中に当てはまるものが無く、defaultも無いので、実行結果は表示無し*/
