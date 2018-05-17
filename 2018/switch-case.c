/*switch-case 文*/

#include<stdio.h>
int main(void){
	int no;
	printf("何月？：");
	scanf("%d",&no);
	switch(no){
		case 3: 
		case 4: 
		case 5: printf("春\n");
		case 6: 
		case 7: 
		case 8: printf("夏\n");
		case 9: 
		case 10:
		case 11: printf("秋\n");
		case 12:
		case 1:
		case 2: printf("冬\n");
	}
	return 0;
}

/*breakが無い場合、その下に連なるcase文のブロックも全て実行される。*/