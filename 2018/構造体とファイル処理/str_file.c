#include<stdio.h>
#include<string.h>

#define MEMBER 5
#define LIST 3
#define NAME_LEN 64

typedef struct student{
	char name[NAME_LEN];	//名前
	int height;				//身長
	float weight;			//体重
}student;

void swap(student *a,student *b){
	student tmp = *a;
			 *a = *b;
			 *b = tmp;
}

int main(void){
	student data[MEMBER];
	int x=0;
	int i,j;

//データ入力
	for(i=0; i<MEMBER; i++){
	printf("No.%d\n",++x);
	printf("Name:");	scanf("%s",data[i].name);
	printf("Height:");	scanf("%d",&data[i].height);
	printf("Weight:");	scanf("%f",&data[i].weight);
	printf("\n");
	}

//データを身長順にソート
	for(i=0; i<MEMBER; i++){
		for(j=0; j<MEMBER; j++)
			if(data[j].height>data[j+1].height)
				swap(&data[j],&data[j+1]);
	}


		for(i=0; i<MEMBER; i++){
		printf("%-8s %6d %6.1f \n", data[i].name, data[i].height, data[i].weight);
	}

	FILE *fp;
	fp=fopen("str_file.txt","w");
	if(fp==NULL){
		printf("ファイルを開けません");
	}else{
		for(i=0; i<MEMBER; i++){
			fprintf(fp,"%-8s %6d %6.1f \n", data[i].name, data[i].height, data[i].weight);
		}
	}
	fclose(fp);

		return 0;
}