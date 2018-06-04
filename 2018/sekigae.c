#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define CLASS_NUMBER 10	/*クラスの人数*/
#define NAME 10	/*名前文字数*/

int ransu(int no){
	int ran;
	ran= rand()%no;	/*乱数生成*/
	return ran;
}


int main(void){
	srand(time(NULL));

	char name[CLASS_NUMBER][NAME];
	char temp[NAME];


	/*名前を入力*/
	for(int i=0;i<CLASS_NUMBER;i++){
			printf("No.%d:",i+1);
			scanf("%s",&name[i]);
			
	}

	/*名前一覧*/
	for(int i=0;i<CLASS_NUMBER;i++){
		printf("  No.%d:%s  ",i+1,name[i]);
		if((i%5==0)){
			printf("\n");
		}
	}

	printf("\n\nshuffle!\n\n");

	/*席替え*/
	for(int i=0;i<CLASS_NUMBER*2;i++){
		int a=ransu(CLASS_NUMBER);
		int b=ransu(CLASS_NUMBER);
		strcpy(temp,name[a]);
		strcpy(name[a],name[b]);
		strcpy(name[b],temp);
	}

	/*席替え後の名前一覧*/
	for(int i=0;i<CLASS_NUMBER;i++){
		if((i%5==0)){
			printf("\n");
		}
		printf("  %2d番の座席：%10s  ",i+1,name[i]);
		
	}

	return 0;
}