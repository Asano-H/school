#include<stdio.h>
#include<string.h>

#define MEMBER 5
#define LIST 4
#define NAME_LEN 64

typedef struct student{
	char name[NAME_LEN];	//名前
	int height;				//身長
	float weight;			//体重
	long schols;			//奨学金
}student;

void swap(student *a,student *b){
	student tmp = *a;
			 *a = *b;
			 *b = tmp;
}

void Height_Sort(student x[MEMBER]){
	int i,j;
	for(i=0; i<MEMBER; i++){
		for(j=0; j<LIST; j++){
			if(x[j+1].height>x[j].height)
				swap(&x[j+1],&x[j]);
		}
	}
}

void Name_sort(student x[MEMBER]){
	int i,j;
	for(i=0; i<MEMBER; i++){
		for(j=0; j<LIST; j++){
			if(strcmp(x[j+1].name,x[j].name)<0)
				swap(&x[j+1],&x[j]);
		}
	}
}


int main(void){
	student data[MEMBER];
	int sort;
	int x=0;
	int i,j;

	for(i=0; i<MEMBER; i++){
		printf("No.%d\n",++x);
		printf("Name:");	scanf("%s",data[i].name);
		printf("Height:");	scanf("%d",&data[i].height);
		printf("Weight:");	scanf("%f",&data[i].weight);
		printf("Schols:");	scanf("%ld",&data[i].schols);
		printf("\n");
	};

	printf("Sort type? [0]・・・Name [1]・・・Height");
	scanf("%d",&sort);

	if(sort){
		Height_Sort(data);
	}else{
		Name_sort(data);
	}

	for(i=0; i<MEMBER; i++){
		printf("%-8s %6d %6.1f %7ld \n", data[i].name, data[i].height, data[i].weight, data[i].schols);
	}

	return 0;
}