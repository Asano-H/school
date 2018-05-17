#include<stdio.h>
int main(void){

	int i=0;

	while(1){
		if(i==4)
			goto end;	/*iが４のとき、endへ移動する*/
		printf("i=%d\n",i);
		i+=2;
	}

	printf("out of while\n");	/*実行結果では出力されない*/
end:
	printf("end\n");
	return 0;
}