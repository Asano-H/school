/*警報を発する*/
#include<stdio.h>
#define alert() (printf("\a"))/*警報*/
#define puts_alert(str)  (alert(),puts(str))

int main(void){
	int num;
	printf("整数を入力してください：")
	scanf("%d",&num);
	if (n)
		puts_alert("その数は０ではありません")
	else
		puts_alert("その数は０です");
	return 0;
}