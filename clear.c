#include<stdio.h>
void show(int v[], int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d�Ԗڂ̗v�f�F%d\n",i,v[i]);
	}
}

void clear(int v[], int len, int val){
	int i;
	for(i=0; i<len; i++){
		v[i]=val;
	}
}
int main(void){
	int x[5]={1,30,-5,2,5000};
	puts("(�������)");
	show(x,5);
	clear(x,5,100);
	puts("(clear�֐����ďo������)");
	show(x,5);
	return 0;
}