#include<stdio.h>

#define LV_MAX 10	/*レベル上限*/

int main(void){
	int line[LV_MAX] = {0,4,8,16,32,64,128,256,512,1024};
	int ex;	/*現在の経験値*/
	int get;	/*取得した経験値*/
	int lv;	/*現在のレベル*/
	int temp;

	printf("now level:");
	scanf("%d",&lv);
	printf("now exp point:");
	scanf("%d",&ex);
	printf("get exp point:");
	scanf("%d",&get);

	ex += get;
	temp = ex;

	for(int i=lv;i<LV_MAX;i++){
		if(line[i]<=ex){
			ex = ex-line[i];
			lv = i+1;
			printf("levelup! %dlv\n",lv);
		}
	}
	ex = temp;
	printf("now exp point :%dpt\n",ex);
	if(lv<LV_MAX)
		printf("next level %dpt\n",line[lv]-ex);

	return 0;
}